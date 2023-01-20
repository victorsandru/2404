#include "Room.h"

Room::Room(int rm, string bt, int c, bool hf) {
    roomNumber = rm;
    bedType = bt;
    capacity = c; 
    hasFridge = hf;
    resArrayLength = 0;
}

Room::~Room() {
    for(int i = 0; i < resArrayLength; ++i) {
        delete resArray[i];
    }
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

//test this
bool Room::addReservation(string customerName, Date& d, int duration) {
    if(resArrayLength == MAX_RES) return false;
    
    Reservation *newRes = new Reservation(customerName, d, duration);
    for(int i = 0; i < resArrayLength; ++i) {
        if(resArray[i]->overlaps(*newRes)) {
            delete newRes;
            return false;
        }
    }
    resArray[resArrayLength] = newRes;
    resArrayLength++;
    return true;
}   

void Room::print() {
    cout << "Room number: " << roomNumber << " | bed type: " << bedType << " | capacity: " << capacity << " | fridge: " << hasFridge << " | reservations: " << resArrayLength << endl;
}

void Room::printReservations() {
    print();
    for(int i = 0; i < resArrayLength; ++i) {
        resArray[i]->print();
    }
}