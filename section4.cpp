#include <iostream>
#include <cstdlib>

using namespace std;

main(){

    int INum1,
        INum2,
        INum3,
        INum4,
        INum5;

    cout << "Type the first value: " << endl;
    cin >>  INum1;
    cout << "Type the second value: " << endl;
    cin >> INum2;
    /*
        Conditional Statment
    */
    if(INum1 > INum2){
        cout << "The num: " << INum1 << " > " << INum2 << endl;
    }else if(INum1 < INum2){
        cout << "The num: " << INum1 << " < " << INum2 << endl;
    }else {
        cout << "Other case: " << endl;
    }

    if(123453.12){
        cout << "It's different than 0(zero) " << endl;
    }

    /*
        Switch (only with character and integers, we cannot use with another kind of variable)
    */
    cout << "Type value for switch: " << endl;
    cin >>  INum3;

    switch(INum3){
        case 0:
            cout << "Intructions will be executed when the value is equal to 0 " << endl;
            break;
        case 10:
            cout << "Intructions will be executed when the value is equal to 10 " << endl;
            break;
        default:
            cout << "Intructions will be executed when the value is different from any cases " << endl;
            break;
        }
        /*
            Conditional operator
            CONDITION ? so instruction that will be executed if condition is true : if instruction that will be executed if condition is no true
        */
    INum4 = 10;
    INum5 = 20;
    string message = (INum4 > INum5) ? "INum4 > INum5" : "INum4 <= INum5";

    cout << ((INum4 > INum5 ? INum4 : INum5) + 10) << endl;

    /*
        Simple calculator
    */
    
    double DNum1, DNum2;
    char CDecision1, CDecision2;
    
    do{
        system("cls");
        cout << "**********CALCULATOR************" << endl;
        cout << "Enter the first value: " << endl;
        cin >> DNum1;
        cout << "Enter the second value: " << endl;
        cin >> DNum2;

        cout << "What Do you want to do? " << endl;
        cout << "+ - Adition " << endl;
        cout << "- - Rest " << endl;
        cout << "* - Multiplication " << endl;
        cout << "/ - Division " << endl;
        cin >> CDecision1;

        system("cls");
        switch(CDecision1) {
            case '+':
                cout << "The result is: " << (DNum1 + DNum2) << endl;
                break;
            case '-':
                cout << "The result is: " << (DNum1 - DNum2) << endl;
                break;
            case '*':
                cout << "The result is: " << (DNum1 * DNum2) << endl;
                break;
            case '/':
                if(DNum2){
                    cout << "The result is: " << (DNum1 / DNum2) << endl;
                }else{
                    cout << "We cannot divide between 0 (zero): " << endl;
                }
                break;
            default:
                cout << "Operation invalidate" << endl;
        }
        cout << "Do you want to continue (Y/y) " << endl;
        cin >> CDecision2;

    }while(CDecision2 == 'Y' || CDecision2 == 'y');

    system("pause");
}