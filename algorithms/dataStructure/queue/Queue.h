#ifndef QUEUE_VAC
#define QUEUE_VAC
#include "NodeQ.h"

class Queue{
    private:
        NodeQ* top;
        NodeQ* bottom;
    public:
        Queue();
        ~Queue();
        void push(int);
        void dequeue();
        void print();
};

#endif