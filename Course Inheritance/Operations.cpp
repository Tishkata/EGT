#include "Operations.h"

Operations::Operations()
{
    //ctor
}

void Operations::addCourse(Course& obj)
{
    courses.push_back(&obj);
}

void Operations::print()
{
    for(unsigned int i = 0; i < courses.size(); i++)
    {
        courses[i]->printInfo();
        cout << endl;
        if(Office* off = dynamic_cast<Office*>(courses[i]))
        {
            cout << off->priceForPayForOfficeCourse();
            cout << endl;
        }
        if(Online* onl = dynamic_cast<Online*>(courses[i]))
        {
            cout << onl->priceForPayForOnlineCourse();
            cout << endl;
        }
    }
}

Operations::~Operations()
{
    //dtor
}
