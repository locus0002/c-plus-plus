#include <iostream>
#include <cstdlib>
#include <cstring>

#include "librarySection10.h"
#define PI 3.14

using namespace std;

main(int argc, char* argv[]){

    /*
        arguments counter - argc
        arguments values - argv
    */

    for(int k=0; k< argc; k++){
        cout << argv[k] << endl; // these instructions will be executed when it be ran by console and types some parameters
    }

    char CAletters[] = {'a', 'b', 'c', 'd', '\0'};
    char *PCphrase = "this a phrase";
    char *PCAletters[] = {"one phrase", "two phrase", "three phrase", "four phrase"};

    char CAauxA[] = "a";
    char CAauxB[] = "b";

    string SauxA = "lala";
    string SauxB = "lala";

    cout << CAletters << endl;
    cout << PCphrase << endl;

    cout << (CAauxA == CAauxB) << endl; // this instruction returns cero because this is compared address and is not compared values
    cout << (&CAauxA[0] == &CAauxB[0]) << endl; // basically this instruction is the same like above

    cout << (SauxA == SauxB) << endl;

    cout << (strcmp(CAauxA, CAauxB)) << endl; // 0 -  variable are the same, 1 the first string is greater, -1 the first string is lower

    cout << PI << endl; // we can understand this like CONSTANT
    cout << "the variable a is defined in the library with value: " << a << endl;
    showHelp();
    system("pause");
}