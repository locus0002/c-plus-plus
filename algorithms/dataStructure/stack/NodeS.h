#ifndef NODE_STACK
#define NODE_STACK

class NodeS{
    private:
        NodeS* next;
        int value;
    public:
        NodeS();
        NodeS(int);
        ~NodeS();
        void setNext(NodeS*);
        int getValue();
        NodeS* getNext();

};

#endif