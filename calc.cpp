#include "calc.h"
// using namespace std; NO USE

Calc::Calc(double var)
    : e(2.718), pi(3.14), myVar(var), last(0) // initalize attributes
{
    // this->e = 2.718
    // this->pi = 3.14
    // this->myVar = var;
    // std::cout << "New Calculator" << std::endl;
}

Calc::~Calc()
{
    // std::cout << "Calculator Destructed" << std::endl;
}
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
    std::cout << "========================================" << std::endl;
    std::cout << "Enter the what you want to calculate : ";
    std::cin >> x >> md >> y;
    std::cout << "the result : ";
    double result;
    switch (md)
    {
    case '+':
        result = this->add(x, y);
        break;
    case '-':
        result = this->sub(x, y);
        break;
    case '/':
        result = this->div(x, y);
        break;
    case '*':
        result = this->mul(x, y);
        break;
    case '%':
        result = this->mod(x, y);
        break;
    default:
        std::cout << "Please enter correctly!" << std::endl;
        break;
    }
    std::cout << "Result : " << result << std::endl;

    this->history.push_back(result); // add to history
    this->last = result;             // save the last result

    char ans;
    std::cout << "Do you want to use again? (Enter Y/y or N)" << std::endl;
    std::cin >> ans;
    if (ans == 'Y' or ans == 'y')
    {
        this->start();
    }
    else
    {
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

void Calc::printHistory()
{
    // for (int i = 0; i < this->history.size(); i++)
    // {
    //     std::cout << this->history[i] << ", ";
    // }
    std::cout << "History : ";
    for (double res : this->history)
    {
        std::cout << res << ", ";
    }
    std::cout << std::endl;
}
