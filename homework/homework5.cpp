#include <iostream>
#include <cstdlib>

using namespace std;

main(){

    double Dnums[4];
    double DSum = 0;
    int Iindex = 0;
    for(Iindex =0; Iindex < 4; Iindex++){
        cout << "Type the number[" << (Iindex + 1) << "]: " << endl;
        cin >> Dnums[Iindex];
        DSum += Dnums[Iindex];
    }

    cout << "The result of the sum is: " << DSum << endl;

    for(Iindex =0; Iindex < 4; Iindex++){
        cout << "The element[" << (Iindex) << "] has this address: " << &Dnums[Iindex] << endl;
    }

    double DnumsM[3][3];
    int IindexY, IindexX = 0;

    for(IindexY =0; IindexY < 3; IindexY++){
        for(IindexX =0; IindexX < 3; IindexX++){

            cout << "Type the number[" << (IindexY + 1) << "][" << (IindexX + 1) << "]: " << endl;
            cin >> DnumsM[IindexY][IindexX];
        }
    }

    cout << "***********The result*********" << endl;

    for(IindexY =0; IindexY < 3; IindexY++){
        for(IindexX =0; IindexX < 3; IindexX++){
            cout << DnumsM[IindexY][IindexX] << "   ";
        }
        cout <<endl;
    }

    system("pause");
}