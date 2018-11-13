#include "section11FriendClaseA.h"
#include "section11FriendClaseB.h"

void A::setValueinB(B &classB, int newValue){
    classB.attributeB = newValue;
}

void A::setPointer(int value){
    *(this->pointerA) = value;
}

A::A(){
    this->attributeA = 0;
    this->attributeB = 0;
    this->pointerA = new int(0);
}

A::A(int attrA, int attrB, int value){
    this->attributeA = attrA;
    this->attributeB = attrB;
    this->pointerA = new int(value);
    /*
        when the assgination of pointer dynamically is int(VALUE),
        it is reserving memory just for a INT VALUE and at the same time puts the value in that direction
    */
}

/*
    this CONSTRUCTOR is used when it is making a copy of a object of this class
    but its attributes, a least one of them that is pointer. it is avoiding
    pointing to the same direction of the pointer attribute
*/
A::A(const A& classA){
    this->attributeA = classA.attributeA;
    this->attributeB = classA.attributeB;
    this->pointerA = new int(*(classA.pointerA));
}

A::~A(){
    delete pointerA;
}