#include <iostream>
#include "calc.h"
#include "exam.h"

using namespace std;
int main()
{
    Calc c = Calc(3.3);
    c.start();
    c.printHistory();

    cout << endl
         << endl
         << endl;

    Exam e = Exam();

    return 0;
}
