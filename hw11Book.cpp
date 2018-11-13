#include <iostream>
#include "libhw11Book.h"

using namespace std;

int Book::counter = 0;

Book::Book(){
    counter++;
    this->ID = counter; 
    cout << "A book was created" << endl;
}

Book::~Book(){
    cout << "book eliminated" << endl;
}

Book::Book(string title, string author, int publicationYear){

    counter++;
    this->ID = counter;
    this->author = author;
    this->title = title;
    this->publicationYear = publicationYear;

    cout << "A book was created" << endl;
}

Book::Book(const Book& oldBook){
    this->author = oldBook.author;
    this->title = oldBook.title;
    this->publicationYear = oldBook.publicationYear;
    this->ID = counter;
    counter++;
}

void Book::setAuthor(string author){
    this->author = author;
}

void Book::setTitle(string title){
    this->title = title;
}

void Book::setPublicationtYear(int publicationYear){
    this->publicationYear = publicationYear;
}

void Book::printBookInfo(Book *currentBook){
    cout << "ID: " << currentBook->getId() << endl;
    cout << "Author: " << currentBook->getAuthor() << endl;
    cout << "Tittle: " << currentBook->getTitle() << endl;
    cout << "Pulication Year: " << currentBook->getPublicationtYear() << endl;
}