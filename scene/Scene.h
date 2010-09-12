#ifndef __SCENE_H
#define __SCENE_H

#include "InstanceCounter.h"
#include "AbstractBoundingBox.h"
#include "RootBoundingBox.h"
#include "Camera.h"
#include "Color3f.h"
#include "Light.h"
#include "Object.h"
#include "Texture.h"
#include <vector>
#include <string>

using namespace std;

class Scene : public InstanceCounter
{
  protected:
	Camera _camera;
	Color3f _background;
	Color3f _ambience;
	vector< Light* > _lights;
	vector< Texture* > _textures;
	unsigned int _maxDepth;
	RootBoundingBox _root;

	// no copying allowed
	Scene(const Scene &s);
	const Scene &operator=(const Scene &s);

  public:
	Scene();
	~Scene();

	// read accessors
	const Camera &camera() const;
	const Color3f &background() const;
	const Color3f &ambience() const;
	unsigned int lights() const;
	unsigned int maxDepth() const;
	const Light *light(unsigned int i) const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;
	string hierarchy() const;

	// write accessors
	void camera(const Camera &c);
	void background(const Color3f &bg);
	void ambience(const Color3f &a);
	void add_light(Light *l);
	void add_texture(Texture *t);
	void add_box(AbstractBoundingBox *box);
	void maxDepth(unsigned int depth);

	// ray tracing methods
	vector< Intersection > intersect(const Ray &ray, double max_distance = -1) const;
	Color3f illuminate(const Ray &ray, unsigned int depth = 0, const Object *medium = NULL) const;
	Color3f shadowFactor(const Vector3f &point, const Light *light) const;
};

#endif // __SCENE_H
