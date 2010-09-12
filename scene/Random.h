#ifndef __RANDOM_H
#define __RANDOM_H

#include "Vector3f.h"

class Random
{
  private:
	// Cannot actually be instantiated
	Random();
	~Random();

  public:
	// Seeds the internal random number generator with the current time.
	static void initialize();

	// Uniform distribution from the respective ranges:
	// * [0, 1)
	// * [min, max)
	// Uses rand() internally.
	static double uniform();
	static double uniform(double min, double max);

	// Near-gaussian distribution with specified mean and spread.
	// Uses a single hump of a cosine to approximate gaussian.
	// Uses 'uniform' internally.
	static double gaussian(double mean, double spread);

	// Jitters a direction off center by up to jitter in any direction.
	// Uses 'gaussian' and 'uniform' internally.
	static Vector3f direction(const Vector3f &center, double jitter);

	// Jitters a location off center by up to jitter in any direction.
	// Uses gaussian and uniform internally.
	static Vector3f location(const Vector3f &center, double jitter);
};

#endif // __RANDOM_H
