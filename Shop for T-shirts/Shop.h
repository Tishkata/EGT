#ifndef SHOP_H
#define SHOP_H

#include "Tshirt.h"

class Shop
{
    public:
        Shop();
        Shop(Tshirt* tshirts, int numberOfTshirts);
        Shop& operator+=(const Tshirt& tshirt);
        Shop& operator-=(const Tshirt& tshirt);
        ~Shop();

        Tshirt* getTshirt()const;

        void printShop()const;
        void checkByBrand(const char* brand);
        void checkBySize(int sizeOfTshirt);
        void checkByPrice(double maxPrice);
        bool checkTshirt(const char* brand, int sizeOfTshirt, bool sex);
    protected:

    private:
        Tshirt* tshirts;
        int capacity;
        int numberOfTshirts;
        void resize();
};

#endif // SHOP_H
