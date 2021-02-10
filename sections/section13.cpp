#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Exceptions
*/

class DivisionByCeroException{
    public:
        void getErrorMessage(){ cout << "Dividing by zero is not allowed" << endl; }
};

void exceptionOne();
void exceptionTwo();

void exceptionThree();
void exceptionFour() throw(DivisionByCeroException); //this annotation is just information which means inside of this function there is an exception

main(){
    exceptionOne();
    exceptionTwo();

    exceptionThree();
    exceptionFour();
    system("pause");
}

void exceptionOne(){
    int InumA = 5;
    try{
        InumA *= 10;
        if(InumA == 50){ throw InumA; }
    }catch(int Ierror){
        cout << "InumA cannot be equal to " << Ierror << endl;
    }
}

void exceptionTwo(){
    int InumA = 5;
    try{
        InumA *= 10;
        if(InumA == 50){ throw InumA; }
    }catch(...){
        cout << "This catch is catching any error" << endl;
    }
}

void exceptionThree(){
    double DnumA = 34;
    double DnumB = 0;

    try{
        if(DnumB == 0){ throw DivisionByCeroException(); }
    }catch(DivisionByCeroException errorObj){
        errorObj.getErrorMessage();
    }
}

void exceptionFour() throw(DivisionByCeroException) { //this annotation is just information which means inside of this function there is an exception
    double DnumA = 34;
    double DnumB = 0;

    try{
        if(DnumB == 0){ throw DivisionByCeroException(); }
    }catch(DivisionByCeroException errorObj){
        errorObj.getErrorMessage();
    }
}