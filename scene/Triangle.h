#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "Object.h"
#include "Ray.h"
#include "Vector3f.h"
#include "Vertex.h"
#include <string>
#include <vector>

class Triangle : public Object
{
  protected:
	Vertex _vertices[3];
	Vector3f _normal;
	
  public:
	Triangle();
	Triangle(const Triangle &t);
	virtual ~Triangle();

	void initialize(bool ccw = true);

	// read accessors
	Vertex vertex(unsigned int i) const;
	virtual string to_xml(string indent_string = "", unsigned int indent_count = 0) const;

	// write accessors
	void vertex(unsigned int i, const Vertex &v);

	// overloaded assignment
	const Triangle &operator=(const Triangle &t);

	// for bounding boxes
	virtual Vector3f minExtent() const;
	virtual Vector3f maxExtent() const;

	// raytracing functions
	virtual Vector3f normal(const Vector3f &point) const;
	virtual Intersection intersect(const Ray &ray) const;
	virtual void textureCoords(const Vector3f &point, double &tS, double &tT) const;
};

#endif // __TRIANGLE_H
