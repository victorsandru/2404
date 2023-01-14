#ifndef RESERVATION_H

#include <iostream>
#include <string>
#include <iomanip>
#include "defs.h"

using namespace std;

class Reservation {
    public:
        Reservation(string customerName, Date& checkIn, int duration);

        void setDuration(int);
        void setCustomerName(string);
        void setCheckIn(Date&);

        string getCustomerName();
        int getDuration();
        Date getCheckIn();

        void print();
        bool overlaps(Reservation&);
        bool lessThan(Reservation&);
        // bool lessThan(Date& d);
    private:
        string customerName;
        Date& checkIn;
        int duration;
};
#endif