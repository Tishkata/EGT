#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <cstring>

using namespace std;

class Book
{
    public:
        Book();
        Book(char* header, int numberOfPages);
        Book& operator=(const Book& other);
        bool operator<(const Book& right);
        bool operator>(const Book& right);
        virtual ~Book();

        void setHeader(const char* header);
        void setNumberOfPages(int numberOfPages);

        const char* getHeader()const;
        int getNumberOfPages()const;

        friend istream& operator>>(istream& is, Book& input);
        friend ostream& operator<<(ostream& os, const Book& output);
    protected:

    private:
        char* header;
        int numberOfPages;
};

#endif // BOOK_H

