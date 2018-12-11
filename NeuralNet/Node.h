#pragma once
#include "includes.h"

class Node
{
public: // Functions
	Node();
	Node(double weight);
	
	~Node();

	void randWeight();
public: // Variables
	double _nWeight;
};

