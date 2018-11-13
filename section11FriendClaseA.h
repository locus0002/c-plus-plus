#ifndef FRIEND_CLASS_A
#define FRIEND_CLASS_A

class B;//this ia adeclaration of class, because it is using in a function
class A{
    int attributeA;
    int attributeB;
    int *pointerA;
    public:
        A();
        A(int, int, int);
        A(const A&);
        ~A();
        void setPointer(int);
        void setValueinB(B &, int);
        int getAttA(){ return this->attributeA; }
        int getAttB(){ return this->attributeB; }
        int getPointA(){ return *(this->pointerA); }
};

#endif