#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void lottery(int, int);

main(){
    cout << time(NULL) << endl;
    lottery(6, 6);
    system("pause");
}

void lottery(int totalBalls, int ballToDraw){
    
    if(totalBalls < ballToDraw){ return;}
    srand(time(NULL));
    int *balls = new int[ballToDraw]; //it assigns space in memory os the pointer will have and address
    for (int i=0; i< ballToDraw; i++){
        balls[i] = rand() % totalBalls +1;
        for(int k=0; k<i+1; k++){
            if(balls[i] == balls[k] && i != k){
                i--;
                break;
            }else if(k == i){ cout << balls[i] << endl; }
        }
    }

    delete[] balls;


}