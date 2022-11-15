
#include "calc.h"

Calc::Calc()
{
}
int Calc::add(int x, int y)
{
    return x + y;
}

void Calc::swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int Calc::sub(int x, int y)
{
    return x - y;
}

int Calc::mul(int x, int y)
{
    return x * y;
}

double Calc::div(int x, int y)
{
    return x / y;
}
