#include "DirectionalLight.h"
#include "Random.h"
#include <sstream>
#include <math.h>

DirectionalLight::DirectionalLight()
{
	_jitter = 0.0;
}

DirectionalLight::DirectionalLight(const DirectionalLight &dl)
{
	_direction = dl._direction;
	_jitter = dl._jitter;
}

DirectionalLight::~DirectionalLight() { }

const Vector3f &DirectionalLight::direction() const { return _direction; }
double DirectionalLight::jitterValue() const { return _jitter; }

void DirectionalLight::direction(const Vector3f &d) { _direction = Vector3f::normalize(d); }
void DirectionalLight::jitterValue(double j) { _jitter = j; }

Vector3f DirectionalLight::jitteredDirection() const
{
	if (_jitter > 0.01)
		return Random::direction(_direction, _jitter);
	else return _direction;
}

const DirectionalLight &DirectionalLight::operator=(const DirectionalLight &dl)
{
	_direction = dl._direction;
	_jitter = dl._jitter;
	return *this;
}

string DirectionalLight::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<light type='directional'>" << endl;
	result << indent << indent_string << "<color>" << _color.to_xml() << "</color>" << endl;
	result << indent << indent_string << "<direction>" << _direction.to_xml() << "</direction>" << endl;
	result << indent << indent_string << "<jitter>" << _jitter << "</jitter>" << endl;
	result << indent << "</light>" << endl;

	// return the xml string
	return result.str();
}

double DirectionalLight::diffuseContribution(const Vector3f &point, const Vector3f &normal) const
{
	double result = Vector3f::dot(normal, _direction);
	if (result < 0) return 0;
	else return result;
}

double DirectionalLight::specularContribution(const Vector3f &point, const Vector3f &reflection, int phong) const
{
	double result = Vector3f::dot(reflection, _direction);
	if (result < 0) return 0;
	else return pow(result, phong);
}

double DirectionalLight::distanceFrom(const Vector3f &point) const
{
	return -1;
}

Vector3f DirectionalLight::directionTo(const Vector3f &point) const
{
	return jitteredDirection();
}
