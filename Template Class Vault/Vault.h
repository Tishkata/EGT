#ifndef VAULT_H
#define VAULT_H

#include <iostream>

using namespace std;

template <typename T>
class Vault
{
    public:
        Vault();
        Vault(T* cages, T* password);
        ~Vault();

        void setCages(T* cages);
        void setPassword(T* password);

        T* getCages()const;
        T* getPassword()const;

        int deposit(T object, int passcode);
        T withdraw(int cell, int passcode);
        void printInfo()const;
    protected:

    private:
        T* cages;
        T* password;
        int n;
        void swap(int cell1, int cell2);
};

#endif // VAULT_H

