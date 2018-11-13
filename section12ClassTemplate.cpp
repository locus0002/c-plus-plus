#include <iostream>
#include <cstdlib>
#include "section12libPointTemplate.h"

using namespace std;

/*
    typedef is usefull when the alias are necessary
*/
typedef Point<int> PoinInt;

void test();

main(){
    test();
    system("pause");
}

void test(){
    PoinInt myPoint(2);
    myPoint.setX(3);
    Point<double*> myPointP(10.5);
    Point<double> myPointD(10.5);
    myPointD.setX(11.2);
    Point2D<double> myPoint2D(10.5, 11.2);
    myPoint2D.setX(34.5);
    cout << "Value of the point: " << myPoint.getX() << endl;
    cout << "Value of the point: " << myPointD.getX() << endl;
    cout << "Value of the point: " << myPoint2D.getX() << " - " << myPoint2D.getY() << endl;
}