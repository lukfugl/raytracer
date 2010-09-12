#include "LeafBoundingBox.h"
#include "Object.h"
#include <string>

LeafBoundingBox::LeafBoundingBox(Object *obj)
{
	_classID = "LeafBoundingBox";

	_obj = obj;
	_min = obj->minExtent();
	_max = obj->maxExtent();
}

LeafBoundingBox::~LeafBoundingBox()
{
	if (_obj) delete _obj;
}

const Object *LeafBoundingBox::object() const { return _obj; }

void LeafBoundingBox::object(Object *obj)
{
	_obj = obj;
	_min = obj->minExtent();
	_max = obj->maxExtent();
}

bool LeafBoundingBox::interior() const { return false; }

vector< Intersection > LeafBoundingBox::intersect(const Ray &ray, double max_distance) const
{
	// starts empty
	vector< Intersection > intersections;

	// does it hit the encapsulated object?
	Intersection intersection = _obj->intersect(ray);
	if (intersection.obj() && (intersection.time() < max_distance || max_distance < 0))
		intersections.push_back(intersection);

	// return "list" (one element or empty, depending on hit or not)
	return intersections;
}
