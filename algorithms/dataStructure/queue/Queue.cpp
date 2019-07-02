#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(){
    this->bottom = NULL;
    this->top = NULL;
}

Queue::~Queue(){
    while(this->bottom != NULL){
        NodeQ* auxNode = this->bottom;
        this->bottom = auxNode->getPrev();
        delete auxNode;
    }
    cout << "The queue was destroyed" << endl;
    system("pause");
}

void Queue::push(int newValue){

    NodeQ* newNode = new NodeQ(newValue);
    if(this->top == NULL){
        this->top = newNode;
        this->bottom = newNode;
    }else{
        this->top->setPrev(newNode);
        newNode->setNext(this->top);
        this->top = newNode;
    }
}

void Queue::dequeue(){
    if(this->bottom != NULL){
        NodeQ* auxNode = this->bottom;
        cout << "Value: " << auxNode->getValue() << endl;
        this->bottom = auxNode->getPrev();
        delete auxNode;
        if(this->bottom != NULL){
            this->bottom->setNext(NULL);
        }

    }else{
        cout << "The queue is empty" << endl;
    }
}

void Queue::print(){
    NodeQ* auxNode = this->bottom;
    while(auxNode != NULL){
        cout << "Value: " << auxNode->getValue() << endl;
        auxNode = auxNode->getPrev();
    }
}