#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Team.h"
#include "Type.h"

class Tournament
{
    public:
        Tournament();
        Tournament(Type typeOfTournament);
        Tournament(const Tournament& other);
        Tournament& operator=(const Tournament& other);
        ~Tournament();

        void setTeams(const Team* teams, int numberOfTeams);
        void setTypeOfTournament(Type typeOfTournament);

        const Team* getTeams() const;
        int getNumberOfTeams() const;
        Type getTypeOfTournament() const;

        void addTeam(const Team& team);
        void removeTeam(const Team& team);
        void printTournament()const;
    protected:

    private:
        Team* teams;
        int numberOfTeams;
        int teamsCapacity;
        Type typeOfTournament;

        void resizeTeam();
};


#endif // TOURNAMENT_H
