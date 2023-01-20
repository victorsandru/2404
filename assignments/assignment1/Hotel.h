#ifndef HOTEL_H
#define HOTEL_H
#include "Room.h"

class Hotel {
private:
    Room* roomArray[MAX_ROOMS];
    int roomArrayLength;
public:
    Hotel();
    ~Hotel();

    bool addRoom(int roomNumber, string bedType, int capacity, bool fr);
    bool deleteRoom(int roomNumber);
    bool getRoom(int RoomNumber, Room** room);
    bool addReservation(string customer, string bedType, int capacity, bool fr, Date& date, int duration);
    

    void print();
    void printReservations();
};

#endif