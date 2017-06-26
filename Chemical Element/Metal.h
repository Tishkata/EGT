#ifndef METAL_H
#define METAL_H

#include "ChemicalElement.h"

class Metal: public ChemicalElement
{
    public:
        Metal();
        Metal(int periodicNumber, int temperature);
        virtual ~Metal();

        void setPeriodicNumber(int periodicNumber);
        void setTemperature(int temperature);

        int getPeriodicNumber()const;
        int getTemperature()const;

        void print()const;
        void conductElectricity();
    protected:

    private:
        int periodicNumber;
        int temperature;
};

#endif // METAL_H
