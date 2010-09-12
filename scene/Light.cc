#include "Light.h"
#include <sstream>

Light::Light() { }

Light::Light(const Light &l)
{
	_color = l._color;
}

Light::~Light() { }

const Color3f &Light::color() const { return _color; }
void Light::color(const Color3f &c) { _color = c; }

const Light &Light::operator=(const Light &l)
{
	_color = l._color;
	return *this;
}

string Light::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<light>" << endl;
	result << indent << indent_string << "<color>" << _color.to_xml() << "</color>" << endl;
	result << indent << "</light>" << endl;

	// return the xml string
	return result.str();
}

double Light::diffuseContribution(const Vector3f &point, const Vector3f &normal) const
{
	return 0;
}

double Light::specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const
{
	return 0;
}

double Light::distanceFrom(const Vector3f &point) const
{
	return -1;
}
