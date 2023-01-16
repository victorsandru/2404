#include "Reservation.h"

Reservation::Reservation(string cn, Date& ci, int d) : checkIn(ci) {
    customerName = cn;
    setDuration(d);
}

void Reservation::setDuration(int incDur) {
    if(incDur < 1) {
        duration = 1;
    } else {
        duration = incDur;
    }
}

string Reservation::getCustomerName() { return customerName; }
int Reservation::getDuration() { return duration; }
Date Reservation::getCheckIn() { return checkIn; }

void Reservation::print() {
    cout << "Reservation for " << customerName << " on " << checkIn.toString() << " for " << duration << " days." << endl;
}

bool Reservation::overlaps(Reservation& r) {
    
}

bool Reservation::lessThan(Reservation& r) {
    //if they overlap return false
    if(checkIn.equals(r.checkIn)) return true;
    return checkIn.lessThan(r.checkIn);
}

bool Reservation::lessThan(Date& d) {
    // email prof cuz q makes no sense
}