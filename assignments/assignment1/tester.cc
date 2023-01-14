#include <iostream>
#include <random>
#include <sstream>
#include "defs.h"

int main(int argc, char const *argv[])
{
    /* code */
    Date date1(2023, 12, 3);
    Date date2(2023, 6, 2);
    bool eqal = date1.lessThan(date2);
    // std::cout << eqal << endl;
    date1.addDays(30);
    std::cout << date1.getDay() << endl;
    std::cout << date1.getMonth() << endl;
    std::cout << date1.getYear() << endl;

    return 0;
}
