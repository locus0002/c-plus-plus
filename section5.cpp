#include <iostream>
#include <cstdlib>

using namespace std;

main(){
    /*
        Arrays
        The arrays' address is continue, you can understand this when you run this program
    */
    int array[4]; //TYPE NAME[SIZE_ARRAY];
    array[0] = 1;
    array[1] = 12;
    array[2] = 123;
    array[3] = 1234;

    cout << "array[0] = " << array[0] << " address: " << &array[0] << endl;
    cout << "array[1] = " << array[1] << " address: " << &array[1] << endl;
    cout << "array[2] = " << array[2] << " address: " << &array[2] << endl;
    cout << "array[3] = " << array[3] << " address: " << &array[3] << endl;

    //you can reference the first element withou any index
    cout << "Same address array[0]: " << &array[0] << " array: " << &array << endl;
    system("pause");
}