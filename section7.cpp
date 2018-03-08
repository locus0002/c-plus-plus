#include <iostream>
#include <cstdlib>
#include <limits>
#define PI 3.14

using namespace std;

void areaCircle(double DRadious);
void areaSquare(double DSide);
void areaRectangle(double DBase, double DHigh);
void areaTriangle(double DBase, double DHigh);
bool isNumber(string STemp); //This is a function because has a value of return
void enterNumber();//This a method because has not a value or return
int power(int INumberA, int INumberB);
double power(double INumberA, int INumberB); //here we are doing an overload function, we only need different type of parameters
void initMenu();
void chooseOperation(int IChoose);
bool isValid(string error_msg);

int main(){
    /*
        SCOPE
        Don't forget that the las variables created have a SCOPE and them can't use in another SCOPE
    */
    /*
        FUNCTIONS / METHODS
    */
    //enterNumber();
    //enterNumber();
    //cout << power(2,3) << endl;
    //cout << power(2.5,3) << endl;

    int IChoice;
    char CDecisition;

    do{
        system("cls");
        initMenu();

        while(!(cin >> IChoice)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have typed something wrong " << endl;
        }
        chooseOperation(IChoice);
        
        do{
            cout << "Do you want to stay in the program (Y/N): " << endl;
            cin >> CDecisition;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }while(CDecisition != 'Y' && CDecisition != 'y' && CDecisition != 'N' && CDecisition != 'n' );

    }while(CDecisition == 'y' || CDecisition == 'Y');

    return 0;
    system ("pause");
}

void areaCircle(double DRadious){

    double DResult;
    
    DResult = PI * DRadious * DRadious;
    cout << "The are of the circle is: " << DResult << endl;
}
void areaSquare(double DSide){
    
    double DResult;
    
    DResult = DSide * DSide;
    cout << "The are of the square is: " << DResult << endl;
}
void areaRectangle(double DBase, double DHigh){

    double DResult;
    
    DResult = DBase * DHigh;
    cout << "The are of the Rectangle is: " << DResult << endl;
}
void areaTriangle(double DBase, double DHigh){

    double DResult;
    
    DResult = (DBase * DHigh)/2;
    cout << "The are of the Triangle is: " << DResult << endl;
}


bool isNumber(string STemp){
    
    if(STemp[0] == '0'){
        return false;
    }

    for(int k=0; k<STemp.length(); k++ ){
        if( !(STemp[k] >= 48 && STemp[k] <= 57) ){
            return false;
        }
    }

    return true;
}

void enterNumber(){
    string temp;
    cout << "Enter your number: " << endl;
    cin >> temp;

    if(isNumber(temp)){
        cout << temp << " is number" << endl;
    }else{
        cout << temp << " is NOT number" << endl;
    }
}

void initMenu(){
    cout << "Enter an option: " << endl;
    cout << "1. Circle " << endl;
    cout << "2. Square " << endl;
    cout << "3. Rectangle " << endl;
    cout << "4. Triangle " << endl;
}

void chooseOperation(int IChoose){

    double DRadious, DSide, DBase, DHigh;

    switch(IChoose){
        case 1:
            cout << "Enter the value of the radious: " << endl;
            do{ cin >> DRadious; } while( !isValid("The radious is wrong") );
            areaCircle(DRadious);
            break;
        case 2:
            cout << "Enter the value of the side: " << endl;
            cin >> DSide;
            areaSquare(DSide);
            break;
        case 3:
            cout << "Enter the value of the base: " << endl;
            cin >> DBase;
            cout << "Enter the value of the high: " << endl;
            cin >> DHigh;
            areaRectangle(DBase, DHigh);
            break;
        case 4:
            cout << "Enter the value of the base: " << endl;
            cin >> DBase;
            cout << "Enter the value of the high: " << endl;
            cin >> DHigh;
            areaTriangle(DBase, DHigh);
            break;
    }
}

bool isValid(string error_msg){
    
    if(cin.rdstate()){
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        initMenu();
        cout<< error_msg << endl;
        return false;
    }

    return true;
}

int power(int INumberA, int INumberB){
    
    int IAux = INumberA;

    while(INumberB > 1){
        INumberA *= IAux;
        INumberB--;
    }

    return INumberA;
}

double power(double DNumberA, int INumberB){
    
    double IAux = DNumberA;

    while(INumberB > 1){
        DNumberA *= IAux;
        INumberB--;
    }

    return DNumberA;
}