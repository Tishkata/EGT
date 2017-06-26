#ifndef LAPTOP_H
#define LAPTOP_H

#include "Device.h"

class Laptop: public Device
{
    public:
        Laptop();
        Laptop(const char* manufacturer, int speedOfLaptop);
        ~Laptop();

        void setSpeedOfLaptop(int speedOfLaptop);

        void print();
        int getPerf();
    protected:

    private:
        int speedOfLaptop;
};

#endif // LAPTOP_H
