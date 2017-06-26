#ifndef EBOOK_H
#define EBOOK_H

#include "Book.h"

const int NUMBER = 40;
const int OPENINGS = 200;

class EBook: public Book
{
    public:
        EBook();
        EBook(char* header, int numberOfPages, int sizeOfBook, int countOfOpenings);
        ~EBook();

        void setSizeOfBook(int sizeOfBook);
        void setCountOfOpenings(int countOfOpenings);

        int getSizeOfBook()const;
        int getCountOfOpenings()const;

        int ratingOfBook()const;

        void printEBook()const;
    protected:

    private:
        int sizeOfBook;
        int countOfOpenings;
};

#endif // EBOOK_H
