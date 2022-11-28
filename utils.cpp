#include "utils.h"

Utils::Utils()
{
    this->exam = Exam();
    this->calc = Calc(0);
}

void Utils::start()
{
    while (true)
    {
        std::cout << "===========================" << std::endl;
        std::cout << "What do you want to use" << std::endl
                  << "(1) Calculate" << std::endl
                  << "(2) Print calculation history" << std::endl
                  << "(3) Print exam scores" << std::endl
                  << "(4) Print statistics of the exam" << std::endl
                  << "(5) Calculate rank of the score" << std::endl
                  << "(6) Quit" << std::endl
                  << "Your Input >> ";

        int ans;
        std::cin >> ans;

        switch (ans)
        {
        case 1:
            this->calc.start();
            break;
        case 2:
            this->calc.printHistory();
            break;
        case 3:
            this->exam.printResults();
            break;
        case 4:
            this->exam.printStatistics();
            break;
        case 5:
            double score;
            std::cout << "Your score >> ";
            std::cin >> score;
            this->exam.rank(score);
            break;
        case 6:
            std::cout << "Quiting..." << std::endl;
            return;
        default:
            std::cout << "Enter correct input" << std::endl;
        }
    }
}