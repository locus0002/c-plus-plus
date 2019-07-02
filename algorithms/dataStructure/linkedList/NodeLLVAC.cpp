#include <iostream>
#include "NodeLLVAC.h"

using namespace std;

NodeLLVAC::NodeLLVAC(){
    this->next = NULL;
}

NodeLLVAC::NodeLLVAC(int newValue){
    this->value = newValue;
    this->next = NULL;
}

NodeLLVAC::~NodeLLVAC(){
    //delete this->next;
    cout << "The node was deleted" << endl;
}

void NodeLLVAC::setNext(NodeLLVAC* nextNode){
    this->next = nextNode;
}

NodeLLVAC* NodeLLVAC::getNext(){
    return this->next;
}

int NodeLLVAC::getValue(){
    return this->value;
}