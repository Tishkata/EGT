#ifndef TSHIRT_H
#define TSHIRT_H

#include <iostream>
#include <cstring>

using namespace std;

class Tshirt
{
    public:
        Tshirt();
        Tshirt(const char* brand, double price, int sizeOfTshirt, bool sex);
        Tshirt(const Tshirt& other);
        Tshirt& operator=(const Tshirt& other);
        bool operator==(const Tshirt& right);
        ~Tshirt();

        void setBrand(const char* brand);
        void setPrice(double price);
        void setSizeOfTshirt(int sizeOfTshirt);
        void setSex(bool sex);

        const char* getBrand()const;
        double getPrice()const;
        int getSizeOfTshirt()const;
        bool getSex()const;

        void printInfo()const;
    protected:

    private:
        char* brand;
        double price;
        int sizeOfTshirt;
        bool sex;
};

#endif // TSHIRT_H
