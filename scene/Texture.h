#ifndef __TEXTURE_H
#define __TEXTURE_H

#include "Color3f.h"
#include <string>

using namespace std;

class Texture
{
  protected:
	string _filename;
	bool _repeatS;
	bool _repeatT;
	unsigned int _width;
	unsigned int _height;
	Color3f *_data;

  public:
	Texture();
	Texture(const Texture &);
	~Texture();

	// read accessors
	string filename() const;
	bool repeatS() const;
	bool repeatT() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;
	bool valid(double s, double t) const;
	Color3f color(double s, double t) const;

	// write accessors
	void filename(string s);
	void repeatS(bool x);
	void repeatT(bool x);
	void initialize();

	// overloaded assignment
	const Texture &operator=(const Texture &);
};

#endif // __TEXTURE_H
