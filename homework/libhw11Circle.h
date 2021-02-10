#ifndef LIB_HW11_CIRCLE
#define LIB_HW11_CIRCLE
#include "libhw11Shape.h"

class Circle : public Shape{
    private:
        double radio;
    public:
        Circle(double);
        ~Circle();
        void introduce();
        double calculateArea();
        double calculateCircumference();
};

#endif