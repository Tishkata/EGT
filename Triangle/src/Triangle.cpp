#include "Triangle.h"

Triangle::Triangle()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->h = 0;
}

Triangle::Triangle(int a, int b, int c, int h)
{
    setA(a);
    setB(b);
    setC(c);
    setD(h);
}

void Triangle::setA(int a)
{
    if(a > 0)
    {
        this->a = a;
    }
}
void Triangle::setB(int b)
{
    if(b > 0)
    {
        this->b = b;
    }
}
void Triangle::setC(int c)
{
    if(c > 0)
    {
        this->c = c;
    }
}
void Triangle::setD(int h)
{
    if(h > 0)
    {
        this->h = h;
    }
}

int Triangle::getA()const
{
    return this->a;
}
int Triangle::getB()const
{
    return this->b;
}

int Triangle::getC()const
{
    return this->c;
}
int Triangle::getD()const
{
    return this->h;
}

Triangle& Triangle::operator+(const Triangle& obj)
{
    int newA = a + obj.a;
    int newB = b + obj.b;
    int newC = c + obj.c;
    int newD = h + obj.h;
    Triangle* newTriangle = new Triangle(newA, newB, newC, newD);
    return* newTriangle;
}

bool Triangle::operator==(const Triangle& rhs)
{
    if(this->a == rhs.a && this->b == rhs.b && this->c == rhs.c && this->h == rhs.h)
    {
        return true;
    }
    return false;
}

bool Triangle::operator!=(const Triangle& rhs)
{
    return !(*this == rhs);
}

istream& operator>>(istream& is, Triangle& input)
{
    is.ignore();
    is >> input.a;
    is.ignore();
    is >> input.b;
    is.ignore();
    is >> input.c;
    is.ignore();
    is >> input.h;
    is.ignore();
    return is;
}

ostream& operator<<(ostream& os, const Triangle& output)
{
    os << "=> " << output.a << " " << output.b << " " << output.c << " " << output.h << endl;
    return os;
}
Triangle::~Triangle()
{
    //dtor
}
