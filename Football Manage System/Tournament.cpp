#include "Tournament.h"

void Tournament::resizeTeam()
{
    this->teamsCapacity *= 2;
    Team* temp = new Team[teamsCapacity];
    for(int i = 0; i < numberOfTeams; i++)
    {
        temp[i] = this->teams[i];
    }
    delete[] this->teams;
    this->teams = temp;
}

Tournament::Tournament()
{
    this->teamsCapacity = 8;
    this->numberOfTeams = 0;
    this->typeOfTournament = WORLDS;
    this->teams = new Team[teamsCapacity];
}

Tournament::Tournament(Type typeOfTournament)
{
    this->teamsCapacity = 8;
    this->numberOfTeams = 0;
    this->teams = new Team[teamsCapacity];
    this->typeOfTournament = typeOfTournament;
}

Tournament::Tournament(const Tournament& other)
{
    this->teams = new Team[other.teamsCapacity];
    for(int i = 0; i < numberOfTeams; i++)
    {
        this->teams[i] = other.teams[i];
    }
    this->numberOfTeams = other.numberOfTeams;
    this->typeOfTournament = other.typeOfTournament;
}

Tournament& Tournament::operator=(const Tournament& other)
{
    if(this != &other)
    {
        delete[] this->teams;
        this->teams = new Team[other.teamsCapacity];
        for(int i = 0; i < numberOfTeams; i++)
        {
            this->teams[i] = other.teams[i];
        }
        this->numberOfTeams = other.numberOfTeams;
        this->typeOfTournament = other.typeOfTournament;
    }
    return *this;
}

void Tournament::setTeams(const Team* teams, int numberOfTeams)
{
    if(numberOfTeams > 0)
    {
        this->teams = new Team[teamsCapacity];
        for(int i = 0; i < numberOfTeams && i < teamsCapacity; i++)
        {
            this->teams[i] = teams[i];
        }
        this->numberOfTeams = (numberOfTeams <= teamsCapacity) ? numberOfTeams : teamsCapacity;
    }
}

void Tournament::setTypeOfTournament(Type typeOfTournament)
{
    this->typeOfTournament = typeOfTournament;
}

const Team* Tournament::getTeams() const
{
    return this->teams;
}

int Tournament::getNumberOfTeams() const
{
    return this->numberOfTeams;
}

Type Tournament::getTypeOfTournament() const
{
    return this->typeOfTournament;
}

void Tournament::addTeam(const Team& team)
{
    if(this->numberOfTeams == this->teamsCapacity)
    {
        this->resizeTeam();
    }
    this->teams[this->numberOfTeams] = team;
    this->numberOfTeams++;
}


void Tournament::removeTeam(const Team& team)
{
    Team* temp = new Team[teamsCapacity];
    for(int i = 0, j = 0; i < numberOfTeams; i++, j++){
        if(teams[i] == team){
            j--;
            continue;
        }
        temp[j] = teams[i];
    }
    numberOfTeams--;
    delete[] teams;
    teams = temp;
}

void Tournament::printTournament()const
{
    for(int i = 0; i < numberOfTeams; i++){
        cout << "Type of tournament: " << getTypeOfTournament() << endl;
        teams[i].printTeam();
    }
}
Tournament::~Tournament()
{
    delete[] this->teams;
}
