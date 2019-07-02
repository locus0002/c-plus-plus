#include <iostream>
#include "LinkedListVAC.h"
#include "NodeLLVAC.h"

using namespace std;

LinkedListVAC::LinkedListVAC(){
    this->head = NULL;
}

LinkedListVAC::~LinkedListVAC(){
    //delete this->head;
    if(this->head != NULL){
        NodeLLVAC* auxNode = this->head;
        while(auxNode != NULL){
            NodeLLVAC* deletedNode = auxNode;
            auxNode = auxNode->getNext();
            delete deletedNode;
        }
    }
    cout << "Linked List was deleted" << endl;
}

void LinkedListVAC::add(int newValue){
    NodeLLVAC* newNode = new NodeLLVAC(newValue);
    if(this->head == NULL){
        this->head = newNode;
    }else{
        newNode->setNext(this->head);
        this->head = newNode;
    }
}

void LinkedListVAC::deleteNode(){
    if(this->head != NULL){
        NodeLLVAC* deletedNode = this->head;
        this->head = this->head->getNext();
        delete deletedNode;
    }
}

void LinkedListVAC::display(){
    if(this->head != NULL){
        NodeLLVAC* auxNode = this->head;
        while(auxNode != NULL){
            cout << auxNode->getValue() << endl;
            auxNode = auxNode->getNext();
        }
    }
}

bool LinkedListVAC::isNull(){
    if(this->head == NULL){
        return true;
    }
    return false;
}