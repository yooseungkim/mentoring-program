#include <iostream>
#include "calc.h"

using namespace std;

int main()
{
    Calc myCalc = Calc();
    cout << myCalc.add(3, 5) << endl;
    cout << myCalc.sub(5, 3) << endl;
    cout << myCalc.mul(3, 5) << endl;
    cout << myCalc.div(10, 3) << endl;
    cout << "hello world" << endl;
    cout << 1+2 << endl;
    return 0;
}
