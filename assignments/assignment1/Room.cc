#include "Room.h"

Room::Room(int rm, string bt, int c, bool hf) {
    roomNumber = rm;
    bedType = bt;
    capacity = c; 
    hasFridge = hf;
    resArrayLength = 0;
}

int Room::getRoomNumber() {
    return roomNumber;
}

bool Room::isMatch(string bedT, int cap, bool f) {
    if(bedT.compare(bedType) == 0 && capacity >= cap) {
        return !f || hasFridge;
    }
    return false;
}

bool Room::lessThan(Room& r) {
    return roomNumber < r.roomNumber;
}

bool Room::addReservation(string customerName, Date& d, int duration) {
    if(resArrayLength == MAX_RES) return false;
    while()
}