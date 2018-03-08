#include <iostream>
#include <cstdlib>
using namespace std;

main(){
    
    int INum1,
        INum2,
        INum3;
    
    cout << "Type the minimun value: " << endl;
    cin >> INum1;
    cout << "Type the max value: " << endl;
    cin >> INum2;
    cout << "Type the num to validate: " << endl;
    cin >> INum3;

    cout << "Is the number " << INum3 << " contained in the interval from " << INum1 << " to " << INum2 << "? " << (INum1 <= INum3 && INum3 <= INum2) << endl;
    cout << "Is the number " << INum3 << " greater or equal to min value " << INum1 << " ? " << (INum1 <= INum3) << endl;
    cout << "Is the number " << INum3 << " lower or equal to max value " << INum2 << "? " << (INum3 <= INum2) << endl;

    cout <<  INum1 << " inchs are " << (INum1 * 2.54) << " cm" << endl;
    cout <<  INum1 << " celsius degrees are " << (INum1 + 32) << " Farenheit degrees" << endl;
    cout << "The sum of: " << INum1 << " + " << INum2 << " = " << (INum1 + INum2) << endl;
    cout << "The rest of: " << INum1 << " - " << INum2 << " = " << (INum1 - INum2) << endl;
    cout << "The multplication of: " << INum1 << " x " << INum2 << " = " << (INum1 * INum2) << endl;
    cout << "The division of: " << INum1 << " / " << INum2 << " = " << (INum1 / INum2) << endl;
    cout << "The module of: " << INum1 << " % " << INum2 << " = " << (INum1 % INum2) << endl;
    system("pause");
}