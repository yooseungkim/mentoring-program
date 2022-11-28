#include <iostream>
// #include "calc.h"
//using namespace std; NO USE




class Calc
{
private: //안써도됨
    double e = 2.718;
    double pi = 3.14;
    double myVar = 0;

    // int add(int, int);
    // double add(double, double);
    int sub(int, int);
    int mul(int, int);
    int div(int, int);
    int mod(int, int);


public:
    void view(void);
    void start(void);
    double getMyVar(void);
    void setMyVar(double);
    template <typename T1, typename T2>
    double add(T1 a, T2 b)
    {
        return (a+b);
    }
    //double add(double, double);
};

// T Calc::add(T a, T b)
// {
//     //std::cout << "integer" << std::endl;
//     return (a+b);
// }

/*
double Calc::add(double a, double b)
{
    std::cout << "double" << std::endl;
    return (a+b);
}
*/

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

void Calc::start(void)
{
    int x, y;
    char md;
    std::cout << "Enter the what you want to calculate : ";
    std::cin >> x >> md >> y;
    std::cout << "the result : ";
    switch (md)
    {
    case '+':
        std::cout << this->add(x,y) << std::endl;
        break;
    case '-':
        std::cout << this->sub(x,y) << std::endl;
        break;
    case '/':
        std::cout << this->div(x,y) << std::endl;
        break;
    case '*':
        std::cout << this->mul(x,y) << std::endl;
        break;
    case '%':
        std::cout << this->mod(x,y) << std::endl;
        break;
    default:
        std::cout << "Please enter correctly!" << std::endl;
        break;
    }
    char ans;
    std::cout << "Do you want to use again? (Enter Y or N)" << std::endl;
    std::cin >> ans;
    if(ans == 'Y')
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