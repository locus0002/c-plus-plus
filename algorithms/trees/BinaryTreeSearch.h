#ifndef BST_VAC
#define BST_VAC
#include "NodeBTS.h"

class BinarySearchTree{
    private:
        NodeBST* root;
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void addNode(int);
        void deleteBST(NodeBST*);
        int searchValue(int, NodeBST*);
        void depthPrint(NodeBST*);
};

#endif