#ifndef GAS_H
#define GAS_H

#include "ChemicalElement.h"

class Gas: public ChemicalElement
{
    public:
        Gas();
        Gas(int periodicNumber);
        ~Gas();

        void setPeriodicNumber(int periodicNumber);

        int getPeriodicNumber()const;

        void print()const;
        void conductElectricity();
    protected:

    private:
        int periodicNumber;
};

#endif // GAS_H
