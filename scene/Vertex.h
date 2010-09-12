#ifndef __VERTEX_H
#define __VERTEX_H

#include "InstanceCounter.h"
#include "Vector3f.h"
#include "Color3f.h"
#include <string>

class Vertex : public InstanceCounter
{
  protected:
	Vector3f _position;
	Vector3f _normal;
	Color3f _color;
	bool _hasNormal;
	bool _hasColor;
	double _s;
	double _t;

  public:
	static int vertexCount;

  public:
	Vertex();
	Vertex(const Vertex &v);
	~Vertex();

	// read accessors
	const Vector3f &position() const;
	const Vector3f &normal() const;
	const Color3f &color() const;
	bool hasNormal() const;
	bool hasColor() const;
	double s() const;
	double t() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void position(const Vector3f &v);
	void normal(const Vector3f &v);
	void color(const Color3f &c);
	void s(double x);
	void t(double x);

	// overloaded assignment
	const Vertex &operator=(const Vertex &v);
};

#endif // __VERTEX_H
