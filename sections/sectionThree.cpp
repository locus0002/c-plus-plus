#include <iostream>
#include <cstdlib>
using namespace std;

main(){
    /*
        Operators
    */
    int INum_a=10;
    int INum_b=5;

    cout << endl << "*******Operators*******" << endl;
    cout << INum_a + INum_b << endl;
    cout << INum_a - INum_b << endl;
    cout << INum_a / INum_b << endl;
    cout << INum_a * INum_b << endl;
    cout << INum_a % INum_b << endl;

    //shorter anottation
    INum_a += 2;
    cout << endl << "*******Shorter annotation*******" << endl;
    cout << INum_a << endl; // *=, /=, +=, -=,

    //Incremetantions
    cout << endl << "*******Incrementation*******" << endl;
    cout << INum_a++ << endl; //PRE
    cout << INum_a << endl;

    cout << ++INum_a << endl; //POST
    cout << INum_a << endl;

    /*
        Relation Operator
    */
    cout << endl << "*******Relation Operator*******" << endl;
    cout << (INum_a == INum_b) << endl; // true (1)
    cout << (INum_a != INum_b) << endl; // true (1)
    cout << (INum_a > INum_b) << endl; // true (1)
    cout << (INum_a < INum_b) << endl; // true (1)
    cout << (INum_a >= INum_b) << endl; // true (1)
    cout << (INum_a <= INum_b) << endl; // true (1)

    /*
        LOGICAL OPERATORS
    */
    // AND OPERATOR
    cout << endl << "*******LOGICAL OPERATOR (AND)*******" << endl;
    cout << (7 > 5 && 5 != 10) << endl;
    cout << (5 > 7 && 5 != 10) << endl;

    // OR OPERATOR
    cout << endl << "*******LOGICAL OPERATOR (OR)*******" << endl;
    cout << (7 > 5 || 5 != 10) << endl;
    cout << (5 > 7 || 5 != 10) << endl;

    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR
        0 0 0
        0 1 1
        1 0 1
        1 1 0
        Bitwise left shift <<
        Bitwise right shift >>
    */
    cout << endl << "*******BITWISE*******" << endl;
    cout << (10 & 2) << endl;
    cout << (10 | 2) << endl;
    cout << (~10) << endl;
    cout << (10 << 3) << endl;
    cout << (10 >> 1) << endl;

    system("pause");
}