#ifndef __RAY_H
#define __RAY_H

#include "InstanceCounter.h"
#include "Vector3f.h"
#include <string>

class Ray : public InstanceCounter
{
  protected:
	Vector3f _origin;
	Vector3f _direction;

  public:
	Ray();
	Ray(const Ray &r);
	~Ray();

	// read accessors
	const Vector3f &origin() const;
	const Vector3f &direction() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void origin(const Vector3f &v);
	void direction(const Vector3f &v);

	// overloaded assignment
	const Ray &operator=(const Ray &r);

	// other methods
	Vector3f traverse(double time) const;
};

#endif // __RAY_H
