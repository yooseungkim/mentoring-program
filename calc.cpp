
#include "calc.h"
//using namespace std;

Calc::Calc(double var)
    : e(2.718), pi(3.14), myVar(var)
{
    std::cout << "Okay" << std::endl;
}
template <typename T1, typename T2>
double Calc::add(T1 a, T2 b)
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

void Calc::start(void)
{
    int x, y;
    char md;
    int result;
    std::cout << "Enter the what you want to calculate : ";
    std::cin >> x >> md >> y;
    std::cout << "the result : ";
    switch (md)
    {
    case '+':
        result = add(x,y);
        break;
    case '-':
        result = sub(x,y);
        break;
    case '/':
        result = div(x,y);
        break;
    case '*':
        result = mul(x,y);
        break;
    case '%':
        result = mod(x,y);
        break;
    default:
        std::cout << "Please enter correctly!" << std::endl;
        break;
    }

    std::cout << result << std::endl;
    history.push_back(result);


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

void Calc::viewHis(void)
{
    for(int i = 0; i < history.size(); i++)
    {
        std::cout << history[i] << ", ";
    }
}

int Calc::getHisRecent(void)
{
    return history[history.size() - 1];
}