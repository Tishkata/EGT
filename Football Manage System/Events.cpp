#include "Events.h"

Events::Events()
{
    this->cardType = NOCARD;
    this->ballMovement = UNSPECIFIED;
    this->scoredGoal = false;
    this->ballTaken = false;
}

Events::Events(TypeOfCards cardType, BallMovement ballMovement, bool scoredGoal, bool ballTaken)
{
    this->cardType = cardType;
    this->ballMovement = ballMovement;
    this->scoredGoal = scoredGoal;
    this->ballTaken = ballTaken;
}

void Events::setCardType(TypeOfCards cardType)
{
    this->cardType = cardType;
}

void Events::setBallMovement(BallMovement ballMovement)
{
    this->ballMovement = ballMovement;
}

void Events::setScoredGoal(bool scoredGoal)
{
    this->scoredGoal = scoredGoal;
}

void Events::setBallTaken(bool ballTaken)
{
    this->ballTaken = ballTaken;
}

TypeOfCards Events::getCardType()const
{
    return this->cardType;
}

BallMovement Events::getBallMovement()const
{
    return this->ballMovement;
}

bool Events::getScoredGoal()const
{
    return this->scoredGoal;
}

bool Events::getBallTaken()const
{
    return this->ballTaken;
}

void Events::printEvents()const
{
    cout << "Type of card: " << getCardType() << endl;
    cout << "Ball movement: " << getBallMovement() << endl;
    cout << "Scored goal: " << getScoredGoal() << endl;
    cout << "Ball taken: " << getBallTaken() << endl;
}

Events::~Events()
{
    //dtor
}
