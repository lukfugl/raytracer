#ifndef __POINTLIGHT_H
#define __POINTLIGHT_H

#include "Light.h"
#include "Vector3f.h"

using namespace std;

class PointLight : public Light
{
  protected:
	Vector3f _location;
	Vector3f _attenuation;
	double _radius;
	double _jitterRadius;

  public:
	PointLight();
	PointLight(const PointLight &pl);
	~PointLight();

	// read accessors
	const Vector3f &location() const;
	Vector3f jitteredLocation() const;
	const Vector3f &attenuation() const;
	double radius() const;
	virtual double jitterValue() const;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void location(const Vector3f &l);
	void attenuation(const Vector3f &a);
	void radius(double r);
	virtual void jitterValue(double j);

	// overloaded assignment
	const PointLight &operator=(const PointLight &pl);

	// ray tracing utilities
	virtual double diffuseContribution(const Vector3f &point, const Vector3f &normal) const;
	virtual double specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const;
	virtual double distanceFrom(const Vector3f &point) const;
	virtual Vector3f directionTo(const Vector3f &point) const;
};

#endif // __POINTLIGHT_H
