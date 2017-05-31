#ifndef STARTS_H
#define STARTS_H
#include <string>
#include <iostream>
#include "Athletes.h"
#include <vector>

using namespace std;

class Starts
{
private:
    int data;
    int hour;
    string discipline;
    vector <Athletes> athletes;

public:
    Starts();
    Starts(int, int, string, Athletes);
    virtual ~Starts();

    void setData(int);
    void setHour(int);
    void setDiscipline(string);


    int getData();
    int getHour();
    string getDiscipline();

    void printInfo();
};

#endif // STARTS_H
