#include <iostream>
#include <cstdlib>

using namespace std;

void pointers();
void constPointers();
void constPointers2();
void arrayPointers();

main(){

    pointers();
    constPointers();
    constPointers2();
    arrayPointers();
    system("pause");
}

void pointers(){

    int INum = 20;
    int *INum_p= &INum;

    cout << "######## POINTERS ###########" << endl;
    cout << "INum: " << INum << endl;
    cout << "&INum: " << &INum << endl;
    cout << "INum_p: " << INum_p << endl; //when i print a pointer variable, [var_name] we only get the address of the variable that it is pointed
    cout << "*INum_p: " << *INum_p << endl; //when i print a pointer variable, [*var_name] we get the value of the variable that it is pointed
    cout << "&INum_p: " << &INum_p << endl << endl; //when i print a pointer variable, [&var_name] we get the address of itself

    /*
        We can declare double pointers like this
    */
    int **INum_pp = &INum_p;

    cout << "INum_pp: " << INum_pp << endl; 
    cout << "*INum_pp: " << *INum_pp << endl; 
    cout << "**INum_pp: " << **INum_pp << endl; 
    cout << "&INum_pp: " << &INum_pp << endl << endl << endl; 
}
void constPointers(){

    int INum = 20;
    int INumAux = 50;
    int * const INum_p= &INum; //this pointer always point to the same variable but it can change the value but it can not change the address
    
    *INum_p = 30;
    //*INum_p = &INumAux; // we CAN NOT DO THAT
    cout << "######## CONST POINTERS ########" << endl;
    cout << "INum: " << INum << endl;
    cout << "*INum_p: " << *INum_p << endl << endl << endl;
}
void constPointers2(){

    int INum = 20;
    int INumAux = 50;
    const int * INum_p= &INum; //this pointer always point to the same variable and it can not change the address neither the value
    
    //*INum_p = 30; // we CAN NOT DO THAT
    //*INum_p = &INumAux; // we CAN NOT DO THAT
    cout << "######## CONST POINTERS 2 ########" << endl;
    cout << "INum: " << INum << endl;
    cout << "*INum_p: " << *INum_p << endl << endl;
}

void arrayPointers(){
    
    int IArrayNums[3];
    
    IArrayNums[0] = 0;
    IArrayNums[1] = 20;
    IArrayNums[2] = 30;
    int *IPointer = &IArrayNums[0];

    /*
        In both cases the address is the same, this is because the this variable [IArrayNums] is a pointer 
    */
    cout << "###### POINTER ARRAY ######" << endl;
    cout << "array address: " << IArrayNums << endl;
    cout << "pointer pointed address: " << IPointer << endl << endl;

    cout << "IArrayNums[0]: " << &IArrayNums[0] << endl; //in this case i get the address of that element
    cout << "IArrayNums[1]: " << &IArrayNums[1] << endl;
    cout << "IArrayNums[2]: " << &IArrayNums[2] << endl << endl;

    cout << "IArrayNums: " << IArrayNums << endl; //in this case i get the address, because a pointer storages the address
    cout << "IArrayNums + 1: " << IArrayNums + 1 << endl; //here i change the address, byte by byte because our array is INT
    cout << "IArrayNums + 2: " << IArrayNums + 2 << endl << endl;

    cout << "*IArrayNums: " << *IArrayNums << endl; //in this case i get the value, because that is a pointer
    cout << "*IArrayNums + 1: " << *(IArrayNums + 1) << endl; //here i change the address and then i get the value of that address
    cout << "*IArrayNums + 2: " << *(IArrayNums + 2) << endl << endl;

    cout << "IArrayNums[0]: " << IArrayNums[0] << endl; //here i get the value of tat element
    cout << "IArrayNums[1]: " << IArrayNums[1] << endl;
    cout << "IArrayNums[2]: " << IArrayNums[2] << endl << endl;

    cout << "IPointer: " << *IPointer << endl; // operator and pointers
    cout << "IPointer: " << ++*IPointer << endl;
    cout << "IPointer: " << *++IPointer << endl;
    cout << "IPointer: " << *IPointer++ << endl;
    cout << "IPointer: " << *IPointer << endl << endl;
}