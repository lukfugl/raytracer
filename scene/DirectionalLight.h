#ifndef __DIRECTIONALLIGHT_H
#define __DIRECTIONALLIGHT_H

#include "Light.h"
#include "Vector3f.h"

using namespace std;

class DirectionalLight : public Light
{
  protected:
	Vector3f _direction;
	double _jitter;

  public:
	DirectionalLight();
	DirectionalLight(const DirectionalLight &dl);
	~DirectionalLight();

	// read accessors
	const Vector3f &direction() const;
	Vector3f jitteredDirection() const;
	virtual double jitterValue() const;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void direction(const Vector3f &d);
	virtual void jitterValue(double j);

	// overloaded assignment
	const DirectionalLight &operator=(const DirectionalLight &dl);

	// ray tracing utilities
	virtual double diffuseContribution(const Vector3f &point, const Vector3f &normal) const;
	virtual double specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const;
	virtual double distanceFrom(const Vector3f &point) const;
	virtual Vector3f directionTo(const Vector3f &point) const;
};

#endif // __DIRECTIONALLIGHT_H
