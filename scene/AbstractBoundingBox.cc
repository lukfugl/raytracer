#include "AbstractBoundingBox.h"
#include "Vector3f.h"
#include <iostream>
#include <sstream>
#include <string>

AbstractBoundingBox::AbstractBoundingBox()
{
	_min = Vector3f(0, 0, 0);
	_max = Vector3f(0, 0, 0);
	_classID = "";
}

AbstractBoundingBox::AbstractBoundingBox(const Vector3f &min, const Vector3f &max)
{
	_min = min;
	_max = max;
	_classID = "";
}

AbstractBoundingBox::~AbstractBoundingBox()
{
}

const Vector3f &AbstractBoundingBox::min() const { return _min; }
const Vector3f &AbstractBoundingBox::max() const { return _max; }
double AbstractBoundingBox::size() const
{
	Vector3f dimensions = _max - _min;
	double x = dimensions.x();
	double y = dimensions.y();
	double z = dimensions.z();
	return (x * y + x * z + y * z);
}

void AbstractBoundingBox::min(const Vector3f &newValue) { _min = newValue; }
void AbstractBoundingBox::max(const Vector3f &newValue) { _max = newValue; }

unsigned int AbstractBoundingBox::children() const
{
	cerr << "Child accessors invalid in subclass \"" << _classID << "\" of AbstractBoundingBox." << endl;
	return 0;
}

const AbstractBoundingBox *AbstractBoundingBox::child(unsigned int i) const
{
	cerr << "Child accessors invalid in subclass \"" << _classID << "\" of AbstractBoundingBox." << endl;
	return NULL;
}

void AbstractBoundingBox::add_child(AbstractBoundingBox *box)
{
	cerr << "Child accessors invalid in subclass \"" << _classID << "\" of AbstractBoundingBox." << endl;
	return;
}

const Object *AbstractBoundingBox::object() const
{
	cerr << "Object accessors invalid in subclass \"" << _classID << "\" of AbstractBoundingBox." << endl;
	return NULL;
}

void AbstractBoundingBox::object(Object *obj)
{
	cerr << "Object accessors invalid in subclass \"" << _classID << "\" of AbstractBoundingBox." << endl;
	return;
}

double AbstractBoundingBox::growth(const AbstractBoundingBox *box) const
{
	Vector3f dimensions = Vector3f::max(_max, box->_max) - Vector3f::min(_min, box->_min);
	double x = dimensions.x();
	double y = dimensions.y();
	double z = dimensions.z();
	double newSize = x * y + x * z + y * z;
	return (newSize - size());
}

string AbstractBoundingBox::toString(int indentCount) const
{
	stringstream indent_stream;
	for (int i = 0; i < indentCount; i++)
		indent_stream << "   ";
	string indent = indent_stream.str();

	stringstream result;
	result << indent << _classID << endl;
	result << indent << "   " << _min.to_xml() << endl;
	result << indent << "   " << _max.to_xml() << endl;
	return result.str();
}

bool AbstractBoundingBox::_testIntersect(const Ray &ray, double max_distance) const
{
	double tNear = 0;
	double tFar = 0;
	bool set = false;

	// setup for YZ planes
	double x0, dx, minx, maxx;
	x0 = ray.origin().x();
	dx = ray.direction().x();
	minx = _min.x();
	maxx = _max.x();

	if (dx == 0)
	{
		// ray parallel to YZ planes, check that origin is properly
		// constrained in X
		if (x0 < minx || x0 > maxx)
			return false;
	}
	else
	{
		// find time values for intersection with each of the YZ planes
		double t1 = (minx - x0) / dx;
		double t2 = (maxx - x0) / dx;

		// swap as necessary so t1 <= t2
		if (t1 > t2)
		{
			double tmp = t1;
			t1 = t2;
			t2 = tmp;
		}

		// adjust tNear and tFar
		if (t1 > tNear || !set) tNear = t1;
		if (t2 < tFar  || !set) tFar = t2;
		set = true;

		// box is missed by the ray
		if (tNear > tFar)
			return false;
	}

	// repeat for XZ and XY planes
	double y0, dy, miny, maxy;
	y0 = ray.origin().y();
	dy = ray.direction().y();
	miny = _min.y();
	maxy = _max.y();

	if (dy == 0)
	{
		if (y0 < miny || y0 > maxy)
			return false;
	}
	else
	{
		double t1 = (miny - y0) / dy;
		double t2 = (maxy - y0) / dy;

		if (t1 > t2)
		{
			double tmp = t1;
			t1 = t2;
			t2 = tmp;
		}

		if (t1 > tNear || !set) tNear = t1;
		if (t2 < tFar  || !set) tFar = t2;
		set = true;

		if (tNear > tFar)
			return false;
	}

	if (tFar < 0 || (tNear > max_distance && max_distance > 0))
		return false;

	double z0, dz, minz, maxz;
	z0 = ray.origin().z();
	dz = ray.direction().z();
	minz = _min.z();
	maxz = _max.z();

	if (dz == 0)
	{
		if (z0 < minz || z0 > maxz)
			return false;
	}
	else
	{
		double t1 = (minz - z0) / dz;
		double t2 = (maxz - z0) / dz;

		if (t1 > t2)
		{
			double tmp = t1;
			t1 = t2;
			t2 = tmp;
		}

		if (t1 > tNear || !set) tNear = t1;
		if (t2 < tFar  || !set) tFar = t2;
		set = true;

		if (tNear > tFar)
			return false;
	}

	// the box is behind us, or too far away, or d = (0, 0, 0)
	if (!set || tFar < 0 || (tNear > max_distance && max_distance > 0))
		return false;

	// all tests passed, it must hit the box
	return true;
}
