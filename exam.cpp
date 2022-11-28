#include "exam.h"

Exam::Exam(std::string path)
{
    readResult(path);
    for(int i = 0; i < results.size(); i++)
    {
        std::cout << results[i] << ", "; 
    }
}



double Exam::readResult(std::string path)
{
    std::string line;
    std::ifstream input_file(path);
    while(getline(input_file, line))
    {
        this->results.push_back(std::stod(line));
    }
    input_file.close();
    std::cout << "Done" << std::endl;
    return 0;
}