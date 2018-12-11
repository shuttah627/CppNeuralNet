#pragma once
#include "includes.h"
#include "Node.h"

class Link
{
public: // Functions
	Link();
	~Link();
	void randWeight();
public: // Variables
	double _lWeight;
	Node* _fNode;
	Node* _bNode;
};

