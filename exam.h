#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <fstream> //for file input and output
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
class Exam
{
private:
    std::vector<double> results;
    int n;
    double mean;
    double stdev;

    void calculate();

public:
    Exam(std::string path = "./results.txt");
    ~Exam();

    void readResults(std::string);
    void printResults();
    void printStatistics();
    int rank(double);
};

#endif