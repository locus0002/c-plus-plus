#include <iostream>
#include <cstdlib>

using namespace std;

enum EDaysofWeek {M, T, W, TH, F, S, SU};
//YOU CAN DEFINE YOUR TYPE ENUM WITH SPECIFIC INDEX
//enum EDaysofWeekIndex {M=1, T=2, W=3, TH=4, F=5, S=6, SU=7};

string getDay(EDaysofWeek);
void sectionMenu();
void enumSection();
void referenceVariableSection();
void referenceFunctionSection();
int &swap(int &, int &);//this a reference function

/*
    reference is another name of the variable, like a nickname
    you can not change the reference variable, you can change only the value,
    it is mean
    int nr1 = 5, nr2;
    int &nickname = nr1;
    &nickname = nr2; //#######THIS IS WRONG
*/
main(){
    
    int IOption;
    sectionMenu();
    cin >> IOption;

    switch(IOption){
        case 1:
           enumSection();
           break;
        case 2:
           referenceVariableSection(); 
           break;
        case 3:
            referenceFunctionSection();
            break;
        default:
            cout << "Invalided option" << endl;
    }
    system("pause");
}

void enumSection(){
    /*
        ENUM
    */
    system("cls");

    EDaysofWeek currentDayLetter = T;
    cout << "The day is: " << currentDayLetter << endl;
    cout << "The day is: " << ( getDay(currentDayLetter) ) << endl;
}

string getDay(EDaysofWeek currentDay){
    
    switch(currentDay){
        case M:
            return "Monday";
        case T:
            return "Tuesday";
        case W:
            return "Wednesday";
        case TH:
            return "Thursday";
        case F:
            return "Friday";
        case S:
            return "Saturday";
        case SU:
            return "Sunday";
    }
}

int &swap(int &RINumA, int &RINumB){
    
    int INumAux = RINumA;

    RINumA = RINumB;
    RINumB = INumAux;
    return RINumA;
}

void referenceFunctionSection(){

    int INumA = 10,
        INumB = 20;

    int &INumC = swap(INumA, INumB);
    INumC = 100;

    cout << "The number A is: " << INumA << endl;
    cout << "The number B is: " << INumB << endl;
    cout << "The number C is: " << INumC << endl;
}

void referenceVariableSection(){
    
    string SName = "this a string";
    cout << "Show the value: " << SName << " and its address: " << &SName << endl;

    //NOW I DECLARE A REFERENCE VARIABLE
    string &RSreference = SName;
    cout << "Show the value: " << SName << " and its address: " << &SName << endl;
    cout << "Show the value: " << RSreference << " and its address: " << &RSreference << endl;

    /*
        IF WE CHANGE THE VALUE OF THE REFERENCE VARIABLE, THE VALUE WILL CHANGE IN THE VARIABLE THAT IT MAKES REFERENCE
        BECAUSE THE VARIABLE IS JUST A REFERENCE
    */

    RSreference = "Another value";
    cout << "Show the value: " << SName << " and its address: " << &SName << endl;
    cout << "Show the value: " << RSreference << " and its address: " << &RSreference << endl;
}

void sectionMenu(){
    cout << "***SECTION 8***" << endl;
    cout << "1. ENUM" << endl;
    cout << "2. Reference Variable" << endl;
    cout << "3. Reference Function" << endl;
    cout << "Please choose one option" << endl;
}