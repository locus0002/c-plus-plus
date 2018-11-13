#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void menu();
void printMenu();

//funtions of homework
void dynamicMemory();
void dynamicMemory_2();
void functionNPointers();
void functionNPointers_two();
void functionNPointers_three();
void functionNPointers_four();
void functionNPointers_five();
void lottery();
void pointer();
void stringsNPointers();
void stringsNPointers_two();
void stringsNPointers_three();
void morePointers();
void morePointers_two();

//function of specific taks
int *createArray(int);
void swapTwoValues(int *, int);
void fillArrayWithValues(int *, int);
void fillArrayWithRandowmValues(int *, int);
void fillArrayWithAskedValues(int *, int);
void printArrayValues(int *, int);
void bubbleSort(int *, int, int);
void selectionSort(int *, int, int);

main(){
    menu();
    system("pause");
}

void menu(){
    int Iopc;
    printMenu();
    cin >> Iopc;
    switch(Iopc){
        case 1:
            dynamicMemory();
            break;
        case 2:
            dynamicMemory_2();
            break;
        case 3:
            functionNPointers();
            break;
        case 4:
            functionNPointers_two();
            break;
        case 5:
            functionNPointers_three();
            break;
        case 6:
            functionNPointers_four();
            break;
        case 7:
            functionNPointers_five();
            break;
        case 8:
            lottery();
            break;
        case 9:
            pointer();
            break;
        case 10:
            stringsNPointers();
            break;
        case 11:
            stringsNPointers_two();
            break;
        case 12:
            stringsNPointers_three();
            break;
        case 13:
            morePointers();
            break;
        case 14:
            morePointers_two();
            break;
        default:
            cout << "Invalid option" << endl;
    }
}

void printMenu(){
    cout << "### HOMEWORK SECTION 9 ###" << endl << endl;
    cout << "1 - Dynamic memory" << endl;
    cout << "2 - Dynamic memory Array" << endl;
    cout << "3 - Functions and pointers" << endl;
    cout << "4 - Functions and pointers 2" << endl;
    cout << "5 - Functions and pointers 3" << endl;
    cout << "6 - Functions and pointers 4 (Bubble SOrt)" << endl;
    cout << "7 - Functions and pointers 5 (Selection SOrt)" << endl;
    cout << "8 - Lottery (Bubble SOrt)" << endl;
    cout << "9 - Pointer" << endl;
    cout << "10 - Pointer N Strings" << endl;
    cout << "11 - Pointer N Strings 2" << endl;
    cout << "12 - Pointer N Strings 3" << endl;
    cout << "13 - More pointers" << endl;
    cout << "14 - More pointers two" << endl;
}
/*
    Declare two integer variables, the first statically allocated and the second dynamically
    allocated. To the statically allocated variable declare a pointer containing its address.
    To both variables assign any integer values (in case of statically allocated variable use
    its pointer). Print out in the console both values and addresses of the variables. 
*/
void dynamicMemory(){
    system("cls");
    int *PInumA = new int;
    int InumB = 10;
    int *PInumB = &InumB;

    *PInumA = 20;
    cout << "# Dynamic memory #" << endl << endl;
    cout << "Value: " << *PInumA << " Address: " << PInumA << endl;
    cout << "Value: " << *PInumB << " Address: " << PInumB << endl << endl;

    delete PInumA; //it will release the memory
}
/*
    Write a program that asks the user to input the size of the dynamic array of integers. 
    Using the pointer and its incrementation instead of array notation, fill the array with
    any integer numbers. Print all of the elements out in the console. All of the conditions
    of the loops should work with the size of the array inputted by the user.
*/
void dynamicMemory_2(){
    system("cls");
    int Isize;
    int Ivalue = 11;
    cout << "# Dynamic memory Array #" << endl << endl;
    cout << "Type the size of the array " << endl;
    cin >> Isize;
    int * PImyArray = new int[Isize];

    for(int k=0; k< Isize; k++){
        *(PImyArray + k) = Ivalue;
        Ivalue++;
        cout << "Value[" << k << "]: " << *(PImyArray + k) << endl;
    }

    delete []PImyArray;

    cout << endl;
}

/*
    Create a function "createArray" that initializes a dynamically allocated array of integers
    with the size of the array sent as the argument of the function. The function should return
    the array it creates so it can be assigned to any dynamically allocated variable in other
    functions.
*/

int *createArray(int IArraySize){
    int *IPmyArray = new int[IArraySize];
    return IPmyArray;
}

void functionNPointers(){
    system("cls");
    cout << "## FUNCTION AND POINTERS ##" << endl << endl;
    int ISize;
    cout << "Type the size of array" << endl;
    cin >> ISize;

    int *IPmyArray = createArray(ISize);
    for(int k=0; k< ISize; k++){
        *(IPmyArray + k) = k + 1;
        cout << "Value [" << k << "]: " << *(IPmyArray + k) << endl;
    }

    delete []IPmyArray;
}

/*
    Create a function "swapTwoValues" that swaps the value of one variable with the value of 
    the second variable. Both variables should be sent as the arguments. Instead of using
    references use pointers. 
*/

void swapTwoValues(int *PInumA, int InumB){
    *PInumA = InumB;
}

void functionNPointers_two(){
    system("cls");
    cout << "## FUNCTION AND POINTERS 2 ##" << endl << endl;
    int InumA = 10;
    int *IPnumA = &InumA;
    
    cout << "Before calling the function InumA: " << InumA << endl;
    swapTwoValues(IPnumA, 20);
    cout << "After calling the function InumA: " << InumA << endl;
}

/*
    Create functions "fillArrayWithValues" and "printArrayValues". Both of the functions should
    take the array and its size as the arguments. First function should fill the array with values,
    the second should print all values of the array.
*/

void fillArrayWithValues(int *PImyArray, int Isize){
    for(int k=0; k< Isize; k++){
        *(PImyArray + k) = k +1;
    }
}

void fillArrayWithRandowmValues(int *PImyArray, int Isize){
    srand(time(NULL));
    for(int k=0; k< Isize; k++){
        *(PImyArray + k) = rand();
    }
}

void fillArrayWithAskedValues(int *PImyArray, int Isize){
    for(int k=0; k< Isize; k++){
        cout << "Type the value to add" << endl;
        cin >> *(PImyArray + k);
    }
}

void printArrayValues(int *PImyArray, int Isize){
    for(int k=0; k< Isize; k++){
        cout << "Value [" << k << "]: " << *(PImyArray + k) << endl;
    }
}

void functionNPointers_three(){
    system("cls");
    cout << "## FUNCTION AND POINTERS 3 ##" << endl << endl;
    int ISize;
    cout << "Type size of array" << endl;
    cin >> ISize;
    int *PImyArray = new int[ISize];
    fillArrayWithValues(PImyArray, ISize);
    printArrayValues(PImyArray, ISize);
    delete []PImyArray;
}

/*
    Create a function "bubbleSort". The function should take three arguments, array and its 
    size and order of sorting. Depending on the third parameter the function should either sort
    the array with ascending or descending order, the default argument should be set as ascending.


    Concerning the workflow of the bubble sort algorithm please visit the websites below.
    However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
    algorithm and "printArrayValues" function to print the values of the sorted array after the
    procedure is done.
*/
void bubbleSort(int *IPmyArray, int Isize, int Iopt){
    
    int IfirstValue = *(IPmyArray);

    for(int k=0; k<Isize; k++){
        for(int j=1; j< Isize; j++){
            if((Iopt == 1 && IfirstValue < *(IPmyArray + j)) || (Iopt == 2 && IfirstValue > *(IPmyArray + j))){
                int Iaux = *(IPmyArray + j);
                swapTwoValues((IPmyArray + j), IfirstValue);
                swapTwoValues((IPmyArray + j-1), Iaux);
            }else{
                IfirstValue = *(IPmyArray + j);
            }
        }
        //--Isize;
        IfirstValue = *(IPmyArray);
    }
}

void functionNPointers_four(){
    system("cls");
    cout << "## FUNCTION AND POINTERS 4 (Bubble Sort) ##" << endl << endl;
    int Isize, Iopt;
    cout << "Type the order (1: asc, 2:desc)" << endl;
    cin >> Iopt;
    cout << "Type the size of array" << endl;
    cin >> Isize;
    int *IPmyArray = new int[Isize];
    fillArrayWithAskedValues(IPmyArray, Isize);
    cout << endl << "My array " << endl;
    printArrayValues(IPmyArray, Isize);
    bubbleSort(IPmyArray, Isize, Iopt);
    cout << endl << "My ordered array" << endl;
    printArrayValues(IPmyArray, Isize);
    delete []IPmyArray;
}

/*
    Create a function "selectionSort". The function should take three arguments, array and its
    size and order of sorting. Depending on the third parameter the function should either sort
    the array with ascending or descending) order, the default argument should be set as ascending.
    Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function
    to print the values of the sorted array after the procedure is done.

    Concerning the workflow of the selection sort algorithm please visit the websites below.
    However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
    algorithm and "printArrayValues" function to print the values of the sorted array after the
    procedure is done.
*/

void selectionSort(int *IPmyArray, int Isize, int Iopt){
    int Iposition;
    int Iaux;

    for(int k=0; k<Isize-1; k++){
        Iposition = k;
        for(int j=k+1; j<Isize; j++){
            if( (Iopt == 1 && *(IPmyArray + Iposition) > *(IPmyArray + j)) || (Iopt == 2 && *(IPmyArray + Iposition) < *(IPmyArray + j)) ){
                Iposition = j;
            }
        }
        Iaux = *(IPmyArray + k);
        swapTwoValues((IPmyArray + k), *(IPmyArray + Iposition));
        swapTwoValues((IPmyArray + Iposition), Iaux);
    }
}

void functionNPointers_five(){
    system("cls");
    cout << "## FUNCTION AND POINTERS 5 (Selection Sort) ##" << endl << endl;
    int Isize, Iopt;
    cout << "Type the order (1: asc, 2:desc)" << endl;
    cin >> Iopt;
    cout << "Type the size of array" << endl;
    cin >> Isize;
    int *IPmyArray = new int[Isize];
    fillArrayWithAskedValues(IPmyArray, Isize);
    cout << endl << "My array " << endl;
    printArrayValues(IPmyArray, Isize);
    selectionSort(IPmyArray, Isize, Iopt);
    cout << endl << "My ordered array" << endl;
    printArrayValues(IPmyArray, Isize);
    delete []IPmyArray;
}

/*
    Modify the program from "EXERCISE for Functions and pointes". Delete the "fillArrayWithValues"
    function and edit "createArray" function so the initialization of the array to sort is done
    within it. The values should no longer be inputted by the user but randomed from 0 to 1500.
    This way you can check if your sorting works fine with much more numbers inputted. For example
    try 150 numbers.
*/
void lottery(){
    system("cls");
    cout << "## Lottery (Bubble Sort) ##" << endl << endl;
    int *PAmyNums = new int[150];
    fillArrayWithRandowmValues(PAmyNums, 150);
    printArrayValues(PAmyNums,150);
    cout << "Ordered Array by Bubble Sort" << endl << endl;
    bubbleSort(PAmyNums,150,1);
    printArrayValues(PAmyNums,150);
    delete []PAmyNums;
}

/*
    Declare 5 element array of integers and a pointer to the first element of the array.
    Use the pointer and its incrementation instead of array notation, fill the array with
    any integer numbers. Print all of the elements out in the console.
*/

void pointer(){
    system("cls");
    cout << "## Pointer in Array ##" << endl << endl;
    int IAmyNums[5];
    int* PImyNum = IAmyNums;

    for(int k=0; k<5; k++){
        *(PImyNum + k) = k + 1;
        cout << "Value [" << k << "]: " << *(PImyNum + k) << endl;
    }
    delete PImyNum;
}

/*
    Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
    All of the characters from the alphabet should be stored in a 27 element array of chars and
    printing out of each of those elements should be done with the use of the for loop.
*/


void stringsNPointers(){
    system("cls");
    cout << "## Pointer N Strings ##" << endl << endl;
    char CAalphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    for(int k=0; k<27; k++){
        cout << CAalphabet[k];
    }
    cout << endl << endl;;
}

/*
    Write a program similar to the one in the exercise 1. However, this time instead of using a 27
    element array of chars use the string type. Printing out should be done the same way as in the 
    exercise 1.
*/
void stringsNPointers_two(){
    system("cls");
    cout << "## Pointer N Strings 2 ##" << endl << endl;
    string Salphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int k=0; k<27; k++){
        cout << Salphabet[k];
    }
    cout << endl << endl;
}

/*
    Write a program that asks the user to input a number of characters he would like to input. Then
    create a dynamic array of characters where the number inputted by the user stands for the size
    of the array. Next the user should input as many characters as the size of the array. The characaters
    should be stored in the dynamic array one by one. Print out in the console all of the characters 
    in the array, thus creating a string of characters. Remember to free the memory.
*/

void stringsNPointers_three(){
    system("cls");
    int Isize;
    cout << "## Pointer N Strings 3 ##" << endl << endl;
    cout << "Type the number of characters that you wish" << endl;
    cin >> Isize;
    char *PAletters = new char[Isize];
    for(int k=0; k< Isize; k++){
        cout << "Type the character [" << k << "]: " << endl;
        cin >> (PAletters + k);
    }

    for(int k=0; k< Isize; k++){
        cout << "Character [" << k << "]: " << *(PAletters + k) << endl;
    }

    cout << "Your string is: " << PAletters << endl;

    delete []PAletters;
}

/*
    Declare a variable "a" and initialize it with any value. Then create a pointer variable "p" 
    containing the address of the variable "a". Print out in the console the value and address
    of the variable "a" using both variable "a" and pointer "p".
*/

void morePointers(){
    system("cls");
    cout << "## More pointers ##" << endl << endl;
    int InumA = 123;
    int *PInum = &InumA;

    cout << "Value: " << *PInum << endl;
    cout << "Address integer variable: " << PInum << endl;
    cout << "Address integer pointer: " << &PInum << endl;
}

/*
    Edit the code from the first exercise. Create another pointer "pp" containing the address 
    of the pointer variable "p". Print out in the console the value and address of the variable
    "a" using variable "a" and pointers "p" and "pp". Furthermore, print out the value and address
    of the pointer "P" using pointers "p" and "pp".
*/

void morePointers_two(){
    system("cls");
    cout << "## More pointers 2 ##" << endl << endl;
    int InumA = 123;
    int *PInum = &InumA;
    int **PInumB = &PInum;

    cout << "Value: " << *PInum << endl;
    cout << "Address integer variable: " << PInum << endl;
    cout << "Address integer pointer: " << &PInum << endl;

    cout << "Value: " << **PInumB << endl;
    cout << "This is the address of the variable which is pointed by the pointer which is pointed by the double pointer: " << *PInumB << endl;
    cout << "This is the address of the pointer which is pointed by the double pointer: " << PInumB << endl;
    cout << "this is the address of the double pointer: " << &PInumB << endl;
}