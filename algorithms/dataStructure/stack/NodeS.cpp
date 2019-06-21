#include <iostream>
#include "NodeS.h"

using namespace std;

NodeS::NodeS(){
    this->next = NULL;
}

NodeS::NodeS(int newValue){
    this->next = NULL;
    this->value = newValue;
}

NodeS::~NodeS(){
    cout << "The node was deleted" << endl;
}

NodeS* NodeS::getNext(){
    return this->next;
}

void NodeS::setNext(NodeS* newNode){
    this->next = newNode;
}

int NodeS::getValue(){
    return this->value;
}