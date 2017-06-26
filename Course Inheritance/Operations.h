#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "Course.h"
#include "Office.h"
#include "Online.h"
#include <vector>

class Operations
{
private:
    vector <Course*> courses;
public:
    Operations();
    ~Operations();

    void addCourse(Course&);
    void print();
};

#endif // OPERATIONS_H
