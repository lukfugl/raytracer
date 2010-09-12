#include "InstanceCounter.h"

int InstanceCounter::instances = 0;

InstanceCounter::InstanceCounter() { instances++; }
InstanceCounter::InstanceCounter(const InstanceCounter &) { instances++; }
InstanceCounter::~InstanceCounter() { instances--; }
