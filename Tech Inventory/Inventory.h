#ifndef INVENTORY_H
#define INVENTORY_H

#include "Laptop.h"
#include "Car.h"

const int MAX_CAPACITY = 100;

class Inventory
{
    public:
        Inventory();
        Inventory(Device** devices);
        ~Inventory();


        void setDevices(Device** devices);

        Device** getDevices()const;

        bool isSorted();
        void print();
    protected:

    private:
        Device** devices;

};

#endif // INVENTORY_H

