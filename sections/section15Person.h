#ifndef CLASS_PERSON
#define CLASS_PERSON

#include <string>
using namespace std;

class Person{
    private:
        int id;
        string name;
        string surname;
        short age;
        string telephone;
    public:
        Person();
        Person(string, string, short, string);
        ~Person();
        void setName(string);
        string getName(){ return this->name; }
        void setSurname(string);
        string getSurname(){ return this->surname; }
        void setAge(short);
        short getAge(){ return this->age; }
        void setTelephone(string);
        string getTelephone(){ return this->telephone; }
        void setId(int);
        int getId(){ return this->id; }
};

#endif