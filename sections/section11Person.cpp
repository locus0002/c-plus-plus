#include <iostream>
#include "section11Person.h"
using namespace std;

int PersonalData::counter = 0;

void PersonalData::setAge(short age){
    if(age < 0){
        this->age = 0;
    }else{
        this->age = age;
    }
}

void PersonalData::setName(string name){
    this->name = name;
}

PersonalData::PersonalData(){
    counter++;
    this->ID = counter;
    this->age = 18;
    this->name = "Default Name";
    this->PIpointer = new int;
    cout << "the constructor was called" << endl;
}

PersonalData::PersonalData(short age, string name){
    counter++;
    this->ID = counter;
    this->age = age;
    this->name = name;
    this->PIpointer = new int;
    cout << "the overloaded constructor was called" << endl;
}

PersonalData::~PersonalData(){
    cout << "the distructor was called" << endl;
    delete this->PIpointer;//if a property is a POINTER and this was created dynamically, it should release the MEMORY
}