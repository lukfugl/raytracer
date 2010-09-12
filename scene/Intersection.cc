#include "Intersection.h"
#include <stddef.h>

Intersection::Intersection()
{
	_obj = NULL;
	_time = -1;
}

Intersection::Intersection(const Intersection &i)
{
	_ray = i._ray;
	_obj = i._obj;
	_time = i._time;
}

Intersection::~Intersection() { }

const Intersection &Intersection::operator=(const Intersection &i)
{
	_ray = i._ray;
	_obj = i._obj;
	_time = i._time;
	return *this;
}

const Ray &Intersection::ray() const { return _ray; }
const Object *Intersection::obj() const { return _obj; }
double Intersection::time() const { return _time; }

Vector3f Intersection::nearPoint() const { return _ray.traverse(0.9999 * _time); }
Vector3f Intersection::farPoint() const { return _ray.traverse(1.0001 * _time); }

void Intersection::ray(const Ray &newValue) { _ray = newValue; }
void Intersection::obj(const Object *newValue) { _obj = newValue; }
void Intersection::time(double newValue) { _time = newValue; }
