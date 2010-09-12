#include "Ray.h"
#include <sstream>

Ray::Ray() { }

Ray::Ray(const Ray &r)
{
	_origin = r._origin;
	_direction = r._direction;
}

Ray::~Ray() { }

const Vector3f &Ray::origin() const { return _origin; }
const Vector3f &Ray::direction() const { return _direction; }

void Ray::origin(const Vector3f &v) { _origin = v; }
void Ray::direction(const Vector3f &v) { _direction = Vector3f::normalize(v); }

const Ray &Ray::operator=(const Ray &r)
{
	_origin = r._origin;
	_direction = r._direction;
	return *this;
}

string Ray::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<ray>" << endl;
	result << indent << indent_string << "<origin>" << _origin.to_xml() << "</origin>" << endl;
	result << indent << indent_string << "<direction>" << _direction.to_xml() << "</direction>" << endl;
	result << indent << "</ray>" << endl;

	// return the xml string
	return result.str();
}

Vector3f Ray::traverse(double time) const
{
	return (_origin + _direction * time);
}
