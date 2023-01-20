#include "Hotel.h"

Hotel::Hotel() {
    roomArrayLength = 0;
}

Hotel::~Hotel() {
    for(int i = 0; i < roomArrayLength; ++i) {
        delete roomArray[i];
    }
}

bool Hotel::addRoom(int roomNumber, string bedType, int capacity, bool fr) {
    if(roomArrayLength == MAX_ROOMS) return false;
    Room *newRoom = new Room(roomNumber, bedType, capacity, fr);
    roomArray[roomArrayLength] = newRoom;
    roomArrayLength++;
    return true;
}

bool Hotel::deleteRoom(int roomNumber) {
    if(roomArrayLength == 1) {
        delete roomArray[0];
        roomArrayLength--;
        return true;
    }

    int index = -1;
    for(int i = 0; i < roomArrayLength; ++i) {
        if(roomNumber == roomArray[i]->getRoomNumber()) {
            index = i;
            break;
        }
    }
    if(index == -1) return false;
    for(int j = index; j < roomArrayLength - 1; ++j) {
        roomArray[j] = roomArray[j + 1];
    }
    
    roomArrayLength--;
    return true;
}

//test this
bool Hotel::getRoom(int roomNumber, Room** room) {
    for(int i = 0; i < roomArrayLength; ++i) {
        if(roomArray[i]->getRoomNumber() == roomNumber) {
            room = &roomArray[i];
            return true;
        }
    }
    return false;
}

//test this
bool Hotel::addReservation(string customer, string bedType, int capacity, bool fr, Date& date, int duration) {
    for(int i = 0; i < roomArrayLength; ++i) {
        if(roomArray[i]->isMatch(bedType, capacity, fr)) {
            return roomArray[i]->addReservation(customer, date, duration);
        }
    }
    return false;
}

void Hotel::print() {
    for(int i = 0; i < roomArrayLength; ++i) {
        roomArray[i]->print();
    }
}

//test this
void Hotel::printReservations() {
    for(int i = 0; i < roomArrayLength; ++i) {
        roomArray[i]->printReservations();
    }
}
