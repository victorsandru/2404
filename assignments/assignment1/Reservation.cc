#include "Reservation.h"

Reservation::Reservation(string name, Date& checkedIn, int length) {}




// void Reservation::setCheckIn(Date& dayCheckIn) {
//     checkIn = dayCheckIn;
// }

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