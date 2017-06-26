#ifndef TEAM_H
#define TEAM_H

#include "Player.h"

class Team
{
    public:
        Team();
        Team(const char* teamName);
        Team(const Team& other);
        Team& operator=(const Team& other);
        bool operator==(const Team& team);
        ~Team();

        void setPlayers(const Player* players, int numberOfPlayers);
        void setTeamName(const char* teamName);

        const Player* getPlayers() const;
        int getNumberOfPlayers() const;
        const char* getTeamName() const;

        void addPlayer(const Player& player);
        void removePlayer(const Player& player);
        void printTeam()const;
    protected:

    private:
        Player* players;
        int numberOfPlayers;
        int playersCapacity;
        char* teamName;


        void resizePlayers();

};

#endif // TEAM_H
