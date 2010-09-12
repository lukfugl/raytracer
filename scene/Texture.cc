#include "Texture.h"
#include "Color3f.h"
#include <fstream>
#include <sstream>

Texture::Texture()
{
	_repeatS = true;
	_repeatT = true;
	_width = 0;
	_height = 0;
	_data = NULL;
}

Texture::Texture(const Texture &texture)
{
	// starts uninitialized
	_filename = texture._filename;
	_repeatS = texture._repeatS;
	_repeatT = texture._repeatT;
	_width = 0;
	_height = 0;
	_data = NULL;
}

Texture::~Texture()
{
	if (_data)
		delete[] _data;
}

string Texture::filename() const { return _filename; }
bool Texture::repeatS() const { return _repeatS; }
bool Texture::repeatT() const { return _repeatT; }

void Texture::filename(string s) { _filename = s; }
void Texture::repeatS(bool x) { _repeatS = x; }
void Texture::repeatT(bool x) { _repeatT = x; }

void Texture::initialize()
{
	ifstream fin(_filename.c_str());
	if (!fin) return;

	string magicNumber;
	fin >> magicNumber;
	if (magicNumber != "P6")
	{
		fin.close();
		return;
	}

	unsigned int maxVal;
	fin >> _width >> _height >> maxVal;
	fin.get();

	_data = new Color3f[_width * _height];
	for (int i = 0; i < _height; i++)
	{
		for (int j = 0; j < _width; j++)
		{
			int r, g, b;
			r = fin.get();
			g = fin.get();
			b = fin.get();
			double rr = double(r) / double(maxVal);
			double gg = double(g) / double(maxVal);
			double bb = double(b) / double(maxVal);
			_data[(_height - i - 1) * _width + j] = Color3f(rr, gg, bb);
		}
	}

	fin.close();
}

const Texture &Texture::operator=(const Texture &texture)
{
	// starts uninitialized
	_filename = texture._filename;
	_repeatS = texture._repeatS;
	_repeatT = texture._repeatT;
	_width = 0;
	_height = 0;
	_data = NULL;
	return *this;
}

string Texture::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<texture>" << endl;
	result << indent << indent_string << "<filename>" << _filename << "</filename>" << endl;
	result << indent << indent_string << "<repeat s=\"" << (_repeatS ? "true" : "false") << "\" t=\"" << (_repeatT ? "true" : "false") << "\" />" << endl;
	result << indent << "</texture>" << endl;

	// return the xml string
	return result.str();
}

bool Texture::valid(double s, double t) const
{
	if (!_data) return false;
	return true;
	if ((s < 0 || s > 1) && !_repeatS) return false;
	if ((t < 0 || t > 1) && !_repeatT) return false;
}

Color3f Texture::color(double s, double t) const
{
	// check this to prevent segfault
	if (!_data)
		return Color3f(0, 0, 0);

	// assume wrapping is on -- if it isn't and we're out of bounds,
	// it's our own fault for not checking valid() first!
	int x, y;
	x = (int)(s * _width) % _width;
	y = (int)(t * _height) % _height;
	return _data[y * _width + x];
}
