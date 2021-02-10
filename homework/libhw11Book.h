#ifndef CLASS_BOOK
#define CLASS_BOOK

#include <string>

using namespace std;

class Book{
    
    static int counter;
    
    private:;
        int ID;
        string author;
        string title;
        int publicationYear;
    public:
        Book();
        Book(string, string, int);
        Book(const Book&);
        ~Book();
        int getId(){ return this->ID; };
        void setAuthor(string);
        string getAuthor(){ return this->author; }
        void setTitle(string);
        string getTitle(){ return this->title; }
        void setPublicationtYear(int);
        int getPublicationtYear(){ return this->publicationYear; }
        static void printBookInfo(Book *);
};

#endif