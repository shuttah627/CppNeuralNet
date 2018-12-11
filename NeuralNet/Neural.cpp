#include "includes.h"
#include "classes.h"

int main() {
	//srand(time(0));
	NeuralNetwork* neuralnet = new NeuralNetwork(13, 5, 3, true);

	// MEMORY MAN BEGIN
	delete neuralnet;
	return 1;
}