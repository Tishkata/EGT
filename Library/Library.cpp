#include "Library.h"

void Library::resize()
{
    capacity *= 2;
    Book** temp = new Book*[capacity];
    for(int i = 0; i < numberOfBooks; i++) {
        temp[i] = books[i];
    }
    delete[] books;
    books = temp;

}

Library::Library()
{
    this->books = new Book*[capacity];
    this->capacity = 4;
    this->numberOfBooks = 0;
}

Library::Library(Book** books, int numberOfBooks)
{
    this->numberOfBooks = numberOfBooks;
    this->capacity = 4;
    this->books = new Book*[capacity];
    for(int i = 0; i < numberOfBooks; i++){
        this->books[i] = books[i];
    }
}

Library& Library::operator=(const Library& other)
{
    if(this != &other){
        for(int i = 0; i < numberOfBooks; i++){
            delete[] books[i];
        }
        delete[] books;
        this->numberOfBooks = other.numberOfBooks;
        this->capacity = other.capacity;
        this->books = new Book*[other.capacity];
        for(int i = 0; i < numberOfBooks; i++){
            this->books[i] = other.books[i];
        }
    }
    return *this;
}
Library& Library::operator+=(Book* book)
{
    if(this->capacity == numberOfBooks){
        resize();
    }
    books[numberOfBooks] = book;
    numberOfBooks++;
    return *this;
}

Library& Library::operator-=(Book* book)
{
    Book** temp = new Book*[capacity];
    for(int i = 0, j = 0; i < numberOfBooks; i++, j++){
        if(books[i] == book){
            j--;
            continue;
        }
        temp[j] = this->books[i];
    }
    numberOfBooks--;
    delete[] this->books;
    this->books = temp;
    return *this;
}

Book** Library::getBooks() const
{
    return books;
}

int Library::getNumberOfBooks() const
{
    return numberOfBooks;
}

int Library::averagePages()
{
    int maxPage = 0;
    for(int i = 0; i < numberOfBooks; i++){
        maxPage += books[i]->getNumberOfPages();
    }
    return maxPage / getNumberOfBooks();
}

void Library::sortByTitle(const char* title)
{
    for(int i = numberOfBooks; i > 0; i--){
        for(int j = 0; j < i - 1; j++){
            if(strcmp(books[i]->getHeader(), title) > 0){
                Book* temp = books[i];
                books[i] = books[i + 1];
                books[i + 1] = temp;
            }
        }
    }

}

Book* Library::operator[](int index) const
{
    assert(("Invalid index!", index >= 0 && index < this->numberOfBooks));
    return books[index];
}

Library::~Library()
{
    for(int i = 0; i < numberOfBooks; i++){
        delete[] books[i];
    }
    delete[] books;
}
