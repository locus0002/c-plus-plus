#ifndef OVERLOAD_OPERATORS
#define OVERLOAD_OPERATORS

class Integer{
    int number;
    public:
        Integer(){};
        Integer(int);
        operator int();
        int getNumber(){ return this->number; }
        int operator+=(Integer);
};

#endif