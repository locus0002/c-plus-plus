#ifndef LIB11_BORROWER
#define LIB11_BORROWER
#include "libhw11User.h"
#include "libhw11Book.h"

class Borrower : public User{
    protected:
        Book ** lentBooks;
        int maxQuantityBooks;
        int numberBooks;
    public:
        Borrower();
        Borrower(int);
        ~Borrower();
        void takeBook(Book*);
        Book *returnBook(string, string);
        void showAllBooks();
        Borrower operator=(Borrower);
    private:
        void shiftBook(int);
};

#endif