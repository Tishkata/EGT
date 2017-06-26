#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <cstring>

using namespace std;

class Device
{
    public:
        Device();
        Device(const char* manufacturer);
        virtual ~Device();

        const char* getManufacturer()const;
        virtual void print() = 0;
        virtual int getPerf() = 0;
    protected:

    private:
        char* manufacturer;
};

#endif // DEVICE_H
