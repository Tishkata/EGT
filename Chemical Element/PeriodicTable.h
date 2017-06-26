#ifndef PERIODICTABLE_H
#define PERIODICTABLE_H

#include "Metal.h"
#include "Gas.h"

class PeriodicTable
{
    public:
        PeriodicTable();
        PeriodicTable(ChemicalElement** elements, int numberOfElements);
        PeriodicTable& operator=(const PeriodicTable& other);
        PeriodicTable& operator+=(ChemicalElement* element);
        ~PeriodicTable();

        ChemicalElement** getElements()const;
        void printPeriodicTable()const;
        void TestConductivity();
    protected:

    private:
        ChemicalElement** elements;
        int capacity;
        int numberOfElements;
        void resize();
};

#endif // PERIODICTABLE_H

