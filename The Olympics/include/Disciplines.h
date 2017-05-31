#ifndef DISCIPLINES_H
#define DISCIPLINES_H
#include <string>
#include <iostream>

using namespace std;

class Disciplines
{
private:
    string name;
    float worldRecord;
    float recordOfDiscipline;
public:
    Disciplines();
    Disciplines(string, float, float);
    virtual ~Disciplines();

    void setName(string);
    void setWorldRecord(float);
    void setRecordOfDiscipline(float);

    string getName()const;
    float getWorldRecord()const;
    float getRecordOfDiscipline()const;

    void printInfo();

};

#endif // DISCIPLINES_H
