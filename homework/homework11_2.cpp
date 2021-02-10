#include <iostream>
#include <cstdlib>
#include "libhw11Shape.h"
#include "libhw11Circle.h"
#include "libhw11Rectangle.h"

using namespace std;

void calculateShapeArea(Shape *currentFigure);
void calculateShapeCircumference(Shape *currentFigure);
void introduceShape(Shape *currentFigure);

void test();
void testAllocateMemory();

main(){
    testAllocateMemory();
    system("pause");
}

void test(){
    Rectangle currentRectangle(12,12);
    Circle currentCircle(12);

    introduceShape(&currentCircle);
    calculateShapeArea(&currentCircle);
    calculateShapeCircumference(&currentCircle);
    cout << endl;
    introduceShape(&currentRectangle);
    calculateShapeArea(&currentRectangle);
    calculateShapeCircumference(&currentRectangle);
}

void testAllocateMemory(){
    Shape* pRectangle = new Rectangle(3,6);
    Shape* pCircle = new Circle(6);

    introduceShape(pRectangle);
    calculateShapeArea(pRectangle);
    calculateShapeCircumference(pRectangle);
    cout << endl;
    introduceShape(pCircle);
    calculateShapeArea(pCircle);
    calculateShapeCircumference(pCircle);

    delete pRectangle;
    delete pCircle;
}

void calculateShapeArea(Shape *currentFigure){
    cout << "Area: " << currentFigure->calculateArea() << endl;
}
void calculateShapeCircumference(Shape *currentFigure){
    cout << "Circumference: " << currentFigure->calculateCircumference() << endl;
}
void introduceShape(Shape *currentFigure){
    currentFigure->introduce();
}