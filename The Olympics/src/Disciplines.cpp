#include "Disciplines.h"

Disciplines::Disciplines()
{
    this->name = "";
    this->worldRecord = worldRecord;
    this->recordOfDiscipline = recordOfDiscipline;
}

Disciplines::Disciplines(string, float, float)
{
    setName(name);
    setWorldRecord(worldRecord);
    setRecordOfDiscipline(recordOfDiscipline);
}

void Disciplines::setName(string name)
{
    this->name = name;
}

void Disciplines::setWorldRecord(float worldRecord)
{
    this->worldRecord = worldRecord;
}

void Disciplines::setRecordOfDiscipline(float recordOfDiscipline)
{
    this->recordOfDiscipline = recordOfDiscipline;
}

string Disciplines::getName()const
{
    return this->name;
}

float Disciplines::getWorldRecord()const
{
    return this->worldRecord;
}

float Disciplines::getRecordOfDiscipline()const
{
    return this->recordOfDiscipline;
}

void Disciplines::printInfo()
{
    cout << "Name: " << getName() << endl;
    cout << "World record: " << getWorldRecord() << endl;
    cout << "Record of discipline: " << getRecordOfDiscipline() << endl;
}
Disciplines::~Disciplines()
{
    //dtor
}
