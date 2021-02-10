#include <iostream>
#include <cstdlib>
#include "section11InheritancePoint.h"

using namespace std;

void test();

main(){
    
    test();
    system("pause");
}

void test(){
    Point pointX;
    Point2D pointXY;

    pointX.setX(11);
    pointXY.setXY(12,12);

    cout << "Point X: " << pointX.getX() << endl;
    cout << "PointXY X: " << pointXY.getX() << " Y: " << pointXY.getY() << endl;
    //it is possible calling the specific method of the parent
    pointXY.Point::setX(90);
    cout << "PointXY X: " << pointXY.getX() << " Y: " << pointXY.getY() << endl;
}