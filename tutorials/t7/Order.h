#ifndef ORDER_H
#define ORDER_H
#include "Location.h"

class Order {
    private:
        const string& name;
        int menuItem;
        Location* deliver;        
    public:
        Order(const string& orderName, int orderMenuItem, Location* orderDelievered);

        Location* getLocation() const;
        void print() const;
};

#endif