#ifndef ONLINE_H
#define ONLINE_H

#include "Course.h"

class Online: public Course
{
private:
    string type;
public:
    Online();
    Online(string, int, int, float, string);
    ~Online();

    void setType(string);

    string getType()const;

    int coefficientType();
    float priceForPayForOnlineCourse();
    void printInfo();
};

#endif // ONLINE_H
