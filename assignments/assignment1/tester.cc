#include <random>
#include <sstream>
#include "defs.h"

int main(int argc, char const *argv[])
{
    /* code */
    Date date1 = Date(2023, 12, 3);
    Date date2 = Date(2023, 6, 2);
    Reservation r1 = Reservation("victor", date1, 4);
    r1.print();

    return 0;
}
