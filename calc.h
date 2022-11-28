#ifndef CALC_H
#define CALC_H
#include <vector>
#include <iostream>

class Calc
{
public:
    Calc(double var = 0);
    double e;
    double pi;
    double myVar;
    std::vector<int> history;

    //int add(int, int);
    template <typename T1, typename T2>
    double add(T1, T2);
    int sub(int, int);
    int mul(int, int);
    int div(int, int);
    int mod(int, int);
    void view(void);
    void start(void);
    double getMyVar(void);
    void setMyVar(double);
    void viewHis(void);
    int getHisRecent(void);

};
#endif