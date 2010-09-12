#include "Random.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

Random::Random() { }
Random::~Random() { }

void Random::initialize()
{
	srand(time(NULL));
}

double Random::uniform()
{
	return rand() / (1.0 * RAND_MAX);
}

double Random::uniform(double min, double max)
{
	return (uniform() * (max - min) + min);
}

double Random::gaussian(double mean, double spread)
{
	return (0.63661977 * asin(2.0 * uniform() - 1) * spread + mean);
}

Vector3f Random::direction(const Vector3f &center, double jitter)
{
	/*
	double thetaA, phiA, theta;
	double c1, c2, c3, s1, s2, s3;
	double a, b, c, d, e, f, g, h, i;
	double x, y, z, nx, ny, nz;

	// get random angles and their sines/cosines
	thetaA = uniform(0.0, 6.2831853);
	phiA = uniform(-1.5707963, 1.5707963);
	theta = gaussian(0.0, atan2(0.8660254 * jitter, 1.0));
	c1 = cos(thetaA);
	s1 = sin(thetaA);
	c2 = cos(phiA);
	s2 = sin(phiA);
	c3 = cos(theta);
	s3 = sin(theta);

	// build jitter matrix
	a = c1 * c1 * (c2 * c2 + s2 * s2 * c3) + s1 * s1 * c3;
	b = c2 * (c1 * s2 * (1 - c3) - s1 * s3);
	c = c1 * s1 * c2 * c2 * (1 - c3) + s2 * s3;
	d = b;
	e = s2 * s2 + c2 * c2 * c3;
	f = c2 * (s1 * s2 * (1 - c3) - c1 * s3);
	g = c1 * s1 * c2 * c2 * (1 - c3) - s2 * s3;
	h = c2 * (s1 * s2 * (1 - c3) + c1 * s3);
	i = s1 * s1 * (c2 * c2 + s2 * s2 * c3) + c1 * c1 * c3;

	// apply matrix to vector
	x = center.x();
	y = center.y();
	z = center.z();
	nx = a * x + b * y + c * z;
	ny = d * x + e * y + f * z;
	nz = g * x + h * y + i * z;

	return Vector3f(nx, ny, nz);
	*/

	Vector3f result = Vector3f::normalize(center);
	result += Vector3f(uniform(-jitter, jitter), uniform(-jitter, jitter), uniform(-jitter, jitter));
	return result;
}

Vector3f Random::location(const Vector3f &center, double jitter)
{
	/*
	double theta, phi, r;
	double c1, c2, s1, s2;
	double x, y, z, nx, ny, nz;

	// get random angles and their sines/cosines
	theta = uniform(0.0, 6.2831853);
	phi = uniform(-1.5707963, 1.5707963);
	r = gaussian(0.0, jitter);
	c1 = cos(theta);
	s1 = sin(theta);
	c2 = cos(phi);
	s2 = sin(phi);

	// apply offset to vector
	x = center.x();
	y = center.y();
	z = center.z();
	nx = x + r * s2 * c1;
	ny = y + r * c2;
	nz = z + r * s2 * s1;

	return Vector3f(nx, ny, nz);
	*/
	Vector3f result = center;
	result += Vector3f(uniform(-jitter, jitter), uniform(-jitter, jitter), uniform(-jitter, jitter));
	return result;
}
