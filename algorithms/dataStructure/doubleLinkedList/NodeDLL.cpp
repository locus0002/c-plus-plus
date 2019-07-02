#include <iostream>
#include "NodeDLL.h"

using namespace std;

NodeDLL::NodeDLL(){
    this->next = NULL;
    this->prev = NULL;
}

NodeDLL::NodeDLL(int newValue){
    this->next = NULL;
    this->prev = NULL;
    this->value = newValue;
}

NodeDLL::~NodeDLL(){
    cout << "The node was deleted" << endl;
}

void NodeDLL::setNext(NodeDLL* nextNode){
    this->next = nextNode;
}

void NodeDLL::setPrev(NodeDLL* prevNode){
    this->prev = prevNode;
}

int NodeDLL::getValue(){
    return this->value;
}

NodeDLL* NodeDLL::getNext(){
    return this->next;
}

NodeDLL* NodeDLL::getPrev(){
    return this->prev;
}