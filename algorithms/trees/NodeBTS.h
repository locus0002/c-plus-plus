#ifndef NODE_BST_VAC
#define NODE_BST_VAC

class NodeBST{
    private:
        int value;
        NodeBST* left;
        NodeBST* right;
    public:
        NodeBST();
        ~NodeBST();
        NodeBST(int);
        void setLeftNode(NodeBST*);
        void setRightNode(NodeBST*);
        NodeBST* getLeftNode();
        NodeBST* getRightNode();
        int getValue();
};

#endif