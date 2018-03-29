#include <iostream>
#include <cstdlib>

using namespace std;

void menuHomework();
void referenceVariable();
void referenceFunction();
void referenceFunctionS();
void setValue(int &);
void checkIfTheSame(int &, int &);

main(){

    int IOption;
    menuHomework();
    cin >> IOption;

    switch(IOption){
        case 1:
            referenceVariable();
            break;
        case 2:
            referenceFunction();
            break;
        case 3:
            referenceFunctionS();
            break;
        default:
            cout << "Option invalided" << endl;
    }

    system("pause");
}

void menuHomework(){

    cout << "Menu" << endl;
    cout << "1. Reference Variable" << endl;
    cout << "2. Reference Function" << endl;
    cout << "3. Reference Function 2" << endl;
    cout << "Choose one option" << endl;
}

void checkIfTheSame(int &IParamA, int &IParamB){

    if(IParamA == IParamB){
        cout << "The variable received have the same values A: " << IParamA << " B: " << IParamB << endl;
    }

    if(IParamA == IParamB && &IParamA == &IParamB){
        cout << "The variable received have the same values A: " << IParamA << " B: " << IParamB << " and the same address address A: " << &IParamA << " address B: " << &IParamB <<  endl;
    }

    if(IParamA == IParamB && &IParamA != &IParamB){
        cout << "The variable received have the same values A: " << IParamA << " B: " << IParamB << " and different address address A: " << &IParamA << " address B: " << &IParamB <<  endl;
    }

    if(IParamA != IParamB && &IParamA != &IParamB){
        cout << "The variable received are completly different values A: " << IParamA << " B: " << IParamB << " address A: " << &IParamA << " address B: " << &IParamB <<  endl;
    }
}

void referenceFunctionS(){
    system("cls");

    int INumA = 2,
        INumB = 3,
        INumC = 2;

    int &INumD = INumA;

    checkIfTheSame(INumA, INumB);
    checkIfTheSame(INumA, INumC);
    checkIfTheSame(INumA, INumD);
    checkIfTheSame(INumB, INumC);
    checkIfTheSame(INumB, INumD);
    checkIfTheSame(INumC, INumD);
}

void referenceFunction(){
    
    system("cls");
    
    int INumA = 9;
    
    setValue(INumA);
    cout << "The value is: " << INumA << endl;

}

void setValue(int &IParam){
    
    int IInput;
    
    cout << "Type the new value" << endl;
    cin >> IInput;

    IParam = IInput;

}

void referenceVariable(){
    
    system("cls");

    string SName = "Cassandra";
    string &RSNameA = SName,
           &RSNameB = SName, 
           &RSNameC = SName,
           &RSNameD = SName;

    cout << "Varriable SName: " << SName << " address: " << &SName << endl;
    cout << "Varriable RSNameA: " << RSNameA << " address: " << &RSNameA << endl;
    cout << "Varriable RSNameB: " << RSNameB << " address: " << &RSNameB << endl;
    cout << "Varriable RSNameC: " << RSNameC << " address: " << &RSNameC << endl;
    cout << "Varriable RSNameD: " << RSNameD << " address: " << &RSNameD << endl;
}