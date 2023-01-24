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
    int index;
    if(roomArrayLength == MAX_ROOMS) return false;
    Room *newRoom = new Room(roomNumber, bedType, capacity, fr);
    if(roomArrayLength == 0) {
        roomArray[roomArrayLength] = newRoom;
        roomArrayLength++;
        return true;
    }
    for(int j = 0; j < roomArrayLength; ++j) {
        if(newRoom->lessThan(*roomArray[j])) {
            index = j;
            break;
        } else {
            index = j + 1;
        }
    }

    for(int k = roomArrayLength + 1; k >= index; --k) {
        roomArray[k] = roomArray[k - 1];
    }

    roomArray[index] = newRoom;
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
    delete roomArray[index];
    for(int j = index; j < roomArrayLength - 1; ++j) {
        roomArray[j] = roomArray[j + 1];
    }
    
    roomArrayLength--;
    return true;
}

bool Hotel::getRoom(int roomNumber, Room** room) {
    for(int i = 0; i < roomArrayLength; ++i) {
        if(roomArray[i]->getRoomNumber() == roomNumber) {
            *room = roomArray[i];
            return true;
        }
    }
    return false;
}

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

void Hotel::printReservations() {
    for(int i = 0; i < roomArrayLength; ++i) {
        roomArray[i]->printReservations();
    }
}

// can only do this when sorted is done
// void Hotel::updateReservations(Date& currentDate) {
//     for(int i = 0; i < roomArrayLength; ++i) {
//         if(roomArray.)
//     }
// }
