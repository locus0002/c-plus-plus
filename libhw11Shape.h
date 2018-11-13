#ifndef LIB_HW11_SHAPE
#define LIB_HW11_SHAPE

class Shape{
    public:
        Shape();
        virtual ~Shape();
        virtual void introduce() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateCircumference() = 0;
};

#endif