#include <iostream>
#include <cstdlib>
#include "section11PolyAnimal.h"

using namespace std;

/*
    Polymorphism
    Virtual functions
    Abstract class
    Virtual distructor
*/
void test();
void polymorphimsFunction(Animal *);
void virtualDistructorExample();
main(){
    //test();
    virtualDistructorExample();
    system("pause");
}

void test(){
    
    Dog dog;
    Cat cat;
    Cow cow;

    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;

    polymorphimsFunction(&dog);
    polymorphimsFunction(&cat);
    polymorphimsFunction(&cow);
}

/*
    This function internally is recognizing that the received animal can be dog, cat or cow
    at the samte time, the function getVoice belong to the Father class, because of that,
    the return of the function will not have the attribute signal
*/
void polymorphimsFunction(Animal *animalAux){
    cout << animalAux->getVoice() << endl;
}

/*
    When an abstract class is used, it is necessary create its distrcutor virtual
    because when a pointer of sub class is created, it is necessary call both distructor
    Father class and sub class
*/
void virtualDistructorExample(){
    Dog *myDog = new Dog;
    delete myDog;
}