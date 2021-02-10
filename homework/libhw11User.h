#ifndef LIB11_USER
#define LIB11_USER

#include <string>

using namespace std;

class User{
    protected:
        string name;
        string lastName;
    public:
        User();
        User(string, string);
        ~User();
        void setName(string);
        void setLastName(string);
        string getName(){ return this->name; }
        string getLastName(){ return this->lastName; }
};

#endif