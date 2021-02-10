#include <iostream>
#include <cstdlib>
#include "section11InheritancePoint.h"

using namespace std;
/*
    Templete functions
    The template is useful when you wish did a generic function
    and the function will be not overladed
*/

template<typename T, typename T2>
T add(T var1, T2 var2){
    return var1 + var2;
}

/*
    on the other hand when the sent variables are not supported
    an specialization would be a solution or and overlad of operator
*/
/*
template<>
Point2D add(Point2D var1, Point2D var2){
    Point2D temp;
    temp.setX(var1.getX() + var2.getX());
    temp.setY(var1.getY() + var2.getY());

    return temp;
}
*/
main(){
    /*
        the result of the next setence will be a double, 
        because of the fact that the first type specify the type of return
    */
    cout << add(2.5,2.1) << endl; 
    /*
        the result of the next setence will be an integer, 
        because of the fact that the first type specify the type of return
    */
    cout << add(2,2.1) << endl;
    /*
        but we can specify the type of variables
        and the result of the next setence will be a double,
        because of the fact that we specified the type or variables
    */
    cout << add<double, double>(2,2.1) << endl;
    /*
        Now an overload operator function was created and it was not necessary creating
        an specialization
    */
    Point2D p1(10, 67);
    Point2D p2(50, 6);

    Point2D newP = add(p1, p2);
    cout << newP.getX() << endl;
    cout << newP.getY() << endl;
    system("pause");
}