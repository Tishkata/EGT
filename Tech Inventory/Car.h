#ifndef CAR_H
#define CAR_H

#include "Device.h"

class Car: public Device
{
    public:
        Car();
        Car(const char* manufacturer, int powerOfCar, int volumeOfCar);
        ~Car();

        void setPowerOfCar(int powerOfCar);
        void setVolumeOfCar(int volumeOfCar);

        int getVolumeOfCar()const;

        void print();
        int getPerf();
    protected:

    private:
        int powerOfCar;
        int volumeOfCar;
};

#endif // CAR_H
