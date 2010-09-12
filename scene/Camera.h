#ifndef __CAMERA_H
#define __CAMERA_H

#include "InstanceCounter.h"
#include "Vector3f.h"
#include "Ray.h"
#include <string>
#include <vector>

class Camera : public InstanceCounter
{
  protected:
	Vector3f _position;
	Vector3f _target;
	Vector3f _up;
	double _fieldOfView;
	unsigned int _imageWidth;
	unsigned int _imageHeight;
	unsigned int _samplingLevel;

	// used for ray tracing calculation efficiency
	Vector3f delta_pixel_right, delta_pixel_down, to_top_left;

  public:
	Camera();
	Camera(const Camera &c);
	~Camera();

	// read accessors
	const Vector3f &position() const;
	const Vector3f &target() const;
	const Vector3f &up() const;
	double fieldOfView() const;
	unsigned int imageWidth() const;
	unsigned int imageHeight() const;
	unsigned int samplingLevel() const;
	string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void position(const Vector3f &pos);
	void target(const Vector3f &t);
	void up(const Vector3f &v);
	void fieldOfView(double fov);
	void imageWidth(unsigned int w);
	void imageHeight(unsigned int h);
	void samplingLevel(unsigned int l);

	// overloaded assignment
	const Camera &operator=(const Camera &c);

	// ray tracing functions
	void initialize();
	vector< Ray > rays_through_pixel(unsigned int i, unsigned int j) const;
};

#endif // __CAMERA_H
