#include <iostream>
#include <cstdlib>
#include <conio.h>
#include "section15Person.h"
#include "section15Database.h"

using namespace std;

void menu();

main(){
    DatabaseHandler store;
    // Person newPerson("Vladimir", "Aca", 8, "5487-7854-452");
    // store.addPerson(&newPerson);
    store.showPersons();
    store.removePerson(4);
    store.removePerson(5);
    store.removePerson(6);
    store.removePerson(7);
    store.removePerson(8);
    store.removePerson(9);
    cout << endl << endl;
    //store.searchPerson(5);
    char opt;
    do{
        menu();
        opt = getch();
    }while(opt != 27);
    system("pause");
}

void menu(){
    cout << "MENU" << endl << endl;
    cout << "1. Add Person" << endl;
    cout << "2. Show All person" << endl;
}