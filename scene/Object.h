#ifndef __OBJECT_H
#define __OBJECT_H

#include "InstanceCounter.h"
#include "Material.h"
#include "Ray.h"
#include "Vector3f.h"
#include "Intersection.h"
#include <string>

class Object : public InstanceCounter
{
  protected:
	Material _material;

  public:
	static int objCount;

  public:
	Object();
	Object(const Object &obj);
	virtual ~Object();

	// read accessors
	const Material &material() const;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void material(const Material &m);

	// overloaded assignment
	const Object &operator=(const Object &obj);

	// for bounding boxes
	virtual Vector3f minExtent() const;
	virtual Vector3f maxExtent() const;

	// raytracing functions
	virtual Vector3f normal(const Vector3f &point) const;
	virtual Intersection intersect(const Ray &ray) const;
	virtual void textureCoords(const Vector3f &point, double &s, double &t) const;
};

#endif // __OBJECT_H
