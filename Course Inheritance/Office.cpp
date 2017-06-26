#include "Office.h"

Office::Office():Course()
{
    this->level = "";
    this->address = "";
    this->room = "";
    this->kind = "";
}
Office::Office(string name, int number, int continuicy, float basePrice, string level, string address, string room, string kind)
                            :Course(name, number, continuicy, basePrice)
{
    setLevel(level);
    setAddress(address);
    setRoom(room);
    setKind(kind);
}

void Office::setLevel(string level)
{
    this->level = level;
}

void Office::setAddress(string address)
{
    this->address = address;
}

void Office::setRoom(string room)
{
    this->room = room;
}

void Office::setKind(string kind)
{
    this->kind = kind;
}

string Office::getLevel()const
{
    return this->level;
}

string Office::getAddress()const
{
    return this->address;
}

string Office::getRoom()const
{
    return this->room;
}

string Office::getKind()const
{
    return this->kind;
}

int Office::coefficientLevel()
{
    if(getLevel() == "beginner")
    {
        return 5;
    }
    if(getLevel() == "advanced")
    {
        return 10;
    }
    if(getLevel() == "expert")
    {
        return 15;
    }
}

int Office::coefficientKind()
{
    if(getKind() == "individual")
    {
        return 6;
    }
    if(getKind() == "small group")
    {
        return 4;
    }
    if(getKind() == "big group")
    {
        return 2;
    }
}

float Office::priceForPayForOfficeCourse()
{
    cout << "Price for Office course is: ";
    return getBasePrice() * coefficientLevel() * coefficientKind();
}

void Office::printInfo()
{
    Course::printInfo();
    cout << "Level: " << getLevel() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << "Room: " << getRoom() << endl;
    cout << "Kind: " << getKind() << endl;
}

Office::~Office()
{
    //dtor
}
