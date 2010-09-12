#include "Triangle.h"
#include <sstream>
#include <iostream>
#include <math.h>
#include <stdlib.h>

Triangle::Triangle() { }

Triangle::Triangle(const Triangle &t)
{
	_vertices[0] = t._vertices[0];
	_vertices[1] = t._vertices[1];
	_vertices[2] = t._vertices[2];
	_normal = t._normal;
}

Triangle::~Triangle() { }

Vertex Triangle::vertex(unsigned int i) const
{
	if (i < 0 || i >= 3) return Vertex();
	else return _vertices[i];
}

void Triangle::vertex(unsigned int i, const Vertex &v)
{
	_vertices[i] = v;
}

void Triangle::initialize(bool ccw)
{
	// calculate normal
	Vector3f v1 = _vertices[1].position() - _vertices[0].position();
	Vector3f v2 = _vertices[2].position() - _vertices[0].position();
	_normal = Vector3f::normalize(Vector3f::cross(v1, v2));
	if (!ccw) _normal *= -1;
}

const Triangle &Triangle::operator=(const Triangle &t)
{
	_vertices[0] = t._vertices[0];
	_vertices[1] = t._vertices[1];
	_vertices[2] = t._vertices[2];
	_normal = t._normal;
	return *this;
}

string Triangle::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<object geometry='triangle'>" << endl;
	result << _material.to_xml(indent_string, indent_count + 1);
	result << _vertices[0].to_xml(indent_string, indent_count + 1);
	result << _vertices[1].to_xml(indent_string, indent_count + 1);
	result << _vertices[2].to_xml(indent_string, indent_count + 1);
	result << indent << indent_string << "<normal>" << _normal.to_xml() << "</normal>" << endl;
	result << indent << "</object>" << endl;

	// return the xml string
	return result.str();
}

Vector3f Triangle::normal(const Vector3f &point) const
{
	// use plane normal if vertex normals unavailable
	if (!_vertices[0].hasNormal() || !_vertices[1].hasNormal() || !_vertices[2].hasNormal())
		return _normal;

	// choose two relevant axes (projecting into one of the coordinate
	// planes)
	double ax, ay, bx, by, cx, cy, px, py;
	if (fabs(_normal.z()) >= fabs(_normal.x()) && fabs(_normal.z()) > fabs(_normal.y())) // drop z axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().y();
		bx = _vertices[1].position().x(); by = _vertices[1].position().y();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().y();
		px = point.x(); py = point.y();
	}
	else if (fabs(_normal.y()) >= fabs(_normal.x())) // drop y axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().x(); by = _vertices[1].position().z();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().z();
		px = point.x(); py = point.z();
	}
	else // drop x axis
	{
		ax = _vertices[0].position().y(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().y(); by = _vertices[1].position().z();
		cx = _vertices[2].position().y(); cy = _vertices[2].position().z();
		px = point.y(); py = point.z();
	}
	ax -= px; bx -= px; cx -= px;
	ay -= py; by -= py; cy -= py;

	// calculate barycentric coordinates
	double A = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
	double r = (bx * cy - by * cx) / A; // |(B - P) x (C - P)| / |(B - A) x (C - A)|
	double s = (cx * ay - cy * ax) / A; // |(C - P) x (A - P)| / |(B - A) x (C - A)|
	double t = (ax * by - ay * bx) / A; // |(A - P) x (B - P)| / |(B - A) x (C - A)|

	Vector3f result =
		r * _vertices[0].normal() +
		s * _vertices[1].normal() +
		t * _vertices[2].normal();

	return result;
}

Intersection Triangle::intersect(const Ray &ray) const
{
	Intersection result; // starts in "No Intersection" state

	// get denominator (0 => ray parallel to plane of triangle)
	double denominator = Vector3f::dot(_normal, ray.direction());
	if (denominator == 0) return result;

	// find corresponding t and intersect point (t < 0 => plane is behind ray origin)
	double t = Vector3f::dot(_normal, _vertices[0].position() - ray.origin()) / denominator;
	if (t < 0) return result;
	Vector3f intersect_point = ray.traverse(t);

	// choose two relevant axes (projecting into one of the coordinate
	// planes)
	double ax, ay, bx, by, cx, cy, px, py;
	if (fabs(_normal.z()) >= fabs(_normal.x()) && fabs(_normal.z()) > fabs(_normal.y())) // drop z axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().y();
		bx = _vertices[1].position().x(); by = _vertices[1].position().y();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().y();
		px = intersect_point.x(); py = intersect_point.y();
	}
	else if (fabs(_normal.y()) >= fabs(_normal.x())) // drop y axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().x(); by = _vertices[1].position().z();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().z();
		px = intersect_point.x(); py = intersect_point.z();
	}
	else // drop x axis
	{
		ax = _vertices[0].position().y(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().y(); by = _vertices[1].position().z();
		cx = _vertices[2].position().y(); cy = _vertices[2].position().z();
		px = intersect_point.y(); py = intersect_point.z();
	}

	// calculate barycentric coordinates
	double A = fabs((bx - ax) * (cy - ay) - (by - ay) * (cx - ax));
	ax -= px; bx -= px; cx -= px;
	ay -= py; by -= py; cy -= py;
	double R = fabs(bx * cy - by * cx);
	double S = fabs(cx * ay - cy * ax);
	double T = fabs(ax * by - ay * bx);

	if (abs(1 - (R + S + T) / A) < 0.0001) // afraid to do a direct compare
	{
		result.time(t);
		result.obj(this);
		result.ray(ray);
	}
	return result;
}

void Triangle::textureCoords(const Vector3f &point, double &tS, double &tT) const
{
	// choose two relevant axes (projecting into one of the coordinate
	// planes)
	double ax, ay, bx, by, cx, cy, px, py;
	if (fabs(_normal.z()) >= fabs(_normal.x()) && fabs(_normal.z()) > fabs(_normal.y())) // drop z axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().y();
		bx = _vertices[1].position().x(); by = _vertices[1].position().y();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().y();
		px = point.x(); py = point.y();
	}
	else if (fabs(_normal.y()) >= fabs(_normal.x())) // drop y axis
	{
		ax = _vertices[0].position().x(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().x(); by = _vertices[1].position().z();
		cx = _vertices[2].position().x(); cy = _vertices[2].position().z();
		px = point.x(); py = point.z();
	}
	else // drop x axis
	{
		ax = _vertices[0].position().y(); ay = _vertices[0].position().z();
		bx = _vertices[1].position().y(); by = _vertices[1].position().z();
		cx = _vertices[2].position().y(); cy = _vertices[2].position().z();
		px = point.y(); py = point.z();
	}
	ax -= px; bx -= px; cx -= px;
	ay -= py; by -= py; cy -= py;

	// calculate barycentric coordinates
	double A = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
	double r = (bx * cy - by * cx) / A; // |(B - P) x (C - P)| / |(B - A) x (C - A)|
	double s = (cx * ay - cy * ax) / A; // |(C - P) x (A - P)| / |(B - A) x (C - A)|
	double t = (ax * by - ay * bx) / A; // |(A - P) x (B - P)| / |(B - A) x (C - A)|

	tS = r * _vertices[0].s() + s * _vertices[1].s() + t * _vertices[2].s();
	tT = r * _vertices[0].t() + s * _vertices[1].t() + t * _vertices[2].t();
	return;
}

Vector3f Triangle::minExtent() const
{
	return Vector3f::min(Vector3f::min(_vertices[0].position(), _vertices[1].position()), _vertices[2].position());
}

Vector3f Triangle::maxExtent() const
{
	return Vector3f::max(Vector3f::max(_vertices[0].position(), _vertices[1].position()), _vertices[2].position());
}
