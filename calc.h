#ifndef ADD_H
#define ADD_H

#include <vector>
class Calc
{
    double e; // init value is not given here
    double pi;
    double myVar;
    std::vector<double> history; // save results

    template <typename T1, typename T2> // two variables can have different types
    double add(T1, T2);                 // change to double
    template <typename T1, typename T2>
    double sub(T1, T2); // change to double
    template <typename T1, typename T2>
    double mul(T1, T2); // change to double
    double div(double, double);
    int mod(double, double);

public:
    // constructor with default value
    Calc(double var = 0);
    // destructor
    ~Calc();
    void view();
    void start();
    double getMyVar();
    void setMyVar(double);
    void printHistory();

    double last; // save latest result
};

#endif