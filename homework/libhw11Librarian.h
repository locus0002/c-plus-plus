#ifndef LIB11_LIBRARIAN
#define LIB11_LIBRARIAN
#include "libhw11Borrower.h"
#include "libhw11Library.h"

class Librarian : public Borrower{
    public:
        Librarian(int);
        ~Librarian();
        void lendBooks(Library *, Borrower *, string, string, int);
        void receiveBook(Library *, Borrower *, string, string);
};

#endif