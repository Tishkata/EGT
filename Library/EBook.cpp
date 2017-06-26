#include "EBook.h"

EBook::EBook():Book()
{
    this->sizeOfBook = 0;
    this->countOfOpenings = 0;
}

EBook::EBook(char* header, int numberOfPages, int sizeOfBook, int countOfOpenings)
            :Book(header, numberOfPages)
{
    this->sizeOfBook = sizeOfBook;
    this->countOfOpenings = countOfOpenings;
}

void EBook::setSizeOfBook(int sizeOfBook)
{
    this->sizeOfBook = sizeOfBook;
}

void EBook::setCountOfOpenings(int countOfOpenings)
{
    this->countOfOpenings = countOfOpenings;
}

int EBook::getSizeOfBook() const
{
    return sizeOfBook;
}

int EBook::getCountOfOpenings() const
{
    return countOfOpenings;
}

int EBook::ratingOfBook()const
{
    if(this->countOfOpenings >= OPENINGS){
        return 5;
    }
    return countOfOpenings / NUMBER;
}

void EBook::printEBook()const
{
    cout << "Header: " << getHeader() << endl;
    cout << "Number of pages: " << getNumberOfPages() << endl;
    cout << "Size of book: " << getSizeOfBook() << endl;
    cout << "Count of openings: " << getCountOfOpenings() << endl;
}

EBook::~EBook()
{
    //dtor
}
