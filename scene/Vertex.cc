#include "Vertex.h"
#include <sstream>

int Vertex::vertexCount = 0;

Vertex::Vertex()
{
	_hasNormal = false;
	_hasColor = false;
	_s = _t = 0;
	vertexCount++;
}

Vertex::Vertex(const Vertex &v)
{
	_position = v._position;
	_normal = v._normal;
	_color = v._color;
	_hasNormal = v._hasNormal;
	_hasColor = v._hasColor;
	_s = v._s;
	_t = v._t;
	vertexCount++;
}

Vertex::~Vertex() { vertexCount--; }

const Vector3f &Vertex::position() const { return _position; }
const Vector3f &Vertex::normal() const { return _normal; }
const Color3f &Vertex::color() const { return _color; }
bool Vertex::hasNormal() const { return _hasNormal; }
bool Vertex::hasColor() const { return _hasColor; }
double Vertex::s() const { return _s; }
double Vertex::t() const { return _t; }

void Vertex::position(const Vector3f &v) { _position = v; }
void Vertex::normal(const Vector3f &v) { _normal = Vector3f::normalize(v); _hasNormal = true; }
void Vertex::color(const Color3f &c) { _color = c; _hasColor = true; }
void Vertex::s(double x) { _s = x; }
void Vertex::t(double x) { _t = x; }

const Vertex &Vertex::operator=(const Vertex &v)
{
	_position = v._position;
	_normal = v._normal;
	_color = v._color;
	_hasNormal = v._hasNormal;
	_hasColor = v._hasColor;
	_s = v._s;
	_t = v._t;
	return *this;
}

string Vertex::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<vertex>" << endl;
	result << indent << indent_string << "<position>" << _position.to_xml() << "</position>" << endl;
	if (_hasNormal)
		result << indent << indent_string << "<normal>" << _normal.to_xml() << "</normal>" << endl;
	if (_hasColor)
		result << indent << indent_string << "<color>" << _color.to_xml() << "</color>" << endl;
	result << indent << indent_string << "<textureCoord s=\"" << _s << "\" t=\"" << _t << "\" />" << endl;
	result << indent << "</vertex>" << endl;

	// return the xml string
	return result.str();
}
