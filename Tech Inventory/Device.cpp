#include "Device.h"

Device::Device()
{
    this->manufacturer = NULL;
}

Device::Device(const char* manufacturer)
{
    this->manufacturer = new char[strlen(manufacturer) + 1];
    strcpy(this->manufacturer, manufacturer);
}

const char* Device::getManufacturer()const
{
    return manufacturer;
}

Device::~Device()
{
    delete[] this->manufacturer;
}
