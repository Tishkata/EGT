#include "Online.h"

Online::Online()
{
    this->type = "";
}

Online::Online(string name, int number, int continuicy, float basePrice, string type)
                    :Course(name, number, continuicy, basePrice)
{
    setType(type);
}

void Online::setType(string type)
{
    this->type = type;
}

string Online::getType()const
{
    return this->type;
}

int Online::coefficientType()
{
    if(getType() == "daily")
    {
        return 3;
    }
    if(getType() == "evening")
    {
        return 8;
    }
    if(getType() == "saturday-sunday")
    {
        return 12;
    }
}

float Online::priceForPayForOnlineCourse()
{
    cout << "Price for online couse is: ";
    return getBasePrice() * coefficientType();
}

void Online::printInfo()
{
    Course::printInfo();
    cout << "Type: " << getType() << endl;
}

Online::~Online()
{
    //dtor
}
