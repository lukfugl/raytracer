#ifndef _LEAFBOUNDINGBOX_H
#define _LEAFBOUNDINGBOX_H

#include "AbstractBoundingBox.h"
#include "Object.h"
#include <string>

class LeafBoundingBox : public AbstractBoundingBox
{
  protected:
	Object *_obj;

  public:
	LeafBoundingBox(Object *obj);
	virtual ~LeafBoundingBox();

	// methods overridden in child classes
	virtual const Object *object() const;
	virtual void object(Object *obj);
	virtual bool interior() const;
	virtual vector< Intersection > intersect(const Ray &ray, double max_distance = 0) const;
};

#endif // _LEAFBOUNDINGBOX_H
