#include "PointLight.h"
#include "Random.h"
#include <sstream>
#include <math.h>

PointLight::PointLight() { }

PointLight::PointLight(const PointLight &pl)
{
	_location = pl._location;
	_attenuation = pl._attenuation;
	_radius = pl._radius;
	_jitterRadius = 0.0;
}

PointLight::~PointLight() { }

const Vector3f &PointLight::location() const { return _location; }
const Vector3f &PointLight::attenuation() const { return _attenuation; }
double PointLight::radius() const { return _radius; }
double PointLight::jitterValue() const { return _jitterRadius; }

Vector3f PointLight::jitteredLocation() const
{
	if (_jitterRadius > 0.01)
		return Random::location(_location, _jitterRadius);
	else return _location;
}

void PointLight::location(const Vector3f &l) { _location = l; }
void PointLight::attenuation(const Vector3f &a) { _attenuation = a; }
void PointLight::radius(double r) { _radius = r; }
void PointLight::jitterValue(double j) { _jitterRadius = j; }

const PointLight &PointLight::operator=(const PointLight &pl)
{
	_location = pl._location;
	_attenuation = pl._attenuation;
	_radius = pl._radius;
	_jitterRadius = pl._jitterRadius;
	return *this;
}

string PointLight::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<light type='point'>" << endl;
	result << indent << indent_string << "<color>" << _color.to_xml() << "</color>" << endl;
	result << indent << indent_string << "<location>" << _location.to_xml() << "</location>" << endl;
	result << indent << indent_string << "<attenuation>" << _attenuation.to_xml() << "</attenuation>" << endl;
	result << indent << indent_string << "<radius>" << _radius << "</radius>" << endl;
	result << indent << indent_string << "<jitterRadius>" << _jitterRadius << "</jitterRadius>" << endl;
	result << indent << "</light>" << endl;

	// return the xml string
	return result.str();
}

double PointLight::diffuseContribution(const Vector3f &point, const Vector3f &normal) const
{
	Vector3f effLocation = _location;

	double length = (effLocation - point).length();
	//if (length > _radius) return 0;
	if (length == 0) return 1;

	double result = Vector3f::dot(normal, effLocation - point) / length;
	if (result < 0) return 0;

	double att = Vector3f::dot(Vector3f(1, length, length * length), _attenuation);
	if (att < 1) att = 1;
	result /= att;

	return result;
}

double PointLight::specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const
{
	Vector3f effLocation = _location;

	double length = (effLocation - point).length();
	//if (length > _radius) return 0;
	if (length == 0) return 1;

	double result = Vector3f::dot(reflection, effLocation - point) / length;
	if (result < 0) return 0;
	result = pow(result, phong);

	double att = Vector3f::dot(Vector3f(1, length, length * length), _attenuation);
	if (att < 1) att = 1;
	result /= att;

	return result;
}

double PointLight::distanceFrom(const Vector3f &point) const
{
	return (_location - point).length();
}

Vector3f PointLight::directionTo(const Vector3f &point) const
{
	return Vector3f::normalize(jitteredLocation() - point);
}
