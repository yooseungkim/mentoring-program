#ifndef EXAM_H
#define EXAM_H
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

class Exam
{
public:
    Exam(std::string = "./score.txt");
    std::vector<double> results; 
    double mean;
    double stdev;
    int len;

    double readResult(std::string);


};
#endif