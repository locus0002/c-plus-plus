#include <iostream>
#include <cstdlib>

using namespace std;

main(){
    
    int IProgramCodition, IMonthCondition, IYear, IPoints;
    char IContinueCondition;

    do{
        system("cls");
        cout << "Choose one option" << endl;
        cout << "1 - Switch program" << endl;
        cout << "2 - Students" << endl;
        cin >> IProgramCodition ;

        switch(IProgramCodition){
            case 1:
                system("cls");
                cout << "Choose the month wich you want to know the number of days" << endl;
                cout << "1 - January" << endl;
                cout << "2 - February" << endl;
                cout << "3 - March" << endl;
                cout << "4 - April" << endl;
                cout << "5 - May" << endl;
                cout << "6 - June" << endl;
                cout << "7 - July" << endl;
                cout << "8 - August" << endl;
                cout << "9 - September" << endl;
                cout << "10 - October" << endl;
                cout << "11 - November" << endl;
                cout << "12 - December" << endl;
                cin >> IMonthCondition;

                switch(IMonthCondition){
                    case 2:
                        cout << "Type the year" << endl;
                        cin >> IYear;
                        if( (IYear % 4) == 0 && ((IYear % 400) == 0 || (IYear % 100) != 0) ){
                            cout << "The number of days is: 29 days" << endl;
                        }else{
                            cout << "The number of days is: 28 days" << endl;
                        }
                        break;
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        cout << "The number of days is: 31 days" << endl;
                        break;
                    
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        cout << "The number of days is: 30 days" << endl;
                        break;

                    default:
                        cout << "Option invalidated" << endl;
                }
                break;
            case 2:
                system("cls");
                cout << "Type the score in the exam" << endl;
                cin >> IPoints;
                if(IPoints > 50 && IPoints <= 100){
                    cout << "The student passed the exam " << endl;
                }else if(IPoints >= 0 && IPoints <= 50){
                    cout << "The student didn't pass the exam " << endl;
                }else{
                    cout << "Score invalidated " << endl;
                }
                break;
            default:
                cout << "Option invalidated" << endl;
        }

        cout << "Do you want to stay here? (Y/y)" << endl;
        cin >> IContinueCondition;
        
    }while(IContinueCondition == 'Y' || IContinueCondition == 'y');

    system("pause");
}