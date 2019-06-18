#ifndef DOUBLE_LINKED_LIST_VAC
#define DOUBLE_LINKED_LIST_VAC
#include "NodeDLL.h"

class DoubleLinkedList
{
    private:
        NodeDLL* head;
    public:
        DoubleLinkedList();
        ~DoubleLinkedList();
        void add(int);
        void deleteNode();
        void display();
};

#endif