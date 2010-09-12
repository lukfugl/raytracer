#include "InteriorBoundingBox.h"
#include "Object.h"
#include "Vector3f.h"
#include <string>
#include <sstream>
#include <vector>
#include <assert.h>

InteriorBoundingBox::InteriorBoundingBox(const InteriorBoundingBox &ibb) { }

const InteriorBoundingBox &InteriorBoundingBox::operator=(const InteriorBoundingBox &ibb)
{
	return *this;
}

InteriorBoundingBox::InteriorBoundingBox(AbstractBoundingBox *esau, AbstractBoundingBox *jacob)
{
	_classID = "InteriorBoundingBox";

	if (!esau) esau = jacob;

	if (!esau)
	{
		_min = Vector3f(0, 0, 0);
		_max = Vector3f(0, 0, 0);
	}
	else if (!jacob)
	{
		_min = esau->min();
		_max = esau->max();
		_children.push_back(esau);
	}
	else
	{
		_min = Vector3f::min(esau->min(), jacob->min());
		_max = Vector3f::max(esau->max(), jacob->max());
		_children.push_back(esau);
		_children.push_back(jacob);
	}
}

InteriorBoundingBox::~InteriorBoundingBox()
{
	for (int i = 0; i < _children.size(); i++)
		if (_children[i]) delete _children[i];
}

unsigned int InteriorBoundingBox::children() const { return _children.size(); }

const AbstractBoundingBox *InteriorBoundingBox::child(unsigned int i) const
{
	assert(i >= 0 && i < _children.size());
	return _children[i];
}

void InteriorBoundingBox::add_child(AbstractBoundingBox *box)
{
	assert(box != NULL);

	double minGrowth = (_children.size() <= 6 ? box->size() : std::numeric_limits<float>::max());

	vector< AbstractBoundingBox* >::iterator mark = _children.end();
	vector< AbstractBoundingBox* >::iterator i;
	for (i = _children.begin(); i != _children.end(); i++)
	{
		double childGrowth = (*i)->growth(box);
		if (childGrowth < minGrowth)
		{
			mark = i;
			minGrowth = childGrowth;
		}
	}

	// update bounding box
	if (_children.empty())
	{
		_min = box->min();
		_max = box->max();
	}
	else
	{
		_min = Vector3f::min(_min, box->min());
		_max = Vector3f::max(_max, box->max());
	}

	if (mark == _children.end())
		// add to this interior node as a direct child
		_children.push_back(box);
	else if ((*mark)->interior())
		// add to the selected subtree
		(*mark)->add_child(box);
	else
		// create new interior node with two subtrees
		(*mark) = new InteriorBoundingBox(*mark, box);
}

bool InteriorBoundingBox::interior() const { return true; }

string InteriorBoundingBox::toString(int indentCount) const
{
	stringstream result;
	result << AbstractBoundingBox::toString(indentCount);
	for (int i = 0; i < _children.size(); i++)
		result << _children[i]->toString(indentCount + 1);
	return result.str();
}

vector< Intersection > InteriorBoundingBox::intersect(const Ray &ray, double max_distance) const
{
	// starts empty
	vector< Intersection > intersections;

	// does it even hit this box?
	if (!_testIntersect(ray, max_distance))
		return intersections;

	// get all intersections within child bounding boxes
	vector< AbstractBoundingBox* >::const_iterator i;
	for (i = _children.begin(); i != _children.end(); i++)
	{
		vector< Intersection > childIntersections = (*i)->intersect(ray, max_distance);
		intersections.insert(intersections.end(), childIntersections.begin(), childIntersections.end());
	}

	// return comprehensive list
	return intersections;
}
