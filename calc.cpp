#include <iostream>
#include "calc.h"
// using namespace std; NO USE
template <typename T1, typename T2>
double Calc::add(T1 a, T2 b)
{
    return (a + b);
}

template <typename T1, typename T2>
double Calc::sub(T1 a, T2 b)
{
    return (a - b);
}

template <typename T1, typename T2>
double Calc::mul(T1 a, T2 b)
{
    return a * b;
}

double Calc::div(double a, double b)
{
    return a / b;
}

int Calc::mod(double a, double b)
{
    return ((int)a) % ((int)b); // do explicit typecasting
}

void Calc::view(void)
{
    std::cout << "e: " << this->e << std::endl;
    std::cout << "pi: " << this->pi << std::endl;
}

void Calc::start(void)
{
    double x, y; // get all numbers as double (not integer)
    char md;
    std::cout << "Enter the what you want to calculate : ";
    std::cin >> x >> md >> y;
    std::cout << "the result : ";
    switch (md)
    {
    case '+':
        std::cout << this->add(x, y) << std::endl;
        break;
    case '-':
        std::cout << this->sub(x, y) << std::endl;
        break;
    case '/':
        std::cout << this->div(x, y) << std::endl;
        break;
    case '*':
        std::cout << this->mul(x, y) << std::endl;
        break;
    case '%':
        std::cout << this->mod(x, y) << std::endl;
        break;
    default:
        std::cout << "Please enter correctly!" << std::endl;
        break;
    }
    char ans;
    std::cout << "Do you want to use again? (Enter Y or N)" << std::endl;
    std::cin >> ans;
    if (ans == 'Y')
    {
        this->start();
    }
    else
    {
        std::cout << "Thank you" << std::endl;
        return;
    }
}

double Calc::getMyVar(void)
{
    return this->myVar;
}

void Calc::setMyVar(double newVar)
{
    this->myVar = newVar;
}