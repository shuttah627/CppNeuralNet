#pragma once
#include "includes.h"

// OTHER REQUIRED CLASSES
#include "Node.h"
#include "Link.h"

class NeuralNetwork
{
public: // Functions
	NeuralNetwork(int input_nodes, int hidden_nodes, int output_nodes, bool fillRandom);
	~NeuralNetwork();
	bool GenerateNodes(std::list<Node> &list, int count, bool randomVals);
	void GenerateLinks(std::list<Link> &destination, std::list<Node> &first, std::list<Node> &second, bool randomVals);

public: // Variables
	std::list<Node> _inNodes, _hidNodes, _outNodes;
	std::list<Link> _inhidLink, _hidoutLink;
};

