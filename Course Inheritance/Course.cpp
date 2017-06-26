#include "Course.h"

Course::Course()
{
    this->name = "";
    this->number = 0;
    this->continuicy = 0;
    this->basePrice = 0;
}

Course::Course(string name, int number, int continuicy, float basePrice)
{
    setName(name);
    setNumber(number);
    setContinuicy(continuicy);
    setBasePrice(basePrice);
}

void Course::setName(string name)
{
    this->name = name;
}

void Course::setNumber(int number)
{
    this->number = number;
}

void Course::setContinuicy(int continuicy)
{
    this->continuicy = continuicy;
}

void Course::setBasePrice(float basePrice)
{
    this->basePrice = basePrice;
}

string Course::getName()const
{
    return this->name;
}

int Course::getNumber()const
{
    return this->number;
}

int Course::getContinuicy()const
{
    return this->continuicy;
}

float Course::getBasePrice()const
{
    return this->basePrice;
}

void Course::printInfo()
{
    cout << "Name: " << getName() << endl;
    cout << "Number: " << getNumber() << endl;
    cout << "Continuicy: " << getContinuicy() << endl;
    cout << "Base Price: " << getBasePrice() << endl;
}

Course::~Course()
{
    //dtor
}
