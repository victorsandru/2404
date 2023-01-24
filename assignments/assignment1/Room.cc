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

bool Room::addReservation(string customerName, Date& d, int duration) {
    int index;
    if(resArrayLength == MAX_RES) return false;
    
    Reservation *newRes = new Reservation(customerName, d, duration);
    for(int i = 0; i < resArrayLength; ++i) {
        if(resArray[i]->overlaps(*newRes)) {
            delete newRes;
            return false;
        }
    }
    if(resArrayLength == 0) {
        resArray[resArrayLength] = newRes;
        resArrayLength++;
        return true;
    }
    for(int j = 0; j < resArrayLength; ++j) {
        if(newRes->lessThan(*resArray[j])) {
            index = j;
            break;
        } else {
            index = j + 1;
        }
    }

    for(int k = resArrayLength + 1; k >= index; --k) {
        resArray[k] = resArray[k - 1];
    }

    resArray[index] = newRes;
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
    cout << endl;
}

// can only do this when sorted is done
// void Room::updateReservations(Date& currentDate) {
//     for(int i = 0; i < resArrayLength; ++i) {
//         if(resArray[i]->lessThan(currentDate)) {

//         }
//     }
// }
