#include <iostream>
#include "Queue.h"

using namespace std;

main(){
    Queue currentQueue;
    currentQueue.dequeue();
    currentQueue.push(1);
    currentQueue.push(2);
    currentQueue.push(3);
    currentQueue.push(4);
    currentQueue.push(5);
    currentQueue.push(6);
    currentQueue.push(7);

    currentQueue.dequeue();
    currentQueue.dequeue();
    currentQueue.dequeue();

    currentQueue.print();
}