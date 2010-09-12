#ifndef __COLOR3F_H
#define __COLOR3F_H

#include "InstanceCounter.h"
#include <string>

using namespace std;

class Color3f : public InstanceCounter
{
  protected:
	double _r;
	double _g;
	double _b;

  public:
	Color3f();
	Color3f(double r, double g, double b);
	Color3f(const Color3f &c);
	~Color3f();

	// read accessors
	double r() const;
	double g() const;
	double b() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void r(double a);
	void g(double a);
	void b(double a);

	// overloaded operators
	const Color3f &operator=(const Color3f &c);
	const Color3f &operator+=(const Color3f &c);
	const Color3f &operator-=(const Color3f &c);
	const Color3f &operator*=(double alpha);
	Color3f operator+(const Color3f &c) const;
	Color3f operator-(const Color3f &c) const;
	Color3f operator*(double alpha) const;
};

Color3f operator*(double alpha, const Color3f &c);

#endif // __COLOR3F_H
