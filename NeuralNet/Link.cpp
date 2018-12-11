#include "Link.h"



Link::Link()
{
}


Link::~Link()
{
}

void Link::randWeight()
{
	std::random_device seed;
	std::mt19937 rgen(seed());
	std::uniform_real_distribution<> dist(0.0, 1.0);
	_lWeight = dist(rgen);
}
