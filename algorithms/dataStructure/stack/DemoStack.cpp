#include <iostream>
#include "StackLL.h"

using namespace std;

main(){
    StackLL newStack;
    newStack.pop();
    newStack.push(123);
    newStack.push(124);
    newStack.push(15);
    newStack.push(115);
    newStack.push(1);

    newStack.pop();
}