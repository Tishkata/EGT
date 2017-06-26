#include "Operations.h"

int main()
{
    Operations a;

    Office* one = new Office("EGT", 3, 90, 0.00, "beginner", "Nishava", "five", "small group");
    Office* two = new Office("IT Talents", 4, 180, 100, "advanced", "Ribarska", "four", "big group");
    Office* three = new Office("SoftUni", 5, 150, 200, "expert", "Elitsa", "three", "individual");

    Online* _one = new Online("EGT", 3, 90, 0.00, "daily");
    Online* _two = new Online("IT Talents", 4, 180, 100, "evening");
    Online* _three = new Online("SoftUni", 5, 150, 200, "saturday-sunday");

    a.addCourse(*one);
    a.addCourse(*two);
    a.addCourse(*three);
    a.addCourse(*_one);
    a.addCourse(*_two);
    a.addCourse(*_three);
    a.print();

    return 0;
}
