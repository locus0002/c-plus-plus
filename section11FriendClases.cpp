#include <iostream>
#include <cstdlib>
#include "section11FriendClaseA.h"
#include "section11FriendClaseB.h"

using namespace std;

main(){
    A classA;
    B classB;

    A testA(12,12,12);
    A testB = testA;//int this line, the CONTRUCTOR A(const A&) IS BEING USING

    testB.setPointer(14);

    classA.setValueinB(classB, 123);

    cout << "The value of B: " << classB.getAttribute() << endl << endl;

    cout << "testA.attA: " << testA.getAttA() << endl;
    cout << "testA.attB: " << testA.getAttB() << endl;
    cout << "testA.attP: " << testA.getPointA() << endl << endl;

    cout << "testB.attA: " << testB.getAttA() << endl;
    cout << "testB.attB: " << testB.getAttB() << endl;
    cout << "testB.attP: " << testB.getPointA() << endl;
    system("pause");
}