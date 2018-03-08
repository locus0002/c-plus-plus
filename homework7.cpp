#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

void menuHomeworks();
void addtion(int, int);
void substraction(int, int);
void multiplication(int, int);
void division(int, int);
void exponentiation(int, int);
void menuCalculator();
void menuMinMax();
void getMin();
void getMax();
double* fillArray();
bool isValid();
void calculator();
void maxmin();
void additionParameters(int, int);
void additionParameters(int, int, int);
void additionParameters(int, int, int, int);
void menuOverloads();
void overloads();

main(){

    int IOption;
    char COption;

    do{
        system("cls");
        menuHomeworks();
        cin >> IOption;
        if(isValid()){
            switch(IOption){
                case 1:
                    calculator();
                    break;
                case 2:
                    maxmin();
                    break;
                case 3:
                    overloads();
                    break;
                default:
                    cout << "Invalided option" << endl;
            }
        }
        do{
            cout << "Do you wanna continue (Y/N): " << endl;
            cin >> COption;
            isValid();

        }while(COption != 'Y' && COption != 'y' && COption != 'N' && COption != 'n' );

    }while(COption == 'Y' || COption == 'y');
    system("pause");
}

void overloads(){

    int ISize;
    do{
        system("cls");
        menuOverloads();
        cin >> ISize;
        isValid();
    }while(ISize != 2 && ISize != 3 && ISize != 4);
    
    int INumbers[ISize], IResult = 0;

    for(int i=0; i< ISize; i++){
        cout << "Please type the number(" << (i + 1) << "): " << endl;
        cin >> INumbers[i];
    }

    switch(ISize){
        case 2:
            additionParameters(INumbers[0], INumbers[1]);
            break;
        case 3:
            additionParameters(INumbers[0], INumbers[1], INumbers[2]);
            break;
        case 4:
            additionParameters(INumbers[0], INumbers[1], INumbers[2], INumbers[3]);
            break;
    }
}

void menuOverloads(){

    system("cls");
    cout << "*********OVERLOADS***********" << endl;
    cout << "Type the quantity of numbers that you wish to type [2-4]: " << endl;
}

void additionParameters(int INumberA, int INumberB){

    int IResult = INumberA + INumberB;
    cout << "Your result is: " << IResult << endl;
}
void additionParameters(int INumberA, int INumberB, int INumberC){

    int IResult = INumberA + INumberB + INumberC;
    cout << "Your result is: " << IResult << endl;
}
void additionParameters(int INumberA, int INumberB, int INumberC, int INumberD){
    
    int IResult = INumberA + INumberB + INumberC + INumberD;
    cout << "Your result is: " << IResult << endl;
}

void calculator(){
    char COption;
    int INumberA, INumberB;

    do{
        system("cls");
        cout << "*********CALCULATOR*********" << endl;
        cout << "Please type the first number: " << endl;
        cin >> INumberA;
        if(isValid()){
            cout << "Please type the second number: " << endl;
            cin >> INumberB;
            if(isValid()){
                menuCalculator();
                cin >> COption;
                isValid();
            }
        }
    }while(COption != '+' && COption != '-' && COption != '*' && COption != '/' && COption != '^');
    switch(COption){
        case '+':
            addtion(INumberA, INumberB);
            break;
        case '-':
            substraction(INumberA, INumberB);
            break;
        case '*':
            multiplication(INumberA, INumberB);
            break;
        case '/':
            division(INumberA, INumberB);
            break;
        case '^':
            exponentiation(INumberA, INumberB);
            break;
    }
    
}
void maxmin(){

    system("cls");
    int IOption;
    do{
        system("cls");
        menuMinMax();
        cin >> IOption;

    }while(IOption != 1 && IOption != 2);
    switch(IOption){
        case 1:
            getMin();
            break;
        case 2:
            getMax();
            break;
    }
}


void menuHomeworks(){
    cout << "*********HOMEWORKS*********" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Max and min" << endl;
    cout << "3. Overloads" << endl;
    cout << "Please type your choosing" << endl;
}

void menuCalculator(){

    cout << "Plesae type the appropriate operator " << endl;
    cout << "(+) Addtion " << endl;
    cout << "(-) Substraction " << endl;
    cout << "(*) Multiplication " << endl;
    cout << "(/) Division " << endl;
    cout << "(^) Exponentiation " << endl;
}

void addtion(int INumberA, int INumberB){
    float FResult = INumberA + INumberB;
    cout << "The result of the addition operation is: " << FResult << endl;
}

void substraction(int INumberA, int INumberB){
    float FResult = INumberA - INumberB;
    cout << "The result of the SUBSTRACTION operation is: " << FResult << endl;
}

void multiplication(int INumberA, int INumberB){
    float FResult = INumberA * INumberB;
    cout << "The result of the MULTPLICATION operation is: " << FResult << endl;
}

void division(int INumberA, int INumberB){
    if(INumberB == 0){
        cout << "We can't divided between 0 (zero): " << endl;
    }else{
        float FResult = INumberA / INumberB;
        cout << "The result of the DIVISION operation is: " << FResult << endl;
    }
}

void exponentiation(int INumberA, int INumberB){

    if(INumberB == 0){
        cout << "The result of the EXPONENTIATION operation is: 1" << endl;
    }else if(INumberB == 1){
        cout << "The result of the EXPONENTIATION operation is: " << INumberA << endl;
    }else{
        int IAux = 2;
        float FResult;
        do{
            FResult = INumberA * INumberA;
        }while(IAux != INumberB);
        
        cout << "The result of the EXPONENTIATION operation is: " << FResult << endl;
    }
}

void menuMinMax(){
    
    cout << "*******MAX AND MINIMUM*******" << endl;
    cout << "Please select the operation that you wish to do" << endl;
    cout << "1. Min Value" << endl;
    cout << "2. Max Value" << endl;
}
double* fillArray(){
    
    double DMyNumbers[5];
    cout << "*******MAX AND MINIMUM*******" << endl;
    cout << "Please type 5 numbers" << endl;
    
    for(int i=0; i< 5; i++){
        //do{
            cout << "Please type the number(" << (i + 1) << "): " << endl;
            cin >> DMyNumbers[i];
        //}while(isValid());
    }
    return DMyNumbers;
}
void getMin(){

    double DMyNumbers[5];
    cout << "Please type 5 numbers" << endl;
    
    for(int i=0; i< 5; i++){
            cout << "Please type the number(" << (i + 1) << "): " << endl;
            cin >> DMyNumbers[i];
    }
    double DMinValue = DMyNumbers[0];
    for(int IIndex = 1; IIndex < 5; IIndex++){
        if(DMinValue > DMyNumbers[IIndex]){
            DMinValue = DMyNumbers[IIndex];
        }
    }

    cout << "The minimum value is: " << DMinValue << endl;
}
void getMax(){

    double DMyNumbers[5];
    cout << "Please type 5 numbers" << endl;
    
    for(int i=0; i< 5; i++){
            cout << "Please type the number(" << (i + 1) << "): " << endl;
            cin >> DMyNumbers[i];
    }
    double DMaxValue = DMyNumbers[0];
    for(int IIndex = 1; IIndex < 5; IIndex++){
        if(DMaxValue < DMyNumbers[IIndex]){
            DMaxValue = DMyNumbers[IIndex];
        }
    }

    cout << "The max value is: " << DMaxValue << endl;
}

bool isValid(){

    if(cin.rdstate()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalided value" << endl;
        return false;
    }

    return true;
}