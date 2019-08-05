#include <iostream>

using namespace std;

int main(){
    const char *magic = "F@LDL@FHB";
    //GAMEMAGIC
    while(*magic){
        char aux = *magic + 1;
        //fputc(*magic++ + 1, stdout);
        cout << aux;
        *magic++;
    }
    cout << endl;
    system("pause");
    return 0;
}