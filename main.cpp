#include <iostream>
#include "calc.cpp"

using namespace std;
int main()
{
    Calc c = Calc();
    //c.start();
    // c.setMyVar(1.3);
    // cout << c.getMyVar() << endl;
    // c.setMyVar(2.5);
    // cout << c.getMyVar() << endl;
    //c.start();
    cout << c.add(4,3) << endl;
    cout << c.add(3.5,3.5) << endl;
    cout << c.add(4, 3.4) << endl;

    return 0;
}
