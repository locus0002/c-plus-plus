#include <iostream>
#include "BinaryTreeSearch.h"

using namespace std;

BinarySearchTree::BinarySearchTree(){
    this->root = NULL;
}

BinarySearchTree::~BinarySearchTree(){
    deleteBST(this->root);
    cout << "The tree was destroyed" << endl;
    system("pause");
}

void BinarySearchTree::deleteBST(NodeBST* currentNode){
    NodeBST* position = currentNode;
    if(position != NULL){
        if(position->getLeftNode() != NULL){
            deleteBST(position->getLeftNode());
        }
        if(position->getRightNode() != NULL){
            deleteBST(position->getRightNode());
        }
        delete position;
        return;
    }
}

void BinarySearchTree::addNode(int newValue){
    NodeBST* newChild = new NodeBST(newValue);
    if(this->root == NULL){
        this->root = newChild;
    }else{
        NodeBST* pointer = this->root;
        while(pointer != NULL){
            if(newValue > pointer->getValue()){
                //right
                if(pointer->getRightNode() == NULL){
                    pointer->setRightNode(newChild);
                    pointer = NULL;
                }else{
                    pointer = pointer->getRightNode();
                }
            }else{
                //left
                if(pointer->getLeftNode() == NULL){
                    pointer->setLeftNode(newChild);
                    pointer = NULL;
                }else{
                    pointer = pointer->getLeftNode();
                }
            }
        }
    }
}

int BinarySearchTree::searchValue(int targetValue, NodeBST* currentNode){

    NodeBST* currentPosition = currentNode != NULL ? currentNode : this->root;
    if(currentPosition != NULL){
        int auxValue = currentPosition->getValue();
        if(auxValue == targetValue){
            cout << "The value was found: " << auxValue << endl;
            return targetValue;
        }else{
            if(targetValue > auxValue && currentPosition->getRightNode() != NULL){
                return searchValue(targetValue, currentPosition->getRightNode());
            }else if(targetValue <= auxValue && currentPosition->getLeftNode() != NULL){
                return searchValue(targetValue, currentPosition->getLeftNode());
            }else{
                cout << "There is not any node with that value: " << targetValue << endl;
                return -1;
            }
        }
    }else{
        return -1;
    }
}

void BinarySearchTree::depthPrint(NodeBST* currentNode){
    NodeBST* position = currentNode != NULL ? currentNode : this->root;
    if(position != NULL){
        cout << "Value: " << position->getValue() << endl;
        if(position->getLeftNode() != NULL){
            depthPrint(position->getLeftNode());
        }
        if(position->getRightNode() != NULL){
            depthPrint(position->getRightNode());
        }
        return;
    }
}