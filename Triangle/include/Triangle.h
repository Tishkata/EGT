#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

using namespace std;

class Triangle
{
private:
    int a, b, c, h;
public:
    Triangle();
    Triangle(int, int, int, int);
    ~Triangle();

    void setA(int);
    void setB(int);
    void setC(int);
    void setD(int);

    int getA()const;
    int getB()const;
    int getC()const;
    int getD()const;

    Triangle& operator+(const Triangle& obj);
    bool operator==(const Triangle& rhs);
    bool operator!=(const Triangle& rhs);

    friend istream& operator>>(istream& is, Triangle& input);
    friend ostream& operator<<(ostream& os, const Triangle& output);
};

#endif // TRIANGLE_H
