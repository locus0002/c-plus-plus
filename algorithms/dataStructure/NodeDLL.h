#ifndef NODE_DLL
#define NODE_DLL

class NodeDLL{
    private:
        int value;
        NodeDLL* next;
        NodeDLL* prev;
    public:
        NodeDLL();
        NodeDLL(int);
        ~NodeDLL();
        void setNext(NodeDLL*);
        void setPrev(NodeDLL*);
        int getValue();
        NodeDLL* getNext();
        NodeDLL* getPrev();
};

#endif