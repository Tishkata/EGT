#include "Team.h"

void Team::resizePlayers()
{
    this->playersCapacity *= 2;
    Player* temp = new Player[playersCapacity];
    for (int i = 0; i < numberOfPlayers; i++)
    {
        temp[i] = this->players[i];
    }
    delete[] this->players;
    this->players = temp;

}

Team::Team()
{

    this->playersCapacity = 4;
    this->players = new Player[playersCapacity];
    this->numberOfPlayers = 0;
    this->teamName = NULL;
}

Team::Team(const char* teamName)
{
    this->playersCapacity = 4;
    this->numberOfPlayers = 0;
    this->players = new Player[playersCapacity];
    this->teamName = new char[strlen(teamName) + 1];
    strcpy(this->teamName, teamName);
}

Team::Team(const Team& other)
{
    this->players = new Player[other.playersCapacity];
    for(int i = 0; i < other.numberOfPlayers; i++)
    {
        this->players[i] = other.players[i];
    }
    this->numberOfPlayers = other.numberOfPlayers;
    if(other.teamName == NULL)
    {

    }
    else
    {
        this->teamName = new char[strlen(teamName) + 1];
        strcpy(this->teamName, other.teamName);
    }
}

Team& Team::operator=(const Team& other)
{
    if(this != &other)
    {
        delete[] this->players;
        this->players = new Player[other.playersCapacity];
        for(int i = 0; i < other.numberOfPlayers; i++)
        {
            this->players[i] = other.players[i];
        }
        this->numberOfPlayers = other.numberOfPlayers;
        delete[] this->teamName;
        if(other.teamName == NULL)
        {

        }
        else
        {
            this->teamName = new char[strlen(other.teamName) + 1];
            strcpy(this->teamName, other.teamName);
        }
    }
    return *this;
}

void Team::setPlayers(const Player* players, int numberOfPlayers)
{
    if(numberOfPlayers > 0)
    {
        this->players = new Player[playersCapacity];
        for(int i = 0; i < numberOfPlayers && i < playersCapacity; i++)
        {
            this->players[i] = players[i];
        }
        this->numberOfPlayers = (numberOfPlayers <= playersCapacity) ? numberOfPlayers : playersCapacity;
    }
}

void Team::setTeamName(const char* teamName)
{
    delete[] this->teamName;
    this->teamName = new char[strlen(teamName) + 1];
    strcpy(this->teamName, teamName);
}

const Player* Team::getPlayers() const
{
    return this->players;
}

int Team::getNumberOfPlayers() const
{
    return this->numberOfPlayers;
}

const char* Team::getTeamName() const
{
    return this->teamName;
}

void Team::addPlayer(const Player& player)
{
    if(this->numberOfPlayers == this->playersCapacity)
    {
        this->resizePlayers();
    }
    this->players[this->numberOfPlayers] = player;
    this->numberOfPlayers++;
}


void Team::removePlayer(const Player& player)
{
    Player* temp = new Player[playersCapacity];
    for(int i = 0, j = 0; i < numberOfPlayers; i++, j++){
        if(players[i] == player){
            j--;
            continue;
        }
        temp[j] = players[i];
    }
    numberOfPlayers--;
    delete[] players;
    players = temp;
}

void Team::printTeam()const
{
    for(int i = 0; i < numberOfPlayers; i++){
        cout << "Name of team: " << getTeamName() << endl;
        players[i].printInfo();
    }
    cout << endl << endl << endl;
}

Team::~Team()
{
    delete[] this->players;
    delete[] this->teamName;
}

bool Team::operator==(const Team& team)
{
    if(strcmp(this->teamName, team.teamName) == 0)
    {
        return true;
    }
    return false;
}
