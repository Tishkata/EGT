#include "Inventory.h"

Inventory::Inventory()
{
    this->devices = new Device*[0];
}

Inventory::Inventory(Device** devices)
{
    this->devices = new Device*[MAX_CAPACITY];
    for(int i = 0; i < MAX_CAPACITY; i++){
        this->devices[i] = devices[i];
    }
}

void Inventory::setDevices(Device** devices)
{
    for(int i = 0; i < MAX_CAPACITY; i++){
        delete[] this->devices[i];
    }
    delete[] this->devices;
    this->devices = new Device*[MAX_CAPACITY];
    for(int i = 0; i < MAX_CAPACITY; i++){
        this->devices[i] = devices[i];
    }

}

Device** Inventory::getDevices() const
{
    return devices;
}

void Inventory::print()
{
    cout << "All devices: " << getDevices() << endl;
}

bool Inventory::isSorted()
{
    this->devices = new Device*[MAX_CAPACITY];
    for(int i = 0; i < MAX_CAPACITY; ++i){
        if(devices[i]->getPerf() < devices[i + 1]->getPerf()){
            return true;
        }
    }
    return false;
}

Inventory::~Inventory()
{
    for(int i = 0; i < MAX_CAPACITY; i++){
        delete[] this->devices[i];
    }
    delete[] this->devices;
}
