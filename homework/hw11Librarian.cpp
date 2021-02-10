#include <iostream>
#include "libhw11Librarian.h"

using namespace std;

Librarian::Librarian(int maxNumberBooks){
    this->lentBooks = new Book*[maxNumberBooks];
    this->maxQuantityBooks = maxNumberBooks;
    this->numberBooks = 0;
}
Librarian::~Librarian(){
    int position = 0;
    while(position < this->numberBooks){
        delete this->lentBooks[position];
        position++;
    }
    delete[] this->lentBooks;
}

void Librarian::lendBooks(Library *currentLibrary, Borrower *customer, string title, string author, int publicationYear){
    Book *foundBook = currentLibrary->getBook(title, author, publicationYear, customer);
    if(!(foundBook == NULL)){
        //customer->takeBook(foundBook);
        cout << "Book was taken successfully and delivered to the customer" << endl;
    }else{
        cout << "Error trying to find the book " << endl;
    }

}

void Librarian::receiveBook(Library *currentLibrary, Borrower *customer, string title, string author){
    Book *foundBook = customer->returnBook(author,title);
    if(!(foundBook == NULL)){
        currentLibrary->addBook(foundBook);
        cout << "The book was received successfully and put in the library" << endl;
    }else{
        cout << "Error trying to find the book " << endl;
    }

}