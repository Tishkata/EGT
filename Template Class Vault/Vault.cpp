#include "Vault.h"

template <typename T>
Vault<T>::Vault()
{
    this->cages = new T[0];
    this->password = new T[0];
    this->n = 4;
}

template <typename T>
Vault<T>::Vault(T* cages, T* password)
{
    this->cages = new T[n];
    for(int i = 0; i < n; i++){
        this->cages[i] = cages[i];
    }
    this->password = new T[n];
    for(int i = 0; i < n; i++){
        this->password[i] = password[i];
    }
    this->n = 4;
}

template <typename T>
void Vault<T>::setCages(T* cages)
{
    delete[] this->cages;
    this->cages = new T[n];
    for(int i = 0; i < n; i++){
    this->cages[i] = cages[i];
    }
}

template <typename T>
void Vault<T>::setPassword(T* password)
{
    delete[] this->password;
    this->password = new T[n];
    for(int i = 0; i < n; i++){
        this->password[i] = password[i];
    }
}

template <typename T>
T* Vault<T>::getCages() const
{
    return cages;
}

template <typename T>
T* Vault<T>::getPassword() const
{
    return password;
}

template <typename T>
int Vault<T>::deposit(T object, int passcode)
{
    for(int i = 0; i < n; i++){
        password[i] = passcode;
    }
    for(int i = 0; i < n; i++){
        if(cages[i] == object){
            return;
        }
        return cages[i];
    }
}

template <typename T>
T Vault<T>::withdraw(int cell, int passcode)
{
    for(int i = 0; i < n; i++){
        if(password[i] == cell){
            return cell;
        }
    }
    for(int i = 0; i < n; i++){
        if(password[i] == passcode){
            return;
        }
    }
    for(int i = 0; i < n; i++){
        if(cages[i] == 0){
            cout << "The cage is empty.";
        }
    }
}

template <typename T>
void Vault<T>::swap(int cell1, int cell2)
{
    T temp = cell1;
    cell1 = cell2;
    cell2 = temp;
}

template <typename T>
void Vault<T>::printInfo() const
{
    cout << "Cages: " << getCages() << endl;
    cout << "Password: " << getPassword() << endl;
}

template <typename T>
Vault<T>::~Vault()
{
    delete[] this->cages;
    delete[] this->password;
}

