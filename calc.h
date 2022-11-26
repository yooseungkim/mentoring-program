#ifndef ADD_H
#define ADD_H

class Calc
{
    double e = 2.718;
    double pi = 3.14;
    double myVar = 0;

    template <typename T1, typename T2> // two variables can have different types
    double add(T1, T2);                 // change to double
    template <typename T1, typename T2>
    double sub(T1, T2); // change to double
    template <typename T1, typename T2>
    double mul(T1, T2); // change to double
    double div(double, double);
    int mod(double, double);

public:
    void view();
    void start();
    double getMyVar();
    void setMyVar(double);
};

#endif