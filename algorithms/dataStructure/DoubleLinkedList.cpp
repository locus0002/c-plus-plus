#include <iostream>
#include "DoubleLinkedList.h"
#include "NodeDLL.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList(){
    this->head = NULL;
}

DoubleLinkedList::~DoubleLinkedList(){
    if (this->head != NULL){
        NodeDLL* deletedNode = NULL;

        while(this->head != NULL){
            deletedNode = this->head;
            this->head = this->head->getNext();
            delete deletedNode;
        }
    }
    cout << "The list was deleted" << endl;
    system("pause");
}

void DoubleLinkedList::add(int newValue){
    NodeDLL* newNode = new NodeDLL(newValue);
    if(this->head == NULL){
        this->head = newNode;
    }else
    {
        newNode->setNext(this->head);
        this->head->setPrev(newNode);
        this->head = newNode;
    }
    
}

void DoubleLinkedList::deleteNode(){
    if(this->head != NULL){
        NodeDLL* auxNode = this->head;
        this->head = this->head->getNext();
        if(this->head != NULL){
            this->head->setPrev(NULL);
        }
        delete auxNode;
    }
}

void DoubleLinkedList::display(){
    if (this->head != NULL){
        NodeDLL* auxNext = this->head;
        NodeDLL* auxPrev = NULL;

        cout << "***********Next**************" << endl;
        while(auxNext != NULL){
            cout << auxNext->getValue() << "\t";
            auxNext = auxNext->getNext();
            if(auxNext != NULL){
                auxPrev = auxNext;
            }
        }

        cout << endl << "**********Prev**********" << endl;
        while(auxPrev != NULL){
            cout << auxPrev->getValue() << "\t";
            auxPrev = auxPrev->getPrev();
        }
        cout << endl;
    }
}