#ifndef _ABSTRACTBOUNDINGBOX_H
#define _ABSTRACTBOUNDINGBOX_H

#include "Intersection.h"
#include "Object.h"
#include "Vector3f.h"
#include <string>
#include <vector>

class AbstractBoundingBox
{
  protected:
	Vector3f _min, _max;
	string _classID;

	virtual bool _testIntersect(const Ray &ray, double max_distance = 0) const;

  public:
	AbstractBoundingBox();
	AbstractBoundingBox(const Vector3f &min, const Vector3f &max);
	virtual ~AbstractBoundingBox();

	// read accessors
	const Vector3f &min() const;
	const Vector3f &max() const;
	double size() const;
	virtual string toString(int indentCount = 0) const;
	double growth(const AbstractBoundingBox *box) const;

	// write accessors
	void min(const Vector3f &newValue);
	void max(const Vector3f &newValue);

	// methods overridden in child classes
	virtual unsigned int children() const;
	virtual const AbstractBoundingBox *child(unsigned int i) const;
	virtual void add_child(AbstractBoundingBox *box);
	virtual const Object *object() const;
	virtual void object(Object *obj);
	virtual bool interior() const = 0;
	virtual vector< Intersection > intersect(const Ray &ray, double max_distance = 0) const = 0;
};

#endif // _ABSTRACTBOUNDINGBOX_H
