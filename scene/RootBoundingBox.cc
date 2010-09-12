#include "RootBoundingBox.h"
#include <string>

RootBoundingBox::RootBoundingBox(const RootBoundingBox &rbb)
	: InteriorBoundingBox(rbb)
{
}

const RootBoundingBox &RootBoundingBox::operator=(const RootBoundingBox &rbb) { return *this; }

RootBoundingBox::RootBoundingBox()
	: InteriorBoundingBox(NULL, NULL)
{
	_classID = "RootBoundingBox";
	_children.clear();
}

RootBoundingBox::~RootBoundingBox() { }

bool RootBoundingBox::_testIntersect(const Ray &ray, double max_distance) const
{
	return true;
}
