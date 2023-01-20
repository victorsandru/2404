#include <random>
#include <sstream>
#include "Hotel.h"

int main(int argc, char const *argv[])
{
    /* code */
    Date date1 = Date(2023, 12, 3);
    Date date2 = Date(2023, 12, 15);
    Reservation r1 = Reservation("victor", date1, 4);
    Reservation r2 = Reservation("eaaa", date2, 2);

    // Room room1 = Room(2, "double", 2, 1);
    // Room room2 = Room(2, "single", 1, 0);
    // cout << room1.addReservation("victor", date1, 4) << endl;
    // room1.printReservations();

    Hotel hotel1 = Hotel();
    hotel1.addRoom(2, "double", 2, 1);
    hotel1.addRoom(3, "double", 2, 1);
    hotel1.addRoom(4, "double", 2, 1);
    hotel1.deleteRoom(5);
    hotel1.print();


    return 0;

    
}

