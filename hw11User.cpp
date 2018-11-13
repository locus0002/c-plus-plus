#include <iostream>
#include "libhw11User.h"

using namespace std;

User::User(){
    cout << "A new user was created" << endl;
}

User::User(string name, string lastName){
    this->name = name;
    this->lastName = lastName;
}

User::~User(){
    cout << "A user was deleted" << endl;
}

void User::setName(string name){
    this->name = name;
}

void User::setLastName(string lastName){
    this->lastName = lastName;
}