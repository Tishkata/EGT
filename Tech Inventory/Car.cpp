#include "Car.h"

Car::Car():Device()
{
    this->powerOfCar = 0;
    this->volumeOfCar = 0;
}

Car::Car(const char* manufacturer, int powerOfCar, int volumeOfCar):Device(manufacturer)
{
    this->powerOfCar = powerOfCar;
    this->volumeOfCar = volumeOfCar;
}

void Car::setPowerOfCar(int powerOfCar)
{
    this->powerOfCar = powerOfCar;
}

void Car::setVolumeOfCar(int volumeOfCar)
{
    this->volumeOfCar = volumeOfCar;
}

int Car::getVolumeOfCar()const
{
    return volumeOfCar;
}

void Car::print()
{
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Power of car and currency of model: " << getPerf() << endl;
    cout << "Volume of car: " << getVolumeOfCar() << endl;
}

int Car::getPerf()
{
    return powerOfCar;
}

Car::~Car()
{
    //dtor
}
