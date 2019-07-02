#include <iostream>
#include "NodeQ.h"

using namespace std;

NodeQ::NodeQ(){
    this->next = NULL;
    this->prev = NULL;
}

NodeQ::NodeQ(int newValue){
    this->next = NULL;
    this->prev = NULL;
    this->value = newValue;
}
NodeQ::~NodeQ(){
    cout << "The node was destroyed" << endl;
}

int NodeQ::getValue(){
    return this->value;
}

void NodeQ::setValue(int newValue){
    this->value = newValue;
}

NodeQ* NodeQ::getNext(){
    return this->next;
}

void NodeQ::setNext(NodeQ* currentNode){
    this->next = currentNode;
}

NodeQ* NodeQ::getPrev(){
    return this->prev;
}

void NodeQ::setPrev(NodeQ* currentNode){
    this->prev = currentNode;
}