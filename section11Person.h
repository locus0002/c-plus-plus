#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>

using namespace std;

class PersonalData{
    private:
        int ID;
        static int counter; // this property will not instance per each object
        short age;
        string name;
        int *PIpointer;
    public:
        PersonalData(); // this is a constrcutor
        PersonalData(short, string); // this an overload of our constructor
        ~PersonalData(); // this is the distructor
        void setAge(short);
        void setName(string);
        static int getCounter(){ return counter; } // we can access to static properties through static functions or methods
        int getId(){ return this->ID; }
        short getAge() const { return this->age; } // when the word CONST is after the name of method/function. this is indicated that the function will be accessible when an object is created like CONST
        string getName(){ return this->name; }
        friend void friendSetName(PersonalData &, string);
};

#endif