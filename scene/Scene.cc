#include "Scene.h"
#include "RootBoundingBox.h"
#include "LeafBoundingBox.h"
#include "Random.h"
#include "Texture.h"
#include <sstream>
#include <iostream>
#include <assert.h>

#define JITTER_COUNT 5

Scene::Scene()
{
	_ambience = Color3f(1, 1, 1);
	_maxDepth = 0;
}

Scene::Scene(const Scene &s) { }

Scene::~Scene()
{
	int i;

	for (i = 0; i < _lights.size(); i++)
		if (_lights[i]) delete _lights[i];

	for (i = 0; i < _textures.size(); i++)
		if (_textures[i]) delete _textures[i];
}

const Scene &Scene::operator=(const Scene &s) { return *this; }

const Camera &Scene::camera() const { return _camera; }
const Color3f &Scene::background() const { return _background; }
const Color3f &Scene::ambience() const { return _ambience; }
unsigned int Scene::lights() const { return _lights.size(); }
unsigned int Scene::maxDepth() const { return _maxDepth; }

const Light *Scene::light(unsigned int i) const
{
	assert(i >= 0 && i < _lights.size());
	return _lights[i];
}

void Scene::camera(const Camera &c) { _camera = c; }
void Scene::background(const Color3f &bg) { _background = bg; }
void Scene::ambience(const Color3f &a) { _ambience = a; }

void Scene::add_light(Light *l)
{
	assert(l != NULL);
	_lights.push_back(l);
}

void Scene::add_texture(Texture *t)
{
	assert(t != NULL);
	_textures.push_back(t);
}

void Scene::add_box(AbstractBoundingBox *box)
{
	_root.add_child(box);
}

string Scene::hierarchy() const
{
	return _root.toString();
}

void Scene::maxDepth(unsigned int depth) { _maxDepth = depth; }

string Scene::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<scene>" << endl;
	result << _camera.to_xml(indent_string, indent_count + 1);
	result << indent << indent_string << "<background>" << _background.to_xml() << "</background>" << endl;
	result << indent << indent_string << "<ambience>" << _ambience.to_xml() << "</ambience>" << endl;
	vector< Light* >::const_iterator light_iterator;
	for (light_iterator = _lights.begin(); light_iterator != _lights.end(); light_iterator++)
		result << (*light_iterator)->to_xml(indent_string, indent_count + 1);
	result << indent << indent_string << "<maxDepth>" << _maxDepth << "</maxDepth>" << endl;
	result << indent << "</scene>" << endl;

	// return the xml string
	return result.str();
}

vector< Intersection > Scene::intersect(const Ray &ray, double max_distance) const
{
	return _root.intersect(ray, max_distance);
}

Color3f Scene::illuminate(const Ray &ray, unsigned int depth, const Object *medium) const
{
	// find objects intersected by ray
	vector< Intersection > intersections = intersect(ray);
	if (intersections.empty())
		return _background;

	// determine closest intersection
	vector< Intersection >::iterator i, intersection = intersections.begin();
	for (i = intersection + 1; i != intersections.end(); i++)
		if (i->time() < intersection->time())
			intersection = i;

	Vector3f intersect_point = intersection->nearPoint();
	Vector3f intersect_point2 = intersection->farPoint();
	Vector3f normal = intersection->obj()->normal(intersect_point);
	Vector3f view = ray.direction();

	if (Vector3f::dot(normal, -1 * view) <= 0)
		normal *= -1;

	Vector3f reflection = view - 2.0 * Vector3f::dot(normal, view) * normal;

	// apply illumination model to that point with ray
	Material material = intersection->obj()->material();
	Color3f diffuseColor = material.diffuseColor();
	Color3f specularColor = material.specularColor();
	Color3f ambientColor = material.ambientColor();
	int phongConstant = material.phongConstant();
	double r, g, b;

	// texture map if necessary
	const Texture *texture = material.texture();
	if (texture)
	{
		double s, t;
		intersection->obj()->textureCoords(intersect_point, s, t);
		if (texture->valid(s, t))
			diffuseColor = texture->color(s, t);
	}

	// ambient term
	r = ambientColor.r() * _ambience.r();
	g = ambientColor.g() * _ambience.g();
	b = ambientColor.b() * _ambience.b();

	for (vector< Light* >::const_iterator light = _lights.begin(); light != _lights.end(); light++)
	{
		// add contribution from light
		Color3f shadow = shadowFactor(intersect_point, *light);

		Color3f lightColor = (*light)->color();
		double diffuse = (*light)->diffuseContribution(intersect_point, normal);
		double specular = (*light)->specularContribution(intersect_point, reflection, phongConstant);

		r += shadow.r() * lightColor.r() * (diffuse * diffuseColor.r() + specular * specularColor.r());
		g += shadow.g() * lightColor.g() * (diffuse * diffuseColor.g() + specular * specularColor.g());
		b += shadow.b() * lightColor.b() * (diffuse * diffuseColor.b() + specular * specularColor.b());
	}

	if (depth < _maxDepth && _maxDepth)
	{
		// reflection component
		Color3f reflectiveColor = material.reflectiveColor();
		if (reflectiveColor.r() != 0 || reflectiveColor.g() != 0 || reflectiveColor.b() != 0)
		{
			int n = JITTER_COUNT;
			if (material.glossiness() < 0.01) n = 1;

			double reflectr, reflectg, reflectb;
			reflectr = 0.0;
			reflectg = 0.0;
			reflectb = 0.0;

			for (int k = 0; k < n; k++)
			{
				Ray reflected_ray;
				reflected_ray.origin(intersect_point);
				reflected_ray.direction(Random::direction(reflection, material.glossiness()));
				Color3f reflected_color = illuminate(reflected_ray, depth + 1, medium);

				reflectr += reflected_color.r() * reflectiveColor.r();
				reflectg += reflected_color.g() * reflectiveColor.g();
				reflectb += reflected_color.b() * reflectiveColor.b();
			}
			r += reflectr / n;
			g += reflectg / n;
			b += reflectb / n;
		}

		// transmission component
		Color3f transmissiveColor = material.transmissiveColor();
		if (transmissiveColor.r() != 0 || transmissiveColor.g() != 0 || transmissiveColor.b() != 0)
		{
			// determine source and destination media
			const Object *new_medium;
			double n1, n2;

			// initial assumption: vacuum -> intersection->obj()
			n1 = 1.0;
			n2 = material.indexOfRefraction();
			new_medium = intersection->obj();

			if (medium)
			{
				// revised assumption: medium -> intersection->obj()
				n1 = medium->material().indexOfRefraction();

				if (Vector3f::dot(intersection->obj()->normal(intersect_point2), view) > 0)
				{
					// revised assumption: medium -> vacuum
					n2 = 1.0;
					new_medium = NULL;
				}
			}

			if (n2 > 0) // n2 == 0 -> total internal reflection
			{
				double delta = Vector3f::dot(view, normal);

				double alpha;
				alpha = n1 / n2;
				delta *= alpha;

				double beta;
				if (delta < 0) beta = -1.0;
				else beta = 1.0;

				double discriminant = delta * delta - alpha * alpha + 1;

				if (discriminant >= 0) // discriminant < 0 -> total internal reflection
				{
					beta *= sqrt(discriminant);
					beta -= delta;
					Vector3f transmission = alpha * view + beta * normal;

					int n = JITTER_COUNT;
					if (material.translucency() < 0.01) n = 1;

					double transmitr, transmitg, transmitb;
					transmitr = 0.0;
					transmitg = 0.0;
					transmitb = 0.0;

					for (int k = 0; k < n; k++)
					{
						Ray transmitted_ray;
						transmitted_ray.origin(intersect_point2);
						transmitted_ray.direction(Random::direction(transmission, material.translucency()));
						Color3f transmitted_color = illuminate(transmitted_ray, depth + 1, new_medium);

						transmitr += transmitted_color.r() * transmissiveColor.r();
						transmitg += transmitted_color.g() * transmissiveColor.g();
						transmitb += transmitted_color.b() * transmissiveColor.b();
					}
					
					r += transmitr / n;
					g += transmitg / n;
					b += transmitb / n;
				}
				else // do a reflection ray using the transmissive color
				{
					// this is rare enough we son't worry about
					// jittering
					Ray transmitted_ray;
					transmitted_ray.origin(intersect_point);
					transmitted_ray.direction(reflection);
					Color3f transmitted_color = illuminate(transmitted_ray, depth + 1, medium);

					r += transmitted_color.r() * transmissiveColor.r();
					g += transmitted_color.g() * transmissiveColor.g();
					b += transmitted_color.b() * transmissiveColor.b();
				}
			}
		}
	}

	// clamp intensities
	if (r > 1.0) r = 1.0;
	if (g > 1.0) g = 1.0;
	if (b > 1.0) b = 1.0;

	// return final color
	return Color3f(r, g, b);
}

Color3f Scene::shadowFactor(const Vector3f &point, const Light *light) const
{
	int n = JITTER_COUNT;
	if (light->jitterValue() < 0.01) n = 1;

	double rtot, gtot, btot;
	rtot = 0.0;
	gtot = 0.0;
	btot = 0.0;

	// perform shadow calculations several times for averaging
	for (int k = 0; k < n; k++)
	{
		// determine ray to use for intersecting
		Ray ray;
		ray.origin(point);
		ray.direction(light->directionTo(point));
		double max_distance = light->distanceFrom(point);

		double r, g, b;
		r = 1.0;
		g = 1.0;
		b = 1.0;

		// determine if ray intersects any objects before reaching light source
		vector< Intersection > intersections = intersect(ray, max_distance);
		vector< Intersection >::iterator i;
		for (i = intersections.begin(); i != intersections.end(); i++)
		{
			const Object *obj = i->obj();
			Vector3f normal = obj->normal(i->nearPoint());
			double caustic_factor = Vector3f::dot(normal, ray.direction());
			caustic_factor = 1.8 * pow(caustic_factor, 12) + 0.5;

			Color3f c = obj->material().transmissiveColor();

			r *= c.r() * caustic_factor;
			g *= c.g() * caustic_factor;
			b *= c.b() * caustic_factor;
		}

		rtot += r;
		gtot += g;
		btot += b;
	}

	// return average color
	rtot /= n;
	gtot /= n;
	btot /= n;
	return Color3f(rtot, gtot, btot);
}
