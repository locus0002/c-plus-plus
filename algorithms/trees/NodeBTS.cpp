#include <iostream>
#include "NodeBTS.h"

using namespace std;

NodeBST::NodeBST(){
    this->left = NULL;
    this->right = NULL;
    cout << "Node was created" << endl;
}

NodeBST::NodeBST(int newValue){
    this->value = newValue;
    this->left = NULL;
    this->right = NULL;
    cout << "Node was created" << endl;
}

NodeBST::~NodeBST(){
    cout << "This node has been destroyed" << endl;
}

void NodeBST::setLeftNode(NodeBST* newChild){
    this->left = newChild;
}

void NodeBST::setRightNode(NodeBST* newChild){
    this->right = newChild;
}

NodeBST* NodeBST::getLeftNode(){
    return this->left;
}

NodeBST* NodeBST::getRightNode(){
    return this->right;
}

int NodeBST::getValue(){
    return this->value;
}