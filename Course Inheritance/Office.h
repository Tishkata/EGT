#ifndef OFFICE_H
#define OFFICE_H

#include "Course.h"

class Office: public Course
{
private:
    string level;
    string address;
    string room;
    string kind;
public:
    Office();
    Office(string, int, int, float, string, string, string, string);
    ~Office();

    void setLevel(string);
    void setAddress(string);
    void setRoom(string);
    void setKind(string);

    string getLevel()const;
    string getAddress()const;
    string getRoom()const;
    string getKind()const;

    int coefficientLevel();
    int coefficientKind();
    float priceForPayForOfficeCourse();
    void printInfo();
};

#endif // OFFICE_H
