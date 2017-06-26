#include "Book.h"

Book::Book()
{
    this->header = NULL;
    this->numberOfPages = 0;
}

Book::Book(char* header, int numberOfPages)
{
    this->header = new char[strlen(header) + 1];
    strcpy(this->header, header);
    this->numberOfPages = numberOfPages;
}

Book& Book::operator=(const Book& other)
{
    if(this != &other){
        this->header = new char[strlen(other.header) + 1];
        strcpy(this->header, other.header);
        this->numberOfPages = other.numberOfPages;
    }
    return *this;
}

bool Book::operator<(const Book& right)
{
    if(strcmp(this->header, right.header) == (-1)){
        return true;
    }
    return false;
}

bool Book::operator>(const Book& right)
{
    if(strcmp(this->header, right.header) == 1){
        return true;
    }
    return false;
}

void Book::setHeader(const char* header)
{
    this->header = new char[strlen(header) + 1];
    strcpy(this->header, header);
}

void Book::setNumberOfPages(int numberOfPages)
{
    this->numberOfPages = numberOfPages;
}

const char* Book::getHeader() const
{
    return header;
}

int Book::getNumberOfPages() const
{
    return numberOfPages;
}

istream& operator>>(istream& is, Book& input)
{
    is >> input.header >> input.numberOfPages;
    return is;
}

ostream& operator<<(ostream& os, const Book& output)
{
    os << "Header: " << output.header << endl
        << "Number of pages: " << output.numberOfPages << endl;
    return os;
}
Book::~Book()
{
    delete[] this->header;
}
