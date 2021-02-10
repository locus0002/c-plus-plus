#include <iostream>
#include <stdio.h>

using namespace std;

const int x = 5;

int main() {
    int x[x];
    int y = sizeof(x) / sizeof(int);
    cout << y << endl;
    system("pause");
    return 1;
}
