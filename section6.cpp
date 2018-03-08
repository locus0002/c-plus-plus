#include <iostream>
#include <cstdlib>
using namespace std;

main(){
    /*
        LOOPS
    */
    //FOR
    for(int i=0; i<10; i++){
        cout << "this is a  normal for looop" << endl;
    }
    /*for(;;){
        cout<< "This is an infinite loop" << endl;
    }*/

    //WHILE 
    const int SIZEARRAY = 10;
    int i=0;
    int array[SIZEARRAY];

    while( i < SIZEARRAY ){
        array[i] = 10 * i;
        i++;
    }

    do{
        array[i] = 10 * i;
        i++;
    }while( i < SIZEARRAY );
    //BREAK AND CONTINUE
    for(int k = 0; k<10; k++){
        if(k == 5){
            continue; //everything after continue execution WONT BE executed
            //break;//everything after break WONT BE executed and we are leaving the actual loop
        }
        for(int h = 0; h<10; h++){
            cout << (k * h) << endl;
        }
    }

    system("pause");
}