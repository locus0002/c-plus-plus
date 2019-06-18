#ifndef NODE_LL_VAC
#define NODE_LL_VAC

class NodeLLVAC{
    private:
        int value;
        NodeLLVAC* next;
    public:
        NodeLLVAC();
        NodeLLVAC(int);
        ~NodeLLVAC();
        void setNext(NodeLLVAC*);
        NodeLLVAC* getNext();
        int getValue();
};

#endif