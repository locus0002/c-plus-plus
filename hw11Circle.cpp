#include "libhw11Circle.h"
#include <iostream>

using namespace std;

Circle::~Circle(){
    cout << "Circle destructor" << endl;
}

Circle::Circle(double radio){
    this->radio = radio;
}

void Circle::introduce(){
    cout << "This is a circle" << endl;
}

double Circle::calculateArea(){
    return 3.1416 * (this->radio) * (this->radio);
}

double Circle::calculateCircumference(){
    return 2 * 3.1416 * this->radio;
}