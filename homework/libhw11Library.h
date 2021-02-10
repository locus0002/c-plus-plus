#ifndef LIB_LIBRARY_CLAAS
#define LIB_LIBRARY_CLAAS
#include "libhw11Book.h"
#include "libhw11Borrower.h"

class Library{
    private:
        Book** currentBooks;
        int librarySize;
        int numBooks;
        bool isDifferentId(int, int*, int);
        void shiftBooks(int);
    public:
        Library(int);
        ~Library();
        void addBook(Book *newBook);
        Book* getBook(string, string, int, Borrower*);
        void showAllBooks();
};

#endif