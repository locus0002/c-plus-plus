#ifndef POLY_FARM
#define POLY_FARM

#include <iostream>
using namespace std;

class Animal{

    protected:
        string voice;
    public:
        Animal();
        virtual ~Animal();
        //virtual string getVoice(); // this function look for other function in the child classes
        virtual string getVoice() = 0; // this class is abastract and it is impossible to instance of it
};


class Dog : public Animal{
    
    string signal;
    public:
        Dog();
        ~Dog();
        string getVoice(){ return this->voice + " " + this->signal; };
};

class Cat : public Animal{

    string signal;
    public:
        Cat();
        ~Cat();
        string getVoice(){ return this->voice + " " + this->signal; };
};

class Cow : public Animal{

    string signal;
    public:
        Cow();
        ~Cow();
        string getVoice(){ return this->voice + " " + this->signal; };
};

#endif