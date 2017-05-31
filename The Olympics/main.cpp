#include <iostream>
#include <Athletes.h>
#include <Disciplines.h>
#include <Starts.h>
#include <Type.h>
#include <vector>

using namespace std;

const int DEF_CAP = 10;

int main()
{
    Athletes one("Ivan", "Ivanov", 15, "Bulgaria");
    Athletes two("Ivan", "Ivanov", 15, "Bulgaria");
    Athletes three("Marin", "Marinov", 20, "Bulgaria");
    Athletes four("Tisho", "Tishov", 25, "Bulgaria");
    Athletes five("Kosta", "Kostov", 30, "Bulgaria");
    Athletes six("Viktor", "Uchikov", 35, "Bulgaria");
    Athletes seven("Evgenii", "Evgeniev", 40, "Bulgaria");
    Athletes eight("Tsanislav", "Tsanov", 45, "Bulgaria");
    Athletes nine("Dimitur", "Dimitrov", 50, "Bulgaria");
    Athletes ten("Misho", "Mishov", 55, "Bulgaria");

    vector <Athletes*> athletes;
    athletes.push_back(&one);
    athletes.push_back(&two);
    athletes.push_back(&three);
    athletes.push_back(&four);
    athletes.push_back(&five);
    athletes.push_back(&six);
    athletes.push_back(&seven);
    athletes.push_back(&eight);
    athletes.push_back(&nine);
    athletes.push_back(&ten);
    for(int i = 0; i < athletes.size(); i++)
    {
        athletes[i]->printInfo();
        cout << endl;
    }
    return 0;
}
