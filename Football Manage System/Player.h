#ifndef PLAYER_H
#define PLAYER_H

#include "Position.h"
#include <iostream>
#include <cstring>

using namespace std;

class Player
{
    public:
        Player();
        Player(const char* firstName, const char* lastName, int age, Position position);
        Player(const Player& other);
        Player& operator=(const Player& other);
        bool operator==(const Player& player);
        ~Player();

        void setFirstName(const char* firstName);
        void setLastName(const char* lastName);
        void setAge(int age);
        void setPosition(Position position);

        const char* getFirstName() const;
        const char* getLastName() const;
        int getAge() const;
        Position getPostion() const;

        void printInfo()const;
    protected:

    private:
        char* firstName;
        char* lastName;
        int age;
        Position position;
};


#endif // PLAYER_H
