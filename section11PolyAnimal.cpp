#include <iostream>
#include "section11PolyAnimal.h"

using namespace std;

Animal::Animal(){
    this->voice = "default voice";
}

Animal::~Animal(){
    cout << "base class destructor was called" << endl;
}

Dog::Dog(){
    this->voice = "hua";
    this->signal = "DO";
}

Dog::~Dog(){
    cout << "sub class destructor was called" << endl;
}

Cat::Cat(){
    this->voice = "mewo";
    this->signal = "CA";
}

Cat::~Cat(){
    cout << "sub class destructor was called" << endl;
}

Cow::Cow(){
    this->voice = "moooo";
    this->signal = "CO";
}

Cow::~Cow(){
    cout << "sub class destructor was called" << endl;
}