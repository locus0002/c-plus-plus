#ifndef FRIEND_CLASS_B
#define FRIEND_CLASS_B

class B{
    
    friend class A;
    int attributeB;

    public:
        void setValueinB(int);
        int getAttribute();
};

#endif