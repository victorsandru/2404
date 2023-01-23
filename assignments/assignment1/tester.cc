#include <random>
#include <sstream>
#include "Hotel.h"

int main(int argc, char const *argv[])
{
    /* code */
    Date date1 = Date(2023, 9, 30);
    Date date2 = Date(2023, 9, 31);
    Date date3 = Date(2022, 1, 10);
    Reservation r1 = Reservation("victor", date1, 3);
    Reservation r2 = Reservation("eaaa", date2, 3);
    Room* room1;
    Room* room2;


    // Room room1 = Room(2, "double", 2, 1);
    // Room room2 = Room(2, "single", 1, 0);
    // cout << room1.addReservation("victor", date1, 4) << endl;
    // room1.printReservations();
    Hotel hotel1 = Hotel();
    hotel1.addRoom(2, "single", 2, 1);
    hotel1.addRoom(3, "double", 2, 1);
    hotel1.addRoom(4, "double", 2, 0);
    hotel1.addReservation("bill", "single", 1, 1, date3, 3);
    hotel1.addReservation("alice", "single", 1, 0, date1, 4);
    // hotel1.addReservation("jitt", "double", 1, 0, date2, 2);
    hotel1.getRoom(2, &room1);
    // hotel1.getRoom(3, &room2);
    room1->printReservations();
    // room2->printReservations();
    // hotel1.addReservation("bill", "single", 1, 1, date3, 3);
    // hotel1.printReservations();

    return 0;
}
