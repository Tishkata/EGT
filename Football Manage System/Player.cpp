#include "Player.h"

Player::Player()
{
    this->firstName = NULL;
    this->lastName = NULL;
    this->age = 0;
    this->position = GOALKEEPER;
}

Player::Player(const char* firstName, const char* lastName, int age, Position position)
{
    this->firstName = new char[strlen(firstName) + 1];
    strcpy(this->firstName, firstName);
    this->lastName = new char[strlen(lastName) + 1];
    strcpy(this->lastName, lastName);
    this->age = age;
    this->position = position;
}

Player::Player(const Player& other)
{
    if(other.firstName == NULL){

    }
    else{
        this->firstName = new char[strlen(other.firstName) + 1];
        strcpy(this->firstName, other.firstName);
    }
    if(other.lastName == NULL){

    }
    else{
        this->lastName = new char[strlen(other.lastName) + 1];
        strcpy(this->lastName, other.lastName);
    }
    this->age = other.age;
    this->position = other.position;
}

Player& Player::operator=(const Player& other)
{
    if(this != &other){
        delete[] this->firstName;
        delete[] this->lastName;
        if(other.firstName == NULL)
        {

        }
        else
        {
            this->firstName = new char[strlen(other.firstName) + 1];
            strcpy(this->firstName, other.firstName);
        }
        if(other.lastName == NULL)
        {

        }
        else
        {
            this->lastName = new char[strlen(other.lastName) + 1];
            strcpy(this->lastName, other.lastName);
        }
        this->age = other.age;
        this->position = other.position;
    }
    return *this;
}

Player::~Player()
{
    delete[] this->firstName;
    delete[] this->lastName;
}

void Player::setFirstName(const char* firstName)
{
    delete[] this->firstName;
    this->firstName = new char[strlen(firstName) + 1];
    strcpy(this->firstName, firstName);
}

void Player::setLastName(const char* lastName)
{
    delete[] this->lastName;
    this->lastName = new char[strlen(lastName) + 1];
    strcpy(this->lastName, lastName);
}

void Player::setAge(int age)
{
    this->age = age;
}

void Player::setPosition(Position position)
{
    this->position = position;
}

const char* Player::getFirstName() const
{
    return this->firstName;
}

const char* Player::getLastName() const
{
    return this->lastName;
}

int Player::getAge() const
{
    return this->age;
}

Position Player::getPostion() const
{
    return this->position;
}

bool Player::operator==(const Player& player)
{
    if(strcmp(this->firstName, player.firstName) == 0 && strcmp(this->lastName, player.lastName) == 0 &&
       this->age == player.age && this->position == player.position)
    {
        return true;
    }
    return false;
}

void Player::printInfo()const
{
    cout << "First name: " << getFirstName() << endl;
    cout << "Last name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Position: " << getPostion() << endl;
    cout << endl;
}
