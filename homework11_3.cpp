#include <iostream>
#include <cstdlib>
#include "libhw11Book.h"
#include "libhw11Library.h"
#include "libhw11User.h"
#include "libhw11Borrower.h"
#include "libhw11Librarian.h"

using namespace std;

void test();

main(){
    Book newBookA("New title 1", "New author 1", 1990);
    Book newBookB("New title 2", "New author 2", 1990);
    Book newBookC("New title 3", "New author 3", 1990);
    Book newBookD("New title 4", "New author 4", 1990);
    Book newBookE("New title 5", "New author 5", 1990);
    Library newLibrary(6);
    newLibrary.addBook(&newBookA);
    newLibrary.addBook(&newBookB);
    newLibrary.addBook(&newBookC);
    newLibrary.addBook(&newBookD);
    newLibrary.addBook(&newBookE);

    Borrower customer(5);
    Librarian worker(5);

    cout << endl << endl << "New library" << endl;
    newLibrary.showAllBooks();
    cout << endl << endl << "New Customer" << endl;
    customer.showAllBooks();
    cout << endl << endl;

    worker.lendBooks(&newLibrary, &customer, "New title 2", "New author 2", 1990);

    cout << endl << endl << "Library After lend book" << endl;
    newLibrary.showAllBooks();
    cout << endl << endl << "Customer After lend book" << endl;
    customer.showAllBooks();
    cout << endl << endl;

    cout << "Before to receive the book" << endl;
    worker.receiveBook(&newLibrary, &customer, "New title 2", "New author 2");
    cout << "After to receive the book" << endl;
    cout << endl << endl;
    newLibrary.showAllBooks();
    cout << endl << endl;
    customer.showAllBooks();
    cout << endl << endl;

    system("pause");
}

void test(){
    const Book newBookA("New title 1", "New author 1", 1990);
    const Book newBookB("New title 2", "New author 2", 1990);
    const Book newBookC("New title 3", "New author 3", 1990);

    const Book newBookD = newBookB;
    const Book newBookE = newBookB;
    
    Library newLibrary(6);

    /*newLibrary.addBook(newBookA);
    newLibrary.addBook(newBookB);
    newLibrary.addBook(newBookC);
    newLibrary.addBook(newBookD);
    newLibrary.addBook(newBookE);*/

    Book *foundBook = newLibrary.getBook("New title 2", "New author", 1990, NULL);

    if(foundBook != NULL){
        cout << "The book was found" << endl;
        Book::printBookInfo(foundBook);
    }
    cout << "All books" << endl;
    newLibrary.showAllBooks();
    system("pause");
}