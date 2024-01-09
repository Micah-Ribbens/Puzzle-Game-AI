//
// Created by mdrib on 1/9/2024.
//

#ifndef SYNAPSE_H
#define SYNAPSE_H
#include "Neuron.h"


// If we were to think of a neural network as a graph, this would be a "edge" in the graph
class Synapse {
    public:
        int weight;
        Neuron from;
        Neuron to;
};


#endif //SYNAPSE_H
