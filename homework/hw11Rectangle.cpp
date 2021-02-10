#include <iostream>
#include "libhw11Rectangle.h"

using namespace std;

Rectangle::~Rectangle(){
    cout << "Rectangle destructor" << endl;
}

Rectangle::Rectangle(double width, double lenght){
    this->lenght = lenght;
    this->width = width;
}

void Rectangle::introduce(){
    cout << "This is a rectangle" << endl;
}

double Rectangle::calculateArea(){
    return this->lenght * this->width;
}

double Rectangle::calculateCircumference(){
    return 2*(this->lenght + this->width);
}