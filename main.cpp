#include <iostream>
#include "calc.cpp"

using namespace std;
int main()
{
    Calc c = Calc();
    cout << "Enter the what you want to calculate : ";
    cin >> x >> md >> y;
    cout << "the result : ";
    switch (md)
    {
    case '+':
        cout << c.add(x, y) << endl;
        break;
    case '-':
        cout << c.sub(x, y) << endl;
        break;
    case '/':
        cout << c.div(x, y) << endl;
        break;
    case '*':
        cout << c.mul(x, y) << endl;
        break;
    case '%':
        cout << c.mod(x, y) << endl;
        break;
    default:
        break;
    }

    return 0;
}
