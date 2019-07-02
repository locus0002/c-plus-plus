#ifndef LINKED_LIST_VAC
#define LINKED_LIST_VAC
#include "NodeLLVAC.h"

class LinkedListVAC{
    private:
        NodeLLVAC* head;
    public:
        LinkedListVAC();
        ~LinkedListVAC();
        bool isNull();
        void add(int);
        void deleteNode();
        void display();
};

#endif