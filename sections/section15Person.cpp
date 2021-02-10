#include <iostream>
#include "section15Person.h"

using namespace std;

Person::Person(){
    cout << "A person was created" << endl;
}

Person::Person(string name, string surname, short age, string telephone){
    this->age = age;
    this->name = name;
    this->surname = surname;
    this->telephone = telephone;
    cout << "A person was created" << endl;
}

Person::~Person(){
    cout << "A person was deleted" << endl;
}

void Person::setName(string name){
    this->name = name;
}

void Person::setAge(short age){
    this->age = age;
}

void Person::setSurname(string surname){
    this->surname = surname;
}

void Person::setTelephone(string telephone){
    this->telephone = telephone;
}

void Person::setId(int id){
    this->id = id;
}