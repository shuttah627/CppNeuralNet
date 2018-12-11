# CppNeuralNet
Neural Network implementation in C++

A simple machine learning library that allows users to create a simple Neural Network of a given input, hidden and output node count. The model can be trained directly via backpropagation, or the model can be trained indirectly via some other means, such as Neuro-Evolution. 

Although the math behind neural networks consist almost entirely of Matrix Multiplication, this library uses an object oriented approach for nodes and the links between them.

Due to the amount of memory required for storing doubles (memory requirement for a network is exponential against the node count), all objects within the network are connected in reference, not in value. This guarrentees that all data is stored on the heap responsibly, and no variable duplication is done during the calling of functions.

The model uses Softmax Aproximation to normalise the data at all layers of nodes, and the resulting values are returned to the main program as a vector of doubles. This library has been used to solve complicated math problems in only a few seconds of training; that being from knowing nothing at all, to learning the concept of numbers and math, to solving problems such as XOR and recognising numbers in handwriting samples from the MNIST handwriting dataset.
