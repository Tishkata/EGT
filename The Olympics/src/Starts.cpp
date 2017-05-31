#include "Starts.h"

Starts::Starts()
{
    this->data = 0;
    this->hour = 0;
    this->discipline = "";
    this->athletes = athletes;
}

Starts::Starts(int data, int hour, string discipline, Athletes athletes)
{

}
void Starts::setData(int data)
{
    this->data = data;
}
void Starts::setHour(int hour)
{
    this->hour = hour;
}
void Starts::setDiscipline(string discipline)
{
    this->discipline = discipline;
}

int Starts::getData()
{
    return this->data;
}
int Starts::getHour()
{
    return this->hour;
}
string Starts::getDiscipline()
{
    return this->discipline;
}


void Starts::printInfo()
{
    cout << "Data: " << getData() << endl;
    cout << "Hour: " << getHour() << endl;
    cout << "Discipline: " << getDiscipline() << endl;
}
Starts::~Starts()
{
    //dtor
}
