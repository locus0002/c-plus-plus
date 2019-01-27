#include <iostream>
#include <fstream>
#include "section15Database.h"
#include "section15Person.h"

using namespace std;

DatabaseHandler::DatabaseHandler(){
    this->inputDB.open("database.txt");
    if(this->inputDB.is_open()){
        this->inputDB >> this->currentId;
        this->inputDB.close();
    }else{
        this->outputDB.open("database.txt");
        this->outputDB << 1 << endl;
        this->currentId = 1;
        this->outputDB.close();
    }
    cout << "Current id: " << this->currentId << endl;
}

DatabaseHandler::~DatabaseHandler(){
    cout << "Deleted database" << endl;
}

void DatabaseHandler::addPerson(Person *newPerson){
   this->outputDB.open("database.txt", ios::app);
   if(this->outputDB.is_open()){
       newPerson->setId(this->currentId);
        this->outputDB << newPerson->getId() << endl;
        this->outputDB << newPerson->getName() << endl;
        this->outputDB << newPerson->getSurname() << endl;
        this->outputDB << newPerson->getTelephone() << endl;
        this->outputDB << newPerson->getAge() << endl;
        this->outputDB.close();
        increaseId();
   }
}

void DatabaseHandler::increaseId(){
    fstream currentFile("database.txt", ios::in | ios::out);
    this->currentId++;
    currentFile.seekp(0);
    currentFile << this->currentId << endl;;
    currentFile.close();
}

void DatabaseHandler::showPersons(){
    
    this->inputDB.open("database.txt");

    if(this->inputDB.is_open()){
        
        int tempId, age;
        string name, surname, telephone;
        this->inputDB >> tempId;
        do{
            this->inputDB >> tempId;
            this->inputDB >> name;
            this->inputDB >> surname;
            this->inputDB >> telephone;
            this->inputDB >> age;
            cout << "ID: " << tempId << endl;
            cout << "Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Telephone: " << telephone << endl;
            cout << "Age: " << age << endl;
        }while(!this->inputDB.eof());
        this->inputDB.close();
    }else{
        cout << "The file was not opened correctly" << endl;
    }
}

void DatabaseHandler::searchPerson(int searchedId){
    this->inputDB.open("database.txt");

    if(this->inputDB.is_open()){
        
        int tempId, age;
        string name, surname, telephone;
        this->inputDB >> tempId;
        do{
            this->inputDB >> tempId;
            this->inputDB >> name;
            this->inputDB >> surname;
            this->inputDB >> telephone;
            this->inputDB >> age;
            if(tempId == searchedId){
                cout << "ID: " << tempId << endl;
                cout << "Name: " << name << endl;
                cout << "Surname: " << surname << endl;
                cout << "Telephone: " << telephone << endl;
                cout << "Age: " << age << endl;
            }
        }while(!this->inputDB.eof());
        this->inputDB.close();
    }else{
        cout << "The file was not opened correctly" << endl;
    }
}

void DatabaseHandler::removePerson(int removedId){
    this->inputDB.open("database.txt");
    ofstream tempFile("temp.txt");
    if(this->inputDB.is_open()){
        
        int tempId, age;
        string name, surname, telephone;
        this->inputDB >> tempId;
        tempFile << tempId << endl;;
        do{
            this->inputDB >> tempId;
            this->inputDB >> name;
            this->inputDB >> surname;
            this->inputDB >> telephone;
            this->inputDB >> age;
            if(tempId != removedId){
                tempFile << tempId << endl;
                tempFile << name << endl;
                tempFile << surname << endl;
                tempFile << telephone << endl;
                tempFile << age << endl;
            }
        }while(!this->inputDB.eof());
        this->inputDB.close();
        tempFile.close();
        remove("database.txt");
        rename("temp.txt","database.txt");
    }else{
        cout << "The file was not opened correctly" << endl;
    }
}