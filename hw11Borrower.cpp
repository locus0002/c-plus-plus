#include <iostream>
#include "libhw11Borrower.h"

using namespace std;

Borrower::Borrower(){
    this->lentBooks = new Book*[5];
    this->maxQuantityBooks = 5;
    this->numberBooks = 0;
}

Borrower::Borrower(int maxNumberBooks){
    this->lentBooks = new Book*[maxNumberBooks];
    this->maxQuantityBooks = maxNumberBooks;
    this->numberBooks = 0;
}

Borrower::~Borrower(){
    int position = 0;
    while(position < this->numberBooks){
        delete this->lentBooks[position];
        position++;
    }
    delete[] this->lentBooks;
}

void Borrower::takeBook(Book *newBook){
    if(this->numberBooks<this->maxQuantityBooks){
        this->lentBooks[this->numberBooks] = newBook;
        this->numberBooks++;
    }else{
        cout << "You cannot take another book" << endl;
    }
}

void Borrower::showAllBooks(){

    if(this->numberBooks > 0){
        int position = 0;
        while(position < this->numberBooks){
            Book::printBookInfo(this->lentBooks[position]);
            position++;
        }
    }else{
        cout << "You do not have any book" << endl;
    }
}

Borrower Borrower::operator=(Borrower parentBorrower){
    Borrower newBorrower(this->maxQuantityBooks);
    return newBorrower;
}

Book *Borrower::returnBook(string author, string title){
    if(this->numberBooks > 0){

        int position = 0;
        Book * foundBook = NULL;

        while(position < this->numberBooks){
            foundBook = this->lentBooks[position];

            if((foundBook->getAuthor().compare(author) == 0)
                &&(foundBook->getTitle().compare(title) == 0)){
                
                shiftBook(position);
                return foundBook;
            }
            position++;
        }
    }else{
        cout << "You do not have any book" << endl;
    }
    return NULL;
}

void Borrower::shiftBook(int position){
    while(position < this->numberBooks){
        this->lentBooks[position] = this->lentBooks[position + 1];
        position++;
    }
    this->numberBooks--;
}