#include <iostream>
#include "calc.h"

//using namespace std; NO USE

int Calc::add(int a, int b)
{
    return (a+b);
}

int Calc::sub(int a, int b)
{
    return (a-b);
}

int Calc::mul(int a, int b)
{
    return a*b;
}

int Calc::div(int a, int b)
{
    return a/b;
}

int Calc::mod(int a, int b)
{
    return a%b;
}

void Calc::view(void)
{
    std::cout << "e: " << this->e << std::endl;
    std::cout << "pi: " << this->pi << std::endl;
}
