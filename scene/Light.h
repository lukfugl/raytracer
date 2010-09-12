#ifndef __LIGHT_H
#define __LIGHT_H

#include "InstanceCounter.h"
#include "Color3f.h"
#include "Vector3f.h"

class Light : public InstanceCounter
{
  protected:
	Color3f _color;

  public:
	Light();
	Light(const Light &l);
	~Light();

	// read accessors
	const Color3f &color() const;
	virtual double jitterValue() const = 0;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void color(const Color3f &c);
	virtual void jitterValue(double j) = 0;

	// overloaded assignment
	const Light &operator=(const Light &l);

	// ray tracing utilities
	virtual double diffuseContribution(const Vector3f &point, const Vector3f &normal) const;
	virtual double specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const;
	virtual double distanceFrom(const Vector3f &point) const;
	virtual Vector3f directionTo(const Vector3f &point) const = 0;
};

#endif // __LIGHT_H
