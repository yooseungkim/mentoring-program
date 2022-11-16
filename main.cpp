#include <iostream>
#include "calc.h"

using namespace std;
int main()
{
    int n1 = 3, n2 = 7;
    Calc c = Calc();
    /*
    cout << c.add(n1,n2) << endl;
    cout << c.sub(n1,n2) << endl;
    cout << c.mul(n1,n2) << endl;
    cout << c.div(n1,n2) << endl;
    cout << c.pi << endl;
    */
    c.view();
    return 0;
}
