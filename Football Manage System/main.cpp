#include "Team.h"
#include "Tournament.h"

int main()
{
    Player one("Tihomir", "Kovachev", 24, GOALKEEPER);
    Player two("Georgi", "Keranov", 25, CENTREBACK);
    Player three("Iviyan", "Stoyanov", 23, CENTREFORWARD);
    Player four("Daniel", "Panayotov", 21, LEFTBACK);
    Player five("Zlatin", "Mihailov", 20, RIGHTBACK);
    Player six("Konstantin", "Todorov", 27, CENTREMIDFIELD);
    Player seven("Polin", "Todorov", 28, LEFTMIDFIELD);
    Player eight("Georgi", "Tanev", 24, RIGHTMIDFIELD);
    Player nine("Vero", "Tsakov", 23, LEFTBACK);
    Player ten("Denis", "Tihomirov", 27, RIGHTBACK);
    Player eleven("Georgi", "Stoichev", 22, CENTREFORWARD);

    Player twelve("Tihomir", "Kovachev", 24, GOALKEEPER);
    Player thirteen("Georgi", "Keranov", 25, CENTREBACK);
    Player fourteen("Iviyan", "Stoyanov", 23, CENTREFORWARD);
    Player fifteen("Daniel", "Panayotov", 21, LEFTBACK);
    Player sixteen("Zlatin", "Mihailov", 20, RIGHTBACK);
    Player seventeen("Konstantin", "Todorov", 27, CENTREMIDFIELD);
    Player eighteen("Polin", "Todorov", 28, LEFTMIDFIELD);
    Player nineteen("Georgi", "Tanev", 24, RIGHTMIDFIELD);
    Player twenty("Vero", "Tsakov", 23, LEFTBACK);
    Player twentyOne("Denis", "Tihomirov", 27, RIGHTBACK);
    Player twentyTwo("Georgi", "Stoichev", 22, CENTREFORWARD);

    Team _one("Manchester");
    _one.addPlayer(one);
    _one.addPlayer(two);
    _one.addPlayer(three);
    _one.addPlayer(four);
    _one.addPlayer(five);
    _one.addPlayer(six);
    _one.addPlayer(seven);
    _one.addPlayer(eight);
    _one.addPlayer(nine);
    _one.addPlayer(ten);
    _one.addPlayer(eleven);


    _one.removePlayer(one);
//    _one.printTeam();
    Team _two("Chelsea");
    _two.addPlayer(twelve);
    _two.addPlayer(thirteen);
    _two.addPlayer(fourteen);
    _two.addPlayer(fifteen);
    _two.addPlayer(sixteen);
    _two.addPlayer(seventeen);
    _two.addPlayer(eighteen);
    _two.addPlayer(nineteen);
    _two.addPlayer(twenty);
    _two.addPlayer(twentyOne);
    _two.addPlayer(twentyTwo);

    Tournament tour1;
    tour1.addTeam(_one);
    return 0;
}
