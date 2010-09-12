#include "Sphere.h"
#include <sstream>

Sphere::Sphere() { _radius = 0.0; }

Sphere::Sphere(const Sphere &s)
{
	_center = s._center;
	_radius = s._radius;
}

Sphere::~Sphere() { }

const Vector3f &Sphere::center() const { return _center; }
double Sphere::radius() const { return _radius; }

void Sphere::center(const Vector3f &c) { _center = c; }
void Sphere::radius(double r) { _radius = r; }

const Sphere &Sphere::operator=(const Sphere &s)
{
	_center = s._center;
	_radius = s._radius;
	return *this;
}

string Sphere::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<object geometry='sphere'>" << endl;
	result << _material.to_xml(indent_string, indent_count + 1);
	result << indent << indent_string << "<center>" << _center.to_xml() << "</center>" << endl;
	result << indent << indent_string << "<radius>" << _radius << "</radius>" << endl;
	result << indent << "</object>" << endl;

	// return the xml string
	return result.str();
}

Vector3f Sphere::normal(const Vector3f &point) const
{
	Vector3f result = point - _center;
	result *= 1.0 / result.length();
	return result;
}

Intersection Sphere::intersect(const Ray &ray) const
{
	Intersection result; // starts out in "No Intersection" state

	Vector3f OC = _center - ray.origin();
	double square_distance = Vector3f::dot(OC, OC);
	double projection = Vector3f::dot(OC, ray.direction());
	double r_squared = _radius * _radius;

	// beyond the sphere already?
	if (projection < 0 && square_distance > r_squared) return result;

	double delta_squared = r_squared + projection * projection - square_distance;

	// no real roots = no intersection
	if (delta_squared < 0) return result;

	double delta = sqrt(delta_squared);

	result.time(projection + (delta > projection ? 1 : -1) * delta);
	result.obj(this);
	result.ray(ray);
	return result;
}

Vector3f Sphere::minExtent() const
{
	return _center - _radius * Vector3f(1, 1, 1);
}

Vector3f Sphere::maxExtent() const
{
	return _center + _radius * Vector3f(1, 1, 1);
}
