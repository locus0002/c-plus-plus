#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    cout << "Hello world :-)" << endl;
    /*
        Initialization
        address and allocation
    */
    int a=4;
    cout << a << endl;
    cout << &a << endl;
    /*
        Type of variables
    */
    short SHNum1 =12, SHNum2=90; // 2 BYTES
    int INum1 =121, INum2=190; // 4 BYTES
    float FNum1 =51.112, FNum2=16.190; // 4 BYTES
    double DNum1 =115.1112, DNum2=6.910; // 8 BYTES
    char CHTest = 'q';
    string STestt = "una cadena";
    bool flag = 0; // true or false | FALSE is always 0 TRUE is always 1
    unsigned short USHNume = 7;
    const string CSHOLA ="Esto es una constantes"; //we cannot reasign any value to a CONSTANT

    cout <<  SHNum1 << " address: " << &SHNum1 << endl;
    cout <<  SHNum2 << " address: " << &SHNum2 << endl;
    cout <<  INum1 << " address: " << &INum1 << endl;
    cout <<  INum2 << " address: " << &INum2 << endl;
    cout <<  FNum1 << " address: " << &FNum1 << endl;
    cout <<  FNum2 << " address: " << &FNum2 << endl;
    cout <<  DNum1 << " address: " << &DNum1 << endl;
    cout <<  DNum2 << " address: " << &DNum2 << endl;
    cout << CHTest << endl;
    cout << STestt << endl;
    cout << flag << endl;
    cout << CSHOLA << endl;
    cout << CSHOLA << endl;
    /*
        INPUT DATA
    */

    int INumnew;
    string SName, SLastname;

    cout<< "Type your number: " << endl;
    cin >> INumnew;
    cout << "Your number: " << INumnew << endl;
    cout << "Enter your name: " << endl;
    cin >> SName;
    cout << "Enter your last name: " << endl;
    cin >> SLastname;
    cout << "Your full name is: " << SName << " " << SLastname << endl;

    getchar();
    return 0;
}