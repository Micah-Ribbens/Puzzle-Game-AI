//
// Created by mdrib on 1/9/2024.
//

#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H
#include "Neuron.h"
#include "Synapse.h"
#include std;
#include <vector>


// If we were to think of a neural network as a graph, this is the main "graph class"
class NeuralNetwork {
    public:
        void addNeuron(Neuron neuron);
        void addSynapse(Synapse synapse, Neuron from, Neuron to);
        int getOutput(vector<int> input);
        void reset();
};


#endif //NEURAL_NETWORK_H
