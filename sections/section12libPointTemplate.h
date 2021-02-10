#ifndef POINT_INHERITANCE
#define POINT_INHERITANCE

#include <iostream>

using namespace std;

template<typename T>
class Point{

    protected: //the child class can access to this attribute
        T x;
    public:
        Point(T = 0); //this declaration indicates that the constructor can receive nothing and when it happens, the value of x will be 0
        ~Point();
        void setX(T);
        T getX(){ return x; }
};

template<typename T>
class Point2D : public Point<T>{ //this inheritance

    protected:
        T y;
    public:
        Point2D(T = 0, T = 0);
        ~Point2D();
        void setY(T);
        void setX(T); // it is possible overload the methods passed by inheritance when it is necessary doing different things
        void setXY(T, T);
        T getY(){ return y; }
        Point2D operator+(Point2D);
};

template<typename K>
class Point<K*>{
    public:
        Point(K a= 0){ cout << "you cannot use pointers here" << endl; };
};

template<typename T>
Point<T>::Point(T x){
    this->x = x;
    cout << "Constructor POINT " << endl;
}

template<typename T>
Point<T>::~Point(){
    cout << "Destructor POINT" << endl;
}

template<typename T>
void Point<T>::setX(T x){
    cout << "Method parent" << endl;
    this->x = x;
}

//this is a specialization
template<>
void Point<double>::setX(double x){
    cout << "Method parent and specialization" << endl;
    this->x = x;
}

template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x) {
    this->y=y;
    cout << "Constructor POINT2D" << endl;
}

template<typename T>
Point2D<T>::~Point2D(){
    cout << "Destructor POINT2D" << endl;
}

template<typename T>
void Point2D<T>::setY(T y){
    this->y = y;
}

template<typename T>
void Point2D<T>::setX(T x){
    this->x = x;
}

template<typename T>
void Point2D<T>::setXY(T x, T y){
    setX(x);
    setY(y);
}

//Another way
template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D newPoint){
    Point2D temp;
    temp.setX(this->getX() + newPoint.getX());
    temp.setY(this->getY() + newPoint.getY());
    return temp;
}

#endif