#ifndef __MATERIAL_H
#define __MATERIAL_H

#include "InstanceCounter.h"
#include "Color3f.h"
#include "Texture.h"
#include <string>

class Material : public InstanceCounter
{
  protected:
	Color3f _diffuseColor;
	Color3f _emissiveColor;
	Color3f _specularColor;
	Color3f _ambientColor;
	Color3f _transmissiveColor;
	Color3f _reflectiveColor;
	int _phongConstant;
	double _indexOfRefraction;
	double _glossiness;
	double _translucency;
	const Texture *_texture;

  public:
	Material();
	Material(const Material &m);
	~Material();

	// read accessors
	const Color3f &diffuseColor() const;
	const Color3f &emissiveColor() const;
	const Color3f &specularColor() const;
	const Color3f &ambientColor() const;
	const Color3f &transmissiveColor() const;
	const Color3f &reflectiveColor() const;
	int phongConstant() const;
	double indexOfRefraction() const;
	double glossiness() const;
	double translucency() const;
	const Texture *texture() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void diffuseColor(const Color3f &c);
	void emissiveColor(const Color3f &c);
	void specularColor(const Color3f &c);
	void ambientColor(const Color3f &c);
	void transmissiveColor(const Color3f &c);
	void reflectiveColor(const Color3f &c);
	void phongConstant(int pc);
	void indexOfRefraction(double ior);
	void glossiness(double g);
	void translucency(double t);
	void texture(const Texture *t);

	// overloaded assignment
	const Material &operator=(const Material &m);
};

#endif // __MATERIAL_H
