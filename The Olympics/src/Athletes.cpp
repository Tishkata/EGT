#include "Athletes.h"

Athletes::Athletes()
{
    this->firstName = "";
    this->lastName = "";
    this->bestAchievements = 0;
    this->nationality = "";
}

Athletes::Athletes(string firstName, string lastName, float bestAchievements, string nationality)
{
    setFirstName(firstName);
    setLastName(lastName);
    setBestAchievements(bestAchievements);
    setNationality(nationality);
}

void Athletes::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Athletes::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Athletes::setBestAchievements(float bestAchievements)
{
    this->bestAchievements = bestAchievements;
}

void Athletes::setNationality(string nationality)
{
    this->nationality = nationality;
}

string Athletes::getFirstName()const
{
    return this->firstName;
}

string Athletes::getLastName()const
{
    return this->lastName;
}

float Athletes::getBestAchievements()const
{
    return this->bestAchievements;
}

string Athletes::getNationality()const
{
    return this->nationality;
}

void Athletes::printInfo()
{
    cout << "First name: " << getFirstName() << endl;
    cout << "Last name: " << getLastName() << endl;
    cout << "Best achievements: " << getBestAchievements() << endl;
    cout << "Nationality: " << getNationality() << endl;
}
Athletes::~Athletes()
{
    //dtor
}
