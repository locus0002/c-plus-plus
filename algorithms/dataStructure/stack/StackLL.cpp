#include <iostream>
#include "StackLL.h"

using namespace std;

StackLL::StackLL(){
    this->top = NULL;
}
StackLL::~StackLL(){
    while(this->top != NULL){
        NodeS* auxNode = this->top;
        this->top = auxNode->getNext();
        delete auxNode;
    }
    cout << "The Stack was deleted" << endl;
    system("pause");
}

void StackLL::push(int newValue){
    NodeS* newNode = new NodeS(newValue);
    if(this->top == NULL){
        this->top = newNode;
    }else{
        newNode->setNext(this->top);
        this->top = newNode;
    }
}

void StackLL::pop(){
    if(this->top != NULL){
        cout << this->top->getValue() << endl;
        NodeS* auxNode = this->top;
        this->top = auxNode->getNext();
        delete auxNode;
    }else{
        cout << "The stack is empty" << endl;
    }
}