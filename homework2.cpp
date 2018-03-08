#include <iostream>
#include <cstdlib>
using namespace std;

main(){
    string SWord1, SWord2, SWord3;
    cout << "Type the first word: " << endl;
    cin >> SWord1;
    cout << "Type the second word: " << endl;
    cin >> SWord2;
    cout << "Type the third word: " << endl;
    cin >> SWord3;

    cout << "Your words are: " << SWord1 << " " << SWord2 << " " << SWord3 << endl;

    int INum1, INum2, IAux;
    cout << "Type the number a:" << endl;
    cin >> INum1;
    cout << "Type the number b:" << endl;
    cin >> INum2;
    IAux = INum1;
    INum1 = INum2;
    INum2 = IAux;
    cout << "Your number a: " << INum1 << " your number b: " << INum2 << endl;;

    system("pause");
}