#ifndef NODE_Q_VAC
#define NODE_Q_VAC

class NodeQ{
    private:
        NodeQ* next;
        NodeQ* prev;
        int value;
    public:
        NodeQ();
        NodeQ(int);
        ~NodeQ();
        int getValue();
        void setValue(int);
        void setNext(NodeQ*);
        NodeQ* getNext();
        void setPrev(NodeQ*);
        NodeQ* getPrev();
};

#endif