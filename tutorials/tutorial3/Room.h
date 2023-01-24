#ifndef ROOM_H
#include "Reservation.h"

class Room {
private:
    int roomNumber, capacity, resArrayLength;
    string bedType;
    bool hasFridge;
    Reservation* resArray[MAX_RES];

public:
    Room(int roomNumber, string bedType, int capacity, bool hasFridge);
    ~Room();

    int getRoomNumber();

    bool isMatch(string bt, int cap, bool f);
    bool lessThan(Room& r);
    bool addReservation(string customerName, Date& d, int duration);
    void printReservations();
    
    void print();
};


#endif