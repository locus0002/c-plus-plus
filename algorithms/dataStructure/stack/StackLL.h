#ifndef STACK_LINKEDLIST
#define STACK_LINKEDLIST
#include "NodeS.h"

class StackLL{
    private:
        NodeS* top;
    public:
        StackLL();
        ~StackLL();
        void push(int);
        void pop();
};

#endif