#include <iostream>
#include "BinaryTreeSearch.h"

using namespace std;

main(){
    BinarySearchTree myTree;
    myTree.addNode(5);
    myTree.addNode(4);
    myTree.addNode(7);
    myTree.addNode(3);
    myTree.addNode(5);
    myTree.addNode(6);
    myTree.addNode(11);
    myTree.addNode(2);
    myTree.addNode(1);
    myTree.addNode(10);

    myTree.searchValue(1, NULL);
    myTree.searchValue(10, NULL);
    myTree.searchValue(8, NULL);
    myTree.depthPrint(NULL);
}