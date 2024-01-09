//
// Created by mdrib on 1/9/2024.
//

#ifndef SIMPLE_AI_NEURON_H
#define SIMPLE_AI_NEURON_H


// If we were to think of a neural network as a graph, this would be a "vertex" in the graph
class Neuron {
    public:
        void addValue(int value);
        void subtractValue(int value);
        void setValue(int value);
        void setDefault(int value);
        int getDefault();
        void reset();
        bool hasFired();
    
    private:
        int value;
        int defaultValue;
};


#endif //SIMPLE_AI_NEURON_H
