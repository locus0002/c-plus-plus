#ifndef POINT_INHERITANCE
#define POINT_INHERITANCE

class Point{

    protected: //the child class can access to this attribute
        int x;
    public:
        Point(int = 0); //this declaration indicates that the constructor can receive nothing and when it happens, the value of x will be 0
        ~Point();
        void setX(int);
        int getX(){ return x; }
};

class Point2D : public Point{ //this inheritance

    protected:
        int y;
    public:
        Point2D(int = 0, int = 0);
        ~Point2D();
        void setY(int);
        void setX(int); // it is possible overload the methods passed by inheritance when it is necessary doing different things
        void setXY(int, int);
        int getY(){ return y; }
        Point2D operator+(Point2D);
};

/*
    class Point2D : public Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - public

    class Point2D : protected Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - protected


    class Point2D : private Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - private
    public - private

*/

#endif