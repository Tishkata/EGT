#ifndef TOOL_H
#define TOOL_H

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Tool
{
private:
    int records;
    char name[20];
    int count;
    float cost;
public:
    Tool();
    Tool(int, string, int, float);
    virtual ~Tool();

    void setRecords(int);
    void setName(string);
    void setCount(int);
    void setCost(float);

    const int getRecords()const;
    const string getName()const;
    const int getCount()const;
    const float getCost()const;

    void printInformation();
};

#endif // TOOL_H
