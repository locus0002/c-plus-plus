#include <iostream>
#include "section11InheritancePoint.h"

using namespace std;

Point::Point(int x){
    this->x = x;
    cout << "Constructor POINT " << endl;
}

Point::~Point(){
    cout << "Destructor POINT" << endl;
}

void Point::setX(int x){
    cout << "Method parent" << endl;
    this->x = x;
}

Point2D::Point2D(int x, int y) : Point(x) {
    this->y=y;
    cout << "Constructor POINT2D" << endl;
}

Point2D::~Point2D(){
    cout << "Destructor POINT2D" << endl;
}

void Point2D::setY(int y){
    this->y = y;
}

void Point2D::setX(int x){
    this->x = x;
}

void Point2D::setXY(int x, int y){
    setX(x);
    setY(y);
}

//Another way
Point2D Point2D::operator+(Point2D newPoint){
    Point2D temp;
    temp.setX(this->getX() + newPoint.getX());
    temp.setY(this->getY() + newPoint.getY());
    return temp;
}