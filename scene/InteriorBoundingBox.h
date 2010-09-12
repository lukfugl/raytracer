#ifndef _INTERIORBOUNDINGBOX_H
#define _INTERIORBOUNDINGBOX_H

#include "AbstractBoundingBox.h"
#include "Object.h"
#include "Vector3f.h"
#include <string>
#include <vector>

class InteriorBoundingBox : public AbstractBoundingBox
{
  protected:
	vector< AbstractBoundingBox* > _children;

	// no copying allowed
	InteriorBoundingBox(const InteriorBoundingBox &ibb);
	const InteriorBoundingBox &operator=(const InteriorBoundingBox &ibb);

  public:
	InteriorBoundingBox(AbstractBoundingBox *esau, AbstractBoundingBox *jacob);
	virtual ~InteriorBoundingBox();

	// methods overridden from parent
	virtual string toString(int indentCount = 0) const;
	virtual unsigned int children() const;
	virtual const AbstractBoundingBox *child(unsigned int i) const;
	virtual void add_child(AbstractBoundingBox *box);
	virtual bool interior() const;
	virtual vector< Intersection > intersect(const Ray &ray, double max_distance = 0) const;
};

#endif // _INTERIORBOUNDINGBOX_H
