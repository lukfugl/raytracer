#include "Object.h"
#include <sstream>

int Object::objCount = 0;

Object::Object() { objCount++; }

Object::Object(const Object &obj)
{
	objCount++;
	_material = obj._material;
}

Object::~Object()
{
	objCount--;
}

const Material &Object::material() const { return _material; }
void Object::material(const Material &m) { _material = m; }

const Object &Object::operator=(const Object &obj)
{
	_material = obj._material;
	return *this;
}

string Object::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<object>" << endl;
	result << _material.to_xml(indent_string, indent_count + 1);
	result << indent << "</object>" << endl;

	// return the xml string
	return result.str();
}

Vector3f Object::normal(const Vector3f &point) const { return Vector3f(0, 0, 0); }
Intersection Object::intersect(const Ray &ray) const { return Intersection(); }
void Object::textureCoords(const Vector3f &point, double &s, double &t) const { s = t = 0; }

Vector3f Object::minExtent() const { return Vector3f(0, 0, 0); }
Vector3f Object::maxExtent() const { return Vector3f(0, 0, 0); }
