#ifndef CLASS_DATABASE
#define CLASS_DATABASE
#include <string>
#include <fstream>
#include "section15Person.h"

using namespace std;

class DatabaseHandler{
    private:
        string nameFile;
        int currentId;
        ifstream inputDB;
        ofstream outputDB;
        void increaseId();
    public:
        DatabaseHandler();
        ~DatabaseHandler();
        void addPerson(Person *);
        void showPersons();
        void searchPerson(int id);
        void removePerson(int id);
        int getCurrentId(){ return this->currentId; }
};

#endif