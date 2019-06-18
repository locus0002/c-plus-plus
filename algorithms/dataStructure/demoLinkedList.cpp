/*
    Author: Vladimir Aca
    Date: June 16, 2019
*/

#include <iostream>
#include <stdio.h>
#include "LinkedListVAC.h"

using namespace std;

main(){
    LinkedListVAC newList;
    newList.add(12);
    newList.add(11);
    newList.add(10);
    newList.add(9);
    newList.add(8);
    newList.add(7);
    newList.add(6);
    newList.add(5);
    newList.display();
    newList.deleteNode();
    newList.display();

    system("pause");
}