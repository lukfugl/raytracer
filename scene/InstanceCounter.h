#ifndef __INSTANCECOUNTER_H
#define __INSTANCECOUNTER_H

class InstanceCounter
{
  public:
	static int instances;

	InstanceCounter();
	InstanceCounter(const InstanceCounter &);
	~InstanceCounter();

  private:
	const InstanceCounter &operator=(const InstanceCounter &);
};

#endif // __INSTANCECOUNTER_H
