#include "Vector3f.h"
#include <sstream>
#include <math.h>

Vector3f::Vector3f()
{
	_x = 0.0;
	_y = 0.0;
	_z = 0.0;
}

Vector3f::Vector3f(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}

Vector3f::Vector3f(const Vector3f &v)
{
	_x = v._x;
	_y = v._y;
	_z = v._z;
}

Vector3f::~Vector3f() { }

double Vector3f::x() const { return _x; }
double Vector3f::y() const { return _y; }
double Vector3f::z() const { return _z; }

double Vector3f::length() const
{
	return sqrt(dot(*this, *this));
}

void Vector3f::x(double a) { _x = a; }
void Vector3f::y(double a) { _y = a; }
void Vector3f::z(double a) { _z = a; }

const Vector3f &Vector3f::operator=(const Vector3f &v)
{
	_x = v._x;
	_y = v._y;
	_z = v._z;
	return *this;
}

const Vector3f &Vector3f::operator+=(const Vector3f &v)
{
	_x += v._x;
	_y += v._y;
	_z += v._z;
	return *this;
}

const Vector3f &Vector3f::operator-=(const Vector3f &v)
{
	_x -= v._x;
	_y -= v._y;
	_z -= v._z;
	return *this;
}

const Vector3f &Vector3f::operator*=(double alpha)
{
	_x *= alpha;
	_y *= alpha;
	_z *= alpha;
	return *this;
}

Vector3f Vector3f::operator+(const Vector3f &v) const
{
	Vector3f result(*this);
	result += v;
	return result;
}

Vector3f Vector3f::operator-(const Vector3f &v) const
{
	Vector3f result(*this);
	result -= v;
	return result;
}

Vector3f Vector3f::operator*(double alpha) const
{
	Vector3f result(*this);
	result *= alpha;
	return result;
}

Vector3f operator*(double alpha, const Vector3f &v)
{
	return (v * alpha);
}

string Vector3f::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<vector3f x='" << _x << "' y='" << _y << "' z='" << _z << "' />";

	// return the xml string
	return result.str();
}

double Vector3f::dot(const Vector3f &v1, const Vector3f &v2)
{
	return (v1._x * v2._x + v1._y * v2._y + v1._z * v2._z);
}

Vector3f Vector3f::cross(const Vector3f &v1, const Vector3f &v2)
{
	double x, y, z;
	x = v1._y * v2._z - v1._z * v2._y;
	y = v1._z * v2._x - v1._x * v2._z;
	z = v1._x * v2._y - v1._y * v2._x;
	return Vector3f(x, y, z);
}

Vector3f Vector3f::normalize(const Vector3f &v)
{
	Vector3f result = v;
	double length = result.length();
	if (length > 0) result *= 1.0 / length;
	return result;
}

Vector3f Vector3f::min(const Vector3f &v1, const Vector3f &v2)
{
	double x, y, z;
	x = (v1._x < v2._x ? v1._x : v2._x);
	y = (v1._y < v2._y ? v1._y : v2._y);
	z = (v1._z < v2._z ? v1._z : v2._z);
	return Vector3f(x, y, z);
}

Vector3f Vector3f::max(const Vector3f &v1, const Vector3f &v2)
{
	double x, y, z;
	x = (v1._x > v2._x ? v1._x : v2._x);
	y = (v1._y > v2._y ? v1._y : v2._y);
	z = (v1._z > v2._z ? v1._z : v2._z);
	return Vector3f(x, y, z);
}
