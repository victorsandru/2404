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
    Date lastDay = checkIn;
    Date rLastDay = r.checkIn;
    rLastDay.addDays(r.duration);
    lastDay.addDays(duration);

    return (checkIn.lessThan(rLastDay) && r.checkIn.lessThan(lastDay));
}

bool Reservation::lessThan(Reservation& r) {
    if(overlaps(r) == 1) return 0;
    if(checkIn.equals(r.checkIn)) return true;
    return checkIn.lessThan(r.checkIn);
}

bool Reservation::lessThan(Date& d) {
    Date lastDay = checkIn;
    lastDay.addDays(duration);
    return lastDay.lessThan(d);
}