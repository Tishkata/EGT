#include "PeriodicTable.h"

void PeriodicTable::resize()
{
    capacity *= 2;
    ChemicalElement** temp = new ChemicalElement*[capacity];
    for(int i = 0; i < numberOfElements; i++) {
        temp[i] = elements[i];
    }
    delete[] elements;
    elements = temp;
}

PeriodicTable::PeriodicTable()
{
    this->elements = new ChemicalElement*[capacity];
    this->numberOfElements = 0;
    this->capacity = 4;
}

PeriodicTable::PeriodicTable(ChemicalElement** elements, int numberOfElements)
{
    this->numberOfElements = numberOfElements;
    this->capacity = 4;
    this->elements = new ChemicalElement*[capacity];
    for(int i = 0; i < numberOfElements; i++){
        this->elements[i] = elements[i];
    }
}

PeriodicTable& PeriodicTable::operator=(const PeriodicTable& other)
{
    if(this != &other){
        for(int i = 0; i < numberOfElements; i++){
            delete[] this->elements[i];
        }
        delete[] this->elements;
        this->numberOfElements = other.numberOfElements;
        this->capacity = other.capacity;
        this->elements = new ChemicalElement*[other.capacity];
        for(int i = 0; i < numberOfElements; i++) {
            this->elements[i] = other.elements[i];
        }
    }
    return *this;
}

PeriodicTable& PeriodicTable::operator+=(ChemicalElement* element)
{
    if(this->capacity == this->numberOfElements){
        resize();
    }
    elements[numberOfElements] = element;
    numberOfElements++;
    return *this;
}

ChemicalElement** PeriodicTable::getElements() const
{
    return elements;
}

void PeriodicTable::printPeriodicTable() const
{
    cout << "Periodic table: " << getElements() << endl;
}

void PeriodicTable::TestConductivity()
{

}

PeriodicTable::~PeriodicTable()
{
    for(int i = 0; i < numberOfElements; i++){
    delete[] this->elements[i];
    }
    delete[] this->elements;
}

