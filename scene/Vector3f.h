#ifndef __VECTOR3F_H
#define __VECTOR3F_H

#include "InstanceCounter.h"
#include <string>

using namespace std;

class Vector3f : public InstanceCounter
{
  protected:
	double _x;
	double _y;
	double _z;

  public:
	Vector3f();
	Vector3f(double x, double y, double z);
	Vector3f(const Vector3f &v);
	~Vector3f();

	// read accessors
	double x() const;
	double y() const;
	double z() const;
	double length() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void x(double a);
	void y(double a);
	void z(double a);

	// overloaded operators
	const Vector3f &operator=(const Vector3f &v);
	const Vector3f &operator+=(const Vector3f &v);
	const Vector3f &operator-=(const Vector3f &v);
	const Vector3f &operator*=(double alpha);
	Vector3f operator+(const Vector3f &v) const;
	Vector3f operator-(const Vector3f &v) const;
	Vector3f operator*(double alpha) const;

	// static class functions
	static double dot(const Vector3f &v1, const Vector3f &v2);
	static Vector3f cross(const Vector3f &v1, const Vector3f &v2);
	static Vector3f normalize(const Vector3f &v);
	static Vector3f min(const Vector3f &v1, const Vector3f &v2);
	static Vector3f max(const Vector3f &v1, const Vector3f &v2);
};

Vector3f operator*(double alpha, const Vector3f &v);

#endif // __VECTOR3F_H
