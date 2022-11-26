#ifndef ADD_H
#define ADD_H

class Calc
{
public:
    double e = 2.718;
    double pi = 3.14;

    int add(int, int);
    int sub(int, int);
    int mul(int, int);
    int div(int, int);
    int mod(int, int);
    void view(void);
};
#endif