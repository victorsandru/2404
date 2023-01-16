#ifndef RESERVATION_H
#include "Date.h"

using namespace std;

class Reservation {
    public:
        Reservation(string, Date&, int);

        void setDuration(int);
        void setCustomerName(string);
        void setCheckIn(Date&);

        string getCustomerName();
        int getDuration();
        Date getCheckIn();

        void print();
        bool overlaps(Reservation&);
        bool lessThan(Reservation&);
        bool lessThan(Date&);
    private:
        string customerName;
        int duration;
        Date& checkIn;

};
#endif