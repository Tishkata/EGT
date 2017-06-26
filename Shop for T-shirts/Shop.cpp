#include "Shop.h"

void Shop::resize()
{
    capacity *= 2;
    Tshirt* temp = new Tshirt[capacity];
    for(int i = 0; i < numberOfTshirts; i++) {
        temp[i] = tshirts[i];
    }
    delete[] tshirts;
    tshirts = temp;
}

Shop::Shop()
{
    this->tshirts = new Tshirt[capacity];
    this->capacity = 4;
    this->numberOfTshirts = 0;
}

Shop::Shop(Tshirt* tshirts, int numberOfTshirts)
{
    this->tshirts = new Tshirt[capacity];
    for(int i = 0; i < numberOfTshirts; i++){
        this->tshirts[i] = tshirts[i];
    }
    this->capacity = 4;
    this->numberOfTshirts = 0;
}

Shop& Shop::operator+=(const Tshirt& tshirt)
{
    if(numberOfTshirts == capacity){
        resize();
    }
    tshirts[numberOfTshirts] = tshirt;
    numberOfTshirts++;
    return *this;
}

Shop& Shop::operator-=(const Tshirt& tshirt)
{
    Tshirt* temp = new Tshirt[capacity];
    for(int i = 0, j = 0; i < numberOfTshirts; i++, j++){
        if(tshirts[i] == tshirt){
            j--;
            continue;
        }
        temp[j] = this->tshirts[i];
    }
    numberOfTshirts--;
    delete[] this->tshirts;
    this->tshirts = temp;
    return *this;
}

void Shop::checkByBrand(const char* brand)
{
    for(int i = 0; i < numberOfTshirts; i++){
        if(strcmp(this->tshirts[i].getBrand(), brand) == 0){
            cout << tshirts[i].getBrand();
        }
    }
}

void Shop::checkBySize(int sizeOfTshirt)
{
    for(int i = 0; i < numberOfTshirts; i++){
        if(tshirts[i].getSizeOfTshirt() == sizeOfTshirt){
            cout << tshirts[i].getSizeOfTshirt();
        }
    }
}

void Shop::checkByPrice(double maxPrice)
{
    for(int i = 0; i < numberOfTshirts; i++){
        if(tshirts[i].getPrice() < maxPrice){
            cout << tshirts[i].getPrice();
        }
    }
}

bool Shop::checkTshirt(const char* brand, int sizeOfTshirt, bool sex)
{
    for(int i = 0; i < numberOfTshirts; i++){
        if(strcmp(this->tshirts[i].getBrand(), brand) == 0 && (tshirts[i].getSizeOfTshirt() == sizeOfTshirt) && (tshirts[i].getSex() == sex)){
            return true;
        }
    }
    return false;
}

Tshirt* Shop::getTshirt() const
{
    return tshirts;
}

void Shop::printShop() const
{
    cout << "Tshirts: " << getTshirt() << endl;
}

Shop::~Shop()
{
    delete[] this->tshirts;
}


