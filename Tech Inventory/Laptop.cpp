#include "Laptop.h"

Laptop::Laptop():Device()
{
    this->speedOfLaptop = 0;
}

Laptop::Laptop(const char* manufacturer, int speedOfLaptop):Device(manufacturer)
{
    this->speedOfLaptop = speedOfLaptop;
}

void Laptop::setSpeedOfLaptop(int speedOfLaptop)
{
    this->speedOfLaptop = speedOfLaptop;
}

void Laptop::print()
{
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Speed of laptop and currency of model: " << getPerf() << endl;
}

int Laptop::getPerf()
{
    return speedOfLaptop;
}

Laptop::~Laptop()
{
    //dtor
}
