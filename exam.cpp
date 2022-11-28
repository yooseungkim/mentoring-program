#include "exam.h"

Exam::Exam(std::string path)
    : n(0), mean(0), stdev(0)
{
    this->readResults(path);
    this->calculate();
}

Exam::~Exam()
{
}

void Exam::readResults(std::string path)
{
    std::string line;

    std::ifstream input_file(path); // input file stream

    // if (!input_file.is_open()) // check if the path is valid
    // {
    //     std::cerr << "Could not open the file - " << path << std::endl;
    // }
    /////!!!!!!!!
    while (getline(input_file, line)) // read each line (one line at once)
    {
        // if (line == " ")
        // {
        //     break;
        // }
        this->results.push_back(std::stod(line));
    }

    std::cout << "Successfully read the results" << std::endl;

    input_file.close();
}

void Exam::printResults()
{
    std::cout << "Results(" << this->results.size() << ") : ";
    // for (int i = 0; i < this->results.size(); i++)
    // {
    //     std::cout << this->results[i] << ", ";
    // }
    for (double result : this->results)
    {
        std::cout << result << ", ";
    }

    std::cout << std::endl;
}

void Exam::calculate()
{
    this->n = this->results.size();

    double sum = 0;
    for (double result : this->results)
    {
        sum += result;
    }
    this->mean = sum / (double)n;

    double squareSum = 0;
    for (double result : this->results)
    {
        squareSum += pow(result - this->mean, 2);
        // squareSum += (result - this->mean) * (result - this->mean);
    }
    this->stdev = sqrt(squareSum / (double)n);
}

void Exam::printStatistics()
{
    std::cout << "Mean : " << this->mean << std::endl;
    std::cout << "Standard Deviation : " << this->stdev << std::endl;
}

int Exam::rank(double score)
{
    double z = (score - this->mean) / this->stdev;                // z 변환
    double percentage = 0.5 - 0.5 * (std::erf(z / std::sqrt(2))); //상위 %

    int ranking = (int)(this->n * percentage); // top rank = 1

    std::cout << "Rank : " << ranking << " (" << std::setprecision(4) << percentage * 100 << "%)" << std::endl;

    return ranking;
}
