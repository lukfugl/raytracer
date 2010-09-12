#include "Camera.h"
#include "Random.h"
#include <sstream>
#include <math.h>

Camera::Camera()
{
	_fieldOfView = 0.4;
	_imageWidth = 256;
	_imageHeight = 256;
	_samplingLevel = 0;
}

Camera::Camera(const Camera &c)
{
	_position = c._position;
	_target = c._target;
	_up = c._up;
	_fieldOfView = c._fieldOfView;
	_imageWidth = c._imageWidth;
	_imageHeight = c._imageHeight;
	_samplingLevel = c._samplingLevel;
}

Camera::~Camera() { }

const Vector3f &Camera::position() const { return _position; }
const Vector3f &Camera::target() const { return _target; }
const Vector3f &Camera::up() const { return _up; }
double Camera::fieldOfView() const { return _fieldOfView; }
unsigned int Camera::imageWidth() const { return _imageWidth; }
unsigned int Camera::imageHeight() const { return _imageHeight; }
unsigned int Camera::samplingLevel() const { return _samplingLevel; }

void Camera::position(const Vector3f &pos) { _position = pos; }
void Camera::target(const Vector3f &t) { _target = t; }
void Camera::up(const Vector3f &v) { _up = v; }
void Camera::fieldOfView(double fov) { _fieldOfView = fov; }
void Camera::imageWidth(unsigned int w) { _imageWidth = w; }
void Camera::imageHeight(unsigned int h) { _imageHeight = h; }
void Camera::samplingLevel(unsigned int l) { _samplingLevel = l; }

const Camera &Camera::operator=(const Camera &c)
{
	_position = c._position;
	_target = c._target;
	_up = c._up;
	_fieldOfView = c._fieldOfView;
	_imageWidth = c._imageWidth;
	_imageHeight = c._imageHeight;
	_samplingLevel = c._samplingLevel;
	return *this;
}

string Camera::to_xml(string indent_string, unsigned int indent_count) const
{
	// generate indent prefix
	stringstream tmp;
	for (int i = 0; i < indent_count; i++)
		tmp << indent_string;
	string indent = tmp.str();

	// generate xml string
	stringstream result;
	result << indent << "<camera>" << endl;
	result << indent << indent_string << "<position>" << _position.to_xml() << "</position>" << endl;
	result << indent << indent_string << "<target>" << _target.to_xml() << "</target>" << endl;
	result << indent << indent_string << "<up>" << _up.to_xml() << "</up>" << endl;
	result << indent << indent_string << "<fieldOfView>" << _fieldOfView << "</fieldOfView>" << endl;
	result << indent << indent_string << "<imageSize width='" << _imageWidth << "' height='" << _imageHeight << "' />" << endl;
	result << indent << indent_string << "<samplingLevel>" << _samplingLevel << "</samplingLevel>" << endl;
	result << indent << "</camera>" << endl;

	// return the xml string
	return result.str();
}

void Camera::initialize()
{
	Vector3f U = _up;
	Vector3f W = 2.0 * (_position - _target);
	Vector3f V = Vector3f::cross(U, W);

	double alpha = -W.length() * tan(_fieldOfView / 2.0);
	double beta = -alpha * _imageWidth / _imageHeight;
	Vector3f scan_right = V * (beta  / V.length());
	Vector3f scan_down  = U * (alpha / U.length());

	if (_samplingLevel == 0) _samplingLevel = 1;
	delta_pixel_right = scan_right * (1.0 / (_imageWidth * _samplingLevel));
	delta_pixel_down  = scan_down  * (1.0 / (_imageHeight * _samplingLevel));

	to_top_left = -0.5 * (W + scan_right - delta_pixel_right + scan_down - delta_pixel_down);
}

vector< Ray > Camera::rays_through_pixel(unsigned int i, unsigned int j) const
{
	vector< Ray > result;
	for (int k = 0; k < _samplingLevel; k++)
	{
		Vector3f direction = to_top_left;
		direction += Random::gaussian(i * _samplingLevel + k, 0.5) * delta_pixel_right;
		direction += Random::gaussian(j * _samplingLevel + k, 0.5) * delta_pixel_down;

		Ray tmp;
		tmp.origin(_position);
		tmp.direction(direction);
		result.push_back(tmp);
	}
	return result;
}
