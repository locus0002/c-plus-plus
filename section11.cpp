#include <iostream>
#include <cstdlib>

using namespace std;

struct personalData{
    string name;
    string lastName;
    string telephone;
    short age;
} PDpersonA, PDpersonB;
void functionTest(personalData*);

main(){
    PDpersonA.age = 25;
    PDpersonA.lastName = "Aca";
    PDpersonA.name = "Vladimir";
    PDpersonA.telephone = "603-741-202";

    PDpersonB.age = 21;
    PDpersonB.lastName = "Cruz";
    PDpersonB.name = "Jonathan";
    PDpersonB.telephone = "603-741-202";

    personalData APDperson[5];
    APDperson[0].age = 21;
    APDperson[0].lastName = "last name";
    APDperson[0].name = "name";
    APDperson[0].telephone = "754214578";

    cout << PDpersonA.age << endl;
    cout << PDpersonA.lastName << endl;
    cout << PDpersonA.name << endl;
    cout << PDpersonA.telephone << endl;

    cout << PDpersonB.age << endl;
    cout << PDpersonB.lastName << endl;
    cout << PDpersonB.name << endl;
    cout << PDpersonB.telephone << endl;

    //Remebering that all array also is a pointer
    cout << (*APDperson).age << endl;
    cout << (*APDperson).lastName << endl;
    cout << (*APDperson).name << endl;
    cout << (*APDperson).telephone << endl;

    //now if we need to user pointer, it is different from before
    personalData *PPDperson = &PDpersonA;
    cout << PPDperson->age << endl;
    cout << PPDperson->lastName << endl;
    cout << PPDperson->name << endl;
    cout << PPDperson->telephone << endl;

    functionTest(PPDperson);
    cout << "name: " << PPDperson->name << endl;
    system("pause");
}

void functionTest(personalData* currentPerson){
    currentPerson->name = "name edited";
}