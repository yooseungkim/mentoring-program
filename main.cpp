#include <iostream>
#include "calc.h"

using namespace std;
int main()
{
    Calc c = Calc(3.3);

    c.start();

    c.printHistory();

    return 0;
}
