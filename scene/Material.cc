#include "Material.h"
#include "Texture.h"
#include <sstream>

Material::Material()
{
	_phongConstant = 20;
	_indexOfRefraction = 1.0;
	_glossiness = 0.0;
	_translucency = 0.0;
	_texture = NULL;
}

Material::Material(const Material &m)
{
	_diffuseColor      = m._diffuseColor;
	_emissiveColor     = m._emissiveColor;
	_specularColor     = m._specularColor;
	_ambientColor      = m._ambientColor;
	_transmissiveColor = m._transmissiveColor;
	_reflectiveColor   = m._reflectiveColor;
	_phongConstant     = m._phongConstant;
	_indexOfRefraction = m._indexOfRefraction;
	_glossiness        = m._glossiness;
	_translucency      = m._translucency;
	_texture           = m._texture;
}

Material::~Material() { }

const Color3f &Material::diffuseColor() const      { return _diffuseColor; }
const Color3f &Material::emissiveColor() const     { return _emissiveColor; }
const Color3f &Material::specularColor() const     { return _specularColor; }
const Color3f &Material::ambientColor() const      { return _ambientColor; }
const Color3f &Material::transmissiveColor() const { return _transmissiveColor; }
const Color3f &Material::reflectiveColor() const   { return _reflectiveColor; }
int Material::phongConstant() const                { return _phongConstant; }
double Material::indexOfRefraction() const         { return _indexOfRefraction; }
double Material::glossiness() const                { return _glossiness; }
double Material::translucency() const              { return _translucency; }
const Texture *Material::texture() const           { return _texture; }

void Material::diffuseColor(const Color3f &c)      { _diffuseColor      = c; }
void Material::emissiveColor(const Color3f &c)     { _emissiveColor     = c; }
void Material::specularColor(const Color3f &c)     { _specularColor     = c; }
void Material::ambientColor(const Color3f &c)      { _ambientColor      = c; }
void Material::transmissiveColor(const Color3f &c) { _transmissiveColor = c; }
void Material::reflectiveColor(const Color3f &c)   { _reflectiveColor   = c; }
void Material::phongConstant(int pc)               { _phongConstant     = pc; }
void Material::indexOfRefraction(double ior)       { _indexOfRefraction = ior; }
void Material::glossiness(double g)                { _glossiness        = g; }
void Material::translucency(double t)              { _translucency      = t; }
void Material::texture(const Texture *t)           { _texture           = t; }

const Material &Material::operator=(const Material &m)
{
	_diffuseColor      = m._diffuseColor;
	_emissiveColor     = m._emissiveColor;
	_specularColor     = m._specularColor;
	_ambientColor      = m._ambientColor;
	_transmissiveColor = m._transmissiveColor;
	_reflectiveColor   = m._reflectiveColor;
	_phongConstant     = m._phongConstant;
	_indexOfRefraction = m._indexOfRefraction;
	_glossiness        = m._glossiness;
	_translucency      = m._translucency;
	_texture           = m._texture;
	return *this;
}

string Material::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<material>" << endl;
	result << indent << indent_string << "<diffuseColor>" << _diffuseColor.to_xml() << "</diffuseColor>" << endl;
	result << indent << indent_string << "<emissiveColor>" << _emissiveColor.to_xml() << "</emissiveColor>" << endl;
	result << indent << indent_string << "<specularColor>" << _specularColor.to_xml() << "</specularColor>" << endl;
	result << indent << indent_string << "<ambientColor>" << _ambientColor.to_xml() << "</ambientColor>" << endl;
	result << indent << indent_string << "<transmissiveColor>" << _transmissiveColor.to_xml() << "</transmissiveColor>" << endl;
	result << indent << indent_string << "<reflectiveColor>" << _reflectiveColor.to_xml() << "</reflectiveColor>" << endl;
	result << indent << indent_string << "<phongConstant>" << _phongConstant << "</phongConstant>" << endl;
	result << indent << indent_string << "<indexOfRefraction>" << _indexOfRefraction << "</indexOfRefraction>" << endl;
	result << indent << indent_string << "<glossiness>" << _glossiness << "</glossiness>" << endl;
	result << indent << indent_string << "<translucency>" << _translucency << "</translucency>" << endl;
	if (_texture)
		result << _texture->to_xml(indent_string, indent_count + 1);
	result << indent << "</material>" << endl;

	// return the xml string
	return result.str();
}
