#include <iostream>

#include "Triangle.h"

using namespace std;

int main()
{
    Triangle one;
    Triangle two;
    cin >> one >> two;
    cout << one;
    cout << "=> " << "+ " << "+ " << "+ " << "+ " << endl;
    cout << (one + two);
    cout << (one != two);
    return 0;
}
