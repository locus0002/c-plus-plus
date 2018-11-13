#include <iostream>
#include <cstdlib>
#include "section11Person.h"

using namespace std;

void test(){
    PersonalData persons[5];
}

void dynamicTest(){
    PersonalData *persons = new PersonalData[5];// this was created dynamically, so it sould release MEMORY
    delete []persons;
}

void friendSetName(PersonalData &, string);

main(){
    PersonalData PDpersonA;
    PersonalData PDpersonB;
    PersonalData PDpersonC;
    PersonalData Apersons[10];

    PDpersonA.setAge(28);
    PDpersonB.setAge(25);
    PDpersonA.setName("number one");
    cout << PDpersonA.getAge() << endl;
    cout << PDpersonA.getName() << endl;

    cout << PDpersonB.getAge() << endl;
    cout << PDpersonB.getName() << endl;

    cout << PDpersonC.getAge() << endl;
    cout << PDpersonC.getName() << endl;
    cout << Apersons[5].getId() << endl;
    test();//in this function we can observe that both Constructor and distrcutor were called because these objects are alive only inside of that function
    dynamicTest();
    cout << "it is not necessary create an object to access static funtions" << endl << "Counter: " << PersonalData::getCounter() << endl;
    /*
        when it is necessary creating a object which will be static, the class has to have some properties if the methods will be accessible 
    */
    const PersonalData personConst;
    cout << "Age: " << personConst.getAge() << endl;
    PersonalData personT;
    cout << "Name: " << personT.getName() << endl;
    friendSetName(personT, "new name edited");
    cout << "Name: " << personT.getName() << endl;
    system("pause");
}

/*
    Sometimes it neccessary to access the attribute of one object which is private and it does not
    have some public method which lets to change the value. In this case friend function are
    usefull because it lets to access the private attribute
*/

void friendSetName(PersonalData & currentPerson, string newName){
    currentPerson.name = newName;
}