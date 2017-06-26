#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course
{
private:
    string name;
    int number;
    int continuicy;
    float basePrice;
public:
    Course();
    Course(string, int, int, float);
    virtual ~Course();

    void setName(string);
    void setNumber(int);
    void setContinuicy(int);
    void setBasePrice(float);

    string getName()const;
    int getNumber()const;
    int getContinuicy()const;
    float getBasePrice()const;

    virtual void printInfo();
};

#endif // COURSE_H
