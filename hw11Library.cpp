#include <iostream>
#include "libhw11Library.h"
#include "libhw11Book.h"
#include "libhw11Borrower.h"

using namespace std;

Library::Library(int librarySize){
    this->librarySize = librarySize;
    this->currentBooks = new Book*[librarySize];
    this->numBooks = 0;
    cout << "The library was created" << endl;
}

Library::~Library(){
    int position =0;
    while(position < this->numBooks){
        delete this->currentBooks[position];
        position++;
    }
    delete[] this->currentBooks;
    cout << "Library ELIMINATED" << endl;
}

void Library::addBook(Book *newBook){

    if(this->numBooks < this->librarySize){

        this->currentBooks[this->numBooks] = newBook;
        this->numBooks++;
        cout << "The book was added correctly" << endl;

    }else{
        cout << "The library is full" << endl;
    }
}

Book* Library::getBook(string title, string author, int publicationYear, Borrower* customer){
    
    Book *searcherBook = NULL;
    
    if(librarySize != 0){

        int position = 0;

        while(position != librarySize){
            searcherBook = this->currentBooks[position];
            if((searcherBook->getAuthor().compare(author) == 0)
                && (searcherBook->getTitle().compare(title) == 0)
                && (searcherBook->getPublicationtYear() == publicationYear) ){
                customer->takeBook(searcherBook);
                shiftBooks(position);
                return searcherBook;
            }
            position++;
        }
    }else{cout << "The library is empty" << endl;}
    cout << "The book was NOT found" << endl;
    return NULL;
}

void Library::showAllBooks(){

    if(this->numBooks > 0){
        
        int position = 0;
        int *readIds = new int[this->numBooks];
        Book* currentBook = NULL;

        while(position != this->numBooks){
            
            currentBook = this->currentBooks[position];
            if(this->isDifferentId(currentBook->getId(), readIds, position)){
                Book::printBookInfo(currentBook);
                readIds[position] = currentBook->getId();
            }
            
            position++;
        }
        delete[] readIds;
        return;
    }
    cout << "There is not any book" << endl;
}

bool Library::isDifferentId(int currentId, int *currentIds, int limit){

    if(limit > 0){

        for(int k=0; k< limit; k++){
            if(currentId == *currentIds){
                return false;
            }
            currentIds++;
        }
    }
    return true;

}

void Library::shiftBooks(int position){
    while(position < this->numBooks ){
        this->currentBooks[position] = this->currentBooks[position + 1];
        position++;
    }
    this->numBooks--;
}