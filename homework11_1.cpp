#include <iostream>
#include <cstdlib>
#include "libhomework11_1.h"

using namespace std;

Book book1;
Book book2;
Book book3;

void creatStructures();
void fillData(int);
void printData();

main(){
    for(int i=0; i<3; i++){
        fillData(i);
    }
    printData();
    system("pause");
}

void fillData(int number){
    Book* pointer;
    switch(number){
        case 0:
            pointer = &book1;
            break;
        case 1:
            pointer = &book2;
            break;
        case 2:
            pointer = &book3;
            break;
    }

    cout << "Type the author: " << endl;
    getline(cin,pointer->author);

    cout << "Type the title: " << endl;
    getline(cin,pointer->title);

    cout << "Type the publication year: " << endl;
    cin >> pointer->publication_year;
    cin.ignore();

}

void printData(){
    cout << "Author one: " << book1.author << endl;
    cout << "Title one: " << book1.title << endl;
    cout << "Year one: " << book1.publication_year << endl;

    cout << "Author two: " << book2.author << endl;
    cout << "Title two: " << book2.title << endl;
    cout << "Year onetwo: " << book2.publication_year << endl;

    cout << "Author three: " << book3.author << endl;
    cout << "Title three: " << book3.title << endl;
    cout << "Year three: " << book3.publication_year << endl;
}

void creatStructures(){
    Book newBook1;
    Book newBook2;
    Book newBook3;

    newBook1.author = "Author One";
    newBook1.publication_year = 2015;
    newBook1.title = "New Title ONE";

    newBook2.author = "Author TWO";
    newBook2.publication_year = 2025;
    newBook2.title = "New Title TWO";

    newBook3.author = "Author THREE";
    newBook3.publication_year = 2035;
    newBook3.title = "New Title THREE";

    cout << "Author one: " << newBook1.author << endl;
    cout << "Title one: " << newBook1.title << endl;
    cout << "Year one: " << newBook1.publication_year << endl;

    cout << "Author two: " << newBook2.author << endl;
    cout << "Title two: " << newBook2.title << endl;
    cout << "Year onetwo: " << newBook2.publication_year << endl;

    cout << "Author three: " << newBook3.author << endl;
    cout << "Title three: " << newBook3.title << endl;
    cout << "Year three: " << newBook3.publication_year << endl;
}