#include "Node.h"

Node::Node()
{
}

Node::Node(double weight)
{
	_nWeight = weight;
}

Node::~Node()
{
}

void Node::randWeight()
{
	std::random_device seed;
	std::mt19937 rgen(seed());
	std::uniform_real_distribution<> dist(0.0, 1.0);
	_nWeight = dist(rgen);
}