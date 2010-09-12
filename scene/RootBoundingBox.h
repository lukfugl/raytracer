#ifndef _ROOTBOUNDINGBOX_H
#define _ROOTBOUNDINGBOX_H

#include "InteriorBoundingBox.h"

class RootBoundingBox : public InteriorBoundingBox
{
  protected:
	// no copying allowed
	RootBoundingBox(const RootBoundingBox &rbb);
	const RootBoundingBox &operator=(const RootBoundingBox &rbb);

	virtual bool _testIntersect(const Ray &ray, double max_distance = 0) const;

  public:
	RootBoundingBox();
	virtual ~RootBoundingBox();
};

#endif // _ROOTBOUNDINGBOX_H
