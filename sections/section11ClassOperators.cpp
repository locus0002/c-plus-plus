#include "section11ClassOperators.h"


Integer::Integer(int number){
    this->number = number;
}

Integer::operator int(){
    return this->number;
}

int Integer::operator+=(Integer currentInteger){
    this->number = currentInteger.getNumber() + this->number;
    return this->number;
}
