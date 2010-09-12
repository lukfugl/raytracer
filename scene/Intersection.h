#ifndef _INTERSECTION_H
#define _INTERSECTION_H

#include "Ray.h"

class Object;

class Intersection
{
  protected:
	Ray _ray;
	const Object *_obj;
	double _time;

  public:
	Intersection();
	Intersection(const Intersection &i);
	~Intersection();

	// read accessors
	const Ray &ray() const;
	const Object *obj() const;
	double time() const;
	Vector3f nearPoint() const;
	Vector3f farPoint() const;

	// write accessors
	void ray(const Ray &newValue);
	void obj(const Object *newValue);
	void time(double newValue);

	// overloaded assignment
	const Intersection &operator=(const Intersection &i);
};

#endif // _INTERSECTION_H
