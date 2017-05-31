#ifndef ATHLETES_H
#define ATHLETES_H
#include <string>
#include <iostream>

using namespace std;

class Athletes
{
private:
    string firstName;
    string lastName;
    float bestAchievements;
    string nationality;
public:
    Athletes();
    Athletes(string, string, float, string);
    virtual ~Athletes();

    void setFirstName(string);
    void setLastName(string);
    void setBestAchievements(float);
    void setNationality(string);

    string getFirstName()const;
    string getLastName()const;
    float getBestAchievements()const;
    string getNationality()const;

    void printInfo();
};

#endif // ATHLETES_H
