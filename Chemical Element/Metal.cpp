#include "Metal.h"

Metal::Metal()
{
    this->periodicNumber = 0;
    this->temperature = 0;
}

Metal::Metal(int periodicNumber, int temperature)
{
    this->periodicNumber = periodicNumber;
    this->temperature = temperature;
}

void Metal::setPeriodicNumber(int periodicNumber)
{
    this->periodicNumber = periodicNumber;
}

void Metal::setTemperature(int temperature)
{
    this->temperature = temperature;
}

int Metal::getPeriodicNumber() const
{
    return periodicNumber;
}

int Metal::getTemperature() const
{
    return temperature;
}

void Metal::print() const
{
    cout << "Metal periodic number: " << getPeriodicNumber() << endl;
    cout << "Temperature: " << getTemperature() << endl;
}

void Metal::conductElectricity()
{
    if(this->periodicNumber > 0 && this->periodicNumber < 21){
        cout << "The metal is highly conductive." << endl;
    }
    else if(this->periodicNumber < 31){
        cout << "The metal is medium conductive." << endl;
    }
    else if(this->periodicNumber < 51){
        cout << "The metal is low conductive." << endl;
    }
    if(this->temperature > 200 && this->periodicNumber > 19 && this->periodicNumber < 31){
        cout << "The metal is medium conductive and it produces electricity." << endl;
    }
}

Metal::~Metal()
{
    //dtor
}
