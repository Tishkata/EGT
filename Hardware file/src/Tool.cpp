#include "Tool.h"

Tool::Tool()
{
    this->records = 0;
    setName("");
    this->count = 0;
    this->cost = 0;
}

Tool::Tool(int records, string name, int count, float cost)
{
    setRecords(records);
    setName(name);
    setCount(count);
    setCost(cost);
}

void Tool::setRecords(int records)
{
    this->records = records;
}

void Tool::setName(string name)
{
    this->name = name;
}

void Tool::setCount(int count)
{
    this->count = count;
}

void Tool::setCost(float cost)
{
    this->cost = cost;
}

const int Tool::getRecords()const
{
    return this->records;
}

const string Tool::getName()const
{
    return this->name;
}

const int Tool::getCount()const
{
    return this->count;
}

const float Tool::getCost()const
{
    return this->cost;
}

void Tool::printInformation()
{
    cout << "Records: " << getRecords() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Count: " << getCount() << endl;
    cout << "Cost: " << getCost() << endl;
    cout << endl;
}


Tool::~Tool()
{
    //dtor
}
