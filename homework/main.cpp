#include <iostream>
using std::cout;
using std::endl;

int size() {
    // the zero 0 will be the initial value
    static int currentSize = 0;
    return ++currentSize;
}

int main() {
    for (int k = 0; k < 10; k++) {
        cout << size() << endl;
    }
    int ci = 0;
    const int buf = ci;
    const int &r1 = 1;
    ci++;
    // buf++; error
    cout << "Hello Wordl!" << endl;
    return 1;
}