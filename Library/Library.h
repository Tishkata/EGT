#ifndef LIBRARY_H
#define LIBRARY_H

#include "EBook.h"
#include <cassert>

class Library
{
    public:
        Library();
        Library(Book** books, int numberOfBooks);
        Library& operator=(const Library& other);
        Library& operator+=(Book* book);
        Library& operator-=(Book* book);
        virtual ~Library();

        Book** getBooks()const;
        int getNumberOfBooks()const;

        Book* operator[](int index) const;
        void sortByTitle(const char* title);
        int averagePages();
    protected:

    private:
        Book** books;
        int capacity;
        int numberOfBooks;
        void resize();
};

#endif // LIBRARY_H

