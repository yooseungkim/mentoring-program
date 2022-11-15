#include <iostream>
#include "calc.h"

using namespace std;

int main()
{
    int x = 3;
    int y = 5;
    Calc myCalc = Calc();
    cout << myCalc.add(x, y) << endl;
    myCalc.swap(x, y);
    cout << "swapped" << endl;
    cout << myCalc.sub(x, y) << endl;

    int &a = x; // a is an reference to `x`
    cout << "making alias of x " << myCalc.mul(a, y) << endl;
    x = 40;
    cout << "after changing x " << myCalc.mul(a, y) << endl;
    a = 10;
    cout << "after changing a " << myCalc.mul(x, y) << endl;
    return 0;
}
