#include "Color3f.h"
#include <sstream>

Color3f::Color3f()
{
	_r = 0.0;
	_g = 0.0;
	_b = 0.0;
}

Color3f::Color3f(double r, double g, double b)
{
	_r = r;
	_g = g;
	_b = b;
}

Color3f::Color3f(const Color3f &c)
{
	_r = c._r;
	_g = c._g;
	_b = c._b;
}

Color3f::~Color3f() { }

double Color3f::r() const { return _r; }
double Color3f::g() const { return _g; }
double Color3f::b() const { return _b; }

void Color3f::r(double a) { _r = a; }
void Color3f::g(double a) { _g = a; }
void Color3f::b(double a) { _b = a; }

const Color3f &Color3f::operator=(const Color3f &c)
{
	_r = c._r;
	_g = c._g;
	_b = c._b;
	return *this;
}

const Color3f &Color3f::operator+=(const Color3f &c)
{
	_r += c._r;
	_g += c._g;
	_b += c._b;
	return *this;
}

const Color3f &Color3f::operator-=(const Color3f &c)
{
	_r -= c._r;
	_g -= c._g;
	_b -= c._b;
	return *this;
}

const Color3f &Color3f::operator*=(double alpha)
{
	_r *= alpha;
	_g *= alpha;
	_b *= alpha;
	return *this;
}

Color3f Color3f::operator+(const Color3f &c) const
{
	Color3f result(*this);
	result += c;
	return result;
}

Color3f Color3f::operator-(const Color3f &c) const
{
	Color3f result(*this);
	result -= c;
	return result;
}

Color3f Color3f::operator*(double alpha) const
{
	Color3f result(*this);
	result *= alpha;
	return result;
}

Color3f operator*(double alpha, const Color3f &c)
{
	return (c * alpha);
}

string Color3f::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<color3f r='" << _r << "' g='" << _g << "' b='" << _b << "' />";

	// return the xml string
	return result.str();
}
