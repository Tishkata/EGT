#ifndef CHEMICALELEMENT_H
#define CHEMICALELEMENT_H

#include <iostream>
#include <cstring>

using namespace std;

class ChemicalElement
{
    public:
        virtual void print() = 0;
        virtual void conductElectricity() = 0;
    protected:

    private:
};

#endif // CHEMICALELEMENT_H
