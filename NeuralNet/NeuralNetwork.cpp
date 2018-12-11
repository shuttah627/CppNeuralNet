#include "NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(int inodes, int hnodes, int onodes, bool fillrandom)
{
	GenerateNodes(_inNodes, inodes, fillrandom);
	GenerateNodes(_hidNodes, hnodes, fillrandom);
	GenerateNodes(_outNodes, onodes, fillrandom);
}

NeuralNetwork::~NeuralNetwork()
{
}

bool NeuralNetwork::GenerateNodes(std::list<Node> &list, int count, bool randomVals)
{
	std::list<Node>* temp = &list;
	for (int i = 0; i < count; i++) {
		Node j;
		if (randomVals) {
			j.randWeight();
		}
		temp->push_back(j);
	}
	return true;
}

void NeuralNetwork::GenerateLinks(std::list<Link> &destination, std::list<Node> &first, std::list<Node> &second, bool randomVals)
{
	std::list<Node>* list1 = &first;
	std::list<Node>* list2 = &second;

	for (int i = 0; i < list1->size; i++) {
		for (int j = 0; j < list2->size; j++) {
			Link x;
			//x._bNode = list1->[i];
			//x._fNode = list2->[j];
		}
	}


}
