#ifndef EVENTS_H
#define EVENTS_H

#include <iostream>
#include "Cards.h"
#include "BallMovement.h"

using namespace std;

class Events
{
    public:
        Events();
        Events(TypeOfCards cardType, BallMovement ballMovement, bool scoredGoal, bool ballTaken);
        ~Events();

        void setCardType(TypeOfCards cardType);
        void setBallMovement(BallMovement ballMovement);
        void setScoredGoal(bool scoredGoal);
        void setBallTaken(bool ballTaken);

        TypeOfCards getCardType()const;
        BallMovement getBallMovement()const;
        bool getScoredGoal()const;
        bool getBallTaken()const;

        void printEvents()const;
    protected:

    private:
        TypeOfCards cardType;
        BallMovement ballMovement;
        bool scoredGoal;
        bool ballTaken;
};

#endif // EVENTS_H
