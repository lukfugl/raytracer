#ifndef __SPHERE_H
#define __SPHERE_H

#include "Object.h"
#include "Ray.h"
#include "Vector3f.h"
#include <string>

class Sphere : public Object
{
  protected:
	Vector3f _center;
	double _radius;

  public:
	Sphere();
	Sphere(const Sphere &s);
	virtual ~Sphere();

	// read accessors
	const Vector3f &center() const;
	double radius() const;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void center(const Vector3f &c);
	void radius(double r);

	// overloaded assignment
	const Sphere &operator=(const Sphere &s);

	// for bounding boxes
	virtual Vector3f minExtent() const;
	virtual Vector3f maxExtent() const;

	// raytracing functions
	virtual Vector3f normal(const Vector3f &point) const;
	virtual Intersection intersect(const Ray &ray) const;
};

#endif // __SPHERE_H
