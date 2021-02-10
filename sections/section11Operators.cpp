#include <iostream>
#include <cstdlib>
#include "section11ClassOperators.h"

using namespace std;

main(){
    Integer numberA(50);
    /*
        in the next line, the variable numberB was assigned with the value of Integer numberA, it is possible
        when there is an overload operator of int
    */
    int numberB = numberA;

    cout << "Number A: " << numberA << endl;
    cout << "Number B: " << numberB << endl;
    
    cout << "(int) numberA: " << (int) numberA << endl;
    cout << "numberA: " << numberA << endl;
    
    /*
        Others operators can be overload, for example +=
    */
    numberA += numberB;
    cout << numberA << endl;
    system("pause");
}