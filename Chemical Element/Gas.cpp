#include "Gas.h"

Gas::Gas()
{
    this->periodicNumber = 0;
}

Gas::Gas(int periodicNumber)
{
    this->periodicNumber = periodicNumber;
}

void Gas::setPeriodicNumber(int periodicNumber)
{
    this->periodicNumber = periodicNumber;
}

int Gas::getPeriodicNumber() const
{
    return periodicNumber;
}

void Gas::print() const
{
    cout << "Gas periodic number" << endl;
}

void Gas::conductElectricity()
{
    cout << "Gases does not product electricity." << endl;
}

Gas::~Gas()
{
    //dtor
}
