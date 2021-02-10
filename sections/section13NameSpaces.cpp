#include <iostream>
#include <cstdlib>

using namespace std;

/*
    Creation of namespaces
    The namespace are usefu for ordering variable, class, templates, etc
    because some of them can be named like similarly in another namespace
*/

namespace GlobalA{
    int InumA = 3;
}

namespace GlobalB{
    int InumA = 4;
}

namespace mySpace{
    
    using namespace std;
    class MyNewLine{
        string text;
        public:
            MyNewLine(string text = "\n\n\n\n" ){ this->text = text; }
            string toString(){ return this->text; }
    };

    ostream & operator<<(ostream & out, MyNewLine & o){
        return out << o.toString();
    }
    MyNewLine endl("\n\n\n\n\n\n\n");
}

int InumA = 34; // this variable will be created in the global space

main(){
    int InumA = 60; // this variable will be created in the local space
    cout << "InumA is a local varible: " << InumA << mySpace::endl;
    cout << "::InumA is a global varible: " << ::InumA << endl;
    cout << "InumA belong GlobalA: " << GlobalA::InumA << endl;
    cout << "InumA belong GlobalB: " << GlobalB::InumA << endl;
    system("pause");
}//local space