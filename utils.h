#ifndef UTILS_H
#define UTILS_H
#include "exam.h"
#include "calc.h"
#include <string>

class Utils
{
public:
    Exam exam;
    Calc calc;

    Utils();
    void start();
};

#endif