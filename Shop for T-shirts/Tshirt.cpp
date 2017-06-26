#include "Tshirt.h"

Tshirt::Tshirt()
{
    this->brand = NULL;
    this->price = 0;
    this->sizeOfTshirt = 0;
    this->sex = 0;
}

Tshirt::Tshirt(const char* brand, double price, int sizeOfTshirt, bool sex)
{
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
    this->price = price;
    this->sizeOfTshirt = sizeOfTshirt;
    this->sex = sex;
}

Tshirt::Tshirt(const Tshirt& other)
{
    delete[] this->brand;
    this->brand = new char[strlen(other.brand) + 1];
    strcpy(this->brand, other.brand);
    this->price = other.price;
    this->sizeOfTshirt = other.sizeOfTshirt;
    this->sex = other.sex;
}

Tshirt& Tshirt::operator=(const Tshirt& other)
{
    if(this != & other){
        delete[] this->brand;
        this->brand = new char[strlen(other.brand) + 1];
        strcpy(this->brand, other.brand);
        this->price = other.price;
        this->sizeOfTshirt = other.sizeOfTshirt;
        this->sex = other.sex;
    }
    return *this;
}

bool Tshirt::operator==(const Tshirt& right)
{
    if(strcmp(this->brand, right.brand) == 0 && (this->price = right.price) && (this->sizeOfTshirt = right.sizeOfTshirt) && (this->sex == right.sex)){
        return true;
    }
    return false;
}

void Tshirt::setBrand(const char* brand)
{
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);
}

void Tshirt::setPrice(double price)
{
    this->price = price;
}

void Tshirt::setSizeOfTshirt(int sizeOfTshirt)
{
    this->sizeOfTshirt = sizeOfTshirt;
}

void Tshirt::setSex(bool sex)
{
    this->sex = sex;
}

const char* Tshirt::getBrand() const
{
    return this->brand;
}

double Tshirt::getPrice() const
{
    return this->price;
}

int Tshirt::getSizeOfTshirt() const
{
    return this->sizeOfTshirt;
}

bool Tshirt::getSex() const
{
    return this->sex;
}

void Tshirt::printInfo() const
{
    cout << "Brand: " << getBrand() << endl;
    cout << "Price: " << getPrice() << endl;
    cout << "Size of Tshirt: " << getSizeOfTshirt() << endl;
    cout << "Sex: " << getSex() << endl;
}

Tshirt::~Tshirt()
{
    delete[] this->brand;
}

