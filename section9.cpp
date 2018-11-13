#include <iostream>
#include <cstdlib>

using namespace std;

void pointers();
void constPointers();
void constPointers2();
void arrayPointers();
void dynamicMemory();
void stringNpointers();
void pointersNfunctions(int &, int);
void pointersNfunctions2(int *, int); // this firm would be the same like void pointersNfunctions2(int [], int); because an array is a pointer
void pointersNfunctionsArray(int *, int);
int pointersNfunctions3(int *, int);
int* pointersNfunctions4(int *, int);
void sizesNpointers();
void castVariables();
void importantNotes();

main(){

    pointers();
    constPointers();
    constPointers2();
    arrayPointers();
    //dynamicMemory();
    stringNpointers();
    int InumA = 123;
    int *PInumA = &InumA;
    cout << "InumA: " << InumA << endl;
    //pointersNfunctions(InumA, 2); //in this function it is sending the variable by reference
    //pointersNfunctions2(PInumA, 2); //in this function it is sending a pointer
    //int InumB = pointersNfunctions3(PInumA, 2); //here it is receiving the value which is pointed by our pointer
    //int *InumB = pointersNfunctions4(PInumA, 2); //here it is receiving a pointer which is pointing the variable that it was sending previously
    /*cout << "InumA: " << InumA << endl;
    cout << "InumB: " << *InumB << endl;
    *InumB += 10;
    cout << endl;
    cout << "InumA: " << InumA << endl;
    cout << "InumB: " << *InumB << endl;*/
    /*int IAarray[10];
    for(int k=0; k<10; k++){
        IAarray[k] = k+1;
        cout << "IAarray[" << k << "] = " << IAarray[k] << endl;
    }
    cout << endl;
    pointersNfunctionsArray(IAarray, 2);
    for(int k=0; k<10; k++){
        cout << "IAarray[" << k << "] = " << IAarray[k] << endl;
    }
    sizesNpointers();*/
    castVariables();
    importantNotes();
    system("pause");
}

void importantNotes(){
    int *PInumA = new int;
    *PInumA = 50;
    cout << "Address of my pointer PInumA: " << PInumA << endl;
    cout << "Value that my pointer PInumA is pointed: " << *PInumA << endl;
    //delete PInumA;
    cout << "Address of my pointer PInumA: " << PInumA << endl;
    *PInumA = 20;
    cout << "Address of my pointer PInumA: " << PInumA << endl;
    cout << "Value that my pointer PInumA is pointed: " << *PInumA << endl;
    
    char ACstring[] = "hamburgers";
    char *PCletter = ACstring;
    cout << PCletter << endl;
    cout << *(PCletter + 1) << endl;
    cout << *(PCletter + 2) << endl;
    cout << *(PCletter + 3) << endl;
    cout << ACstring << endl;
    cout << ACstring[1] << endl;

    int AInumbers[5];
    int *PInum = AInumbers;

    AInumbers[0] = 1;
    AInumbers[1] = 11;
    AInumbers[2] = 111;
    AInumbers[3] = 1111;
    AInumbers[4] = 11111;

    cout << AInumbers << endl;
    cout << PInum << endl;

    cout << AInumbers[1] << endl;
    cout << *(PInum + 1) << endl;

};

void castVariables(){
    double DnumA = 5.6;
    int InumA = 5;
    int InumB = 7;

    cout << InumA / InumB << endl;
    cout << (double) InumA / InumB << endl; // here it cast at least one variable because it requires not to lose precision 

    cout << (int) DnumA << endl; // this way is as known as explicit way C
    cout << static_cast<int> (DnumA) << endl; // this way is as known as explicit way C++

    int InumC = 123456789;
    short SnumA = InumC; 
    cout << InumC << endl;
    cout << SnumA << endl; // this way is as known as implicit way C

}

void sizesNpointers(){
    int InumA = 12;
    float FnumA = 12;
    int *PInumA = &InumA;
    int IAarray[10];
    int *PAIarrayB = IAarray;

    //here it will get the size in bytes
    cout << "int: " << sizeof(InumA) << endl;
    cout << "float: " << sizeof(FnumA) << endl;
    cout << "int pointer: " << sizeof(PInumA) << endl;
    cout << "array: " << sizeof(IAarray) << endl;
    cout << "array pointer: " << sizeof(PAIarrayB) << endl;
    //so if it whises knew the size of one array it can do this
    cout << "array: " << sizeof(IAarray)/sizeof(IAarray[0]) << endl;
}

void pointersNfunctions(int & variableA, int amount){
    variableA += amount;
}

void pointersNfunctions2(int * variableA, int amount){
    cout << "*variableA: " << variableA << endl;
    *variableA = *variableA * amount;
}

void pointersNfunctionsArray(int * IAarrayR, int amount){
    for(int k=0; k<10; k++){
        *(IAarrayR + k) = *(IAarrayR + k) * amount;
    }
}

int pointersNfunctions3(int * variableA, int amount){
    cout << "*variableA: " << variableA << endl;
    *variableA = *variableA * amount;
    return *variableA;
}

int * pointersNfunctions4(int * variableA, int amount){
    cout << "*variableA: " << variableA << endl;
    *variableA = *variableA * amount;
    return variableA;
}

void pointersNfunctions2(int *, int);

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

    cout << "INum_pp: " << INum_pp << endl; // in this case i'm pointing to a pointer, so i get the value which is the address of the pointer
    cout << "*INum_pp: " << *INum_pp << endl; // here i get the value of the variable that i'm pointing so in this case i will get the address of the variable of the pointer which i are pointing
    cout << "**INum_pp: " << **INum_pp << endl; // here i get the value of the variable that i'm pointing so in this case i will get the value of the variable of the pointer which i are pointing
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

void dynamicMemory(){
    cout << "#########DYNAMIC MEMORY##########" << endl;
    int *p = new int; // I am assigning to my pointer an address
    int size = 0;
    //so when it need to define an array but it does not the size it can do the next
    cout << "How many number do you wanna store?" << endl;
    cin >> size;
    int *mypointer = new (nothrow) int [size]; // the key word nothrow will catch any error when the program does not support the size
    cout << "mypointer: " << mypointer << endl;
    if(mypointer != NULL){
        for(int i=0; i< size; i++){
            cout << "Enter the value: " << endl;
            cin >> mypointer[i];
        }
        for(int i=0; i< size; i++){
            cout << "value: " << mypointer[i] << endl;
        }
    }else{
        cout << "The size is not supported" << endl;
    }
    cout << "mypointer: " << mypointer << endl;
    delete []mypointer; //here it releases the space that was reserved;
    cout << "mypointer: " << mypointer << endl;
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

void stringNpointers(){
    string SPhrase = "thisisnew";
    cout << SPhrase << endl;
    char CPhrase[] = "thisis old";
    const char *PSPhrase = SPhrase.c_str(); // this function returns the string in a [const char *]
    cout << PSPhrase << endl;
    cout << CPhrase << endl;

    char *pString = "thi another string";
    //pString[0] = '1'; // WE CAN NOT DO THIS
    cout << pString << endl;
    char aString[] = "this another string";
    aString[0] = '8'; // WE CAN MODIFY THE STRING
    cout << aString << endl;

    char * const dynamic_array = new char[100];
    dynamic_array[0] = 'R';
    dynamic_array[1] = 'D';
    dynamic_array[2] = 'C';
    //dynamic_array[3] = '\0'; //if it does not put this character the result will be strange but it includes this character the string will be shown nornamlly
    cout << dynamic_array << endl;
    delete dynamic_array;

    string array_string[5] = "asdasdasdasdasdasd3423"; // if it declares this, all positions in the array will have the same value
    array_string[0] = "123jnk";
    cout << array_string[0] << endl;
    cout << array_string[1] << endl;
    cout << array_string[2] << endl;
    cout << array_string[3] << endl;
}