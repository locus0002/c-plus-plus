#ifndef LIB_HW11_RECTANGLE
#define LIB_HW11_RECTANGLE
#include "libhw11Shape.h"

class Rectangle: public Shape{
    
    private:
        double width;
        double lenght;

    public:
        Rectangle(double, double);
        ~Rectangle();
        void introduce();
        double calculateArea();
        double calculateCircumference();
};

#endif