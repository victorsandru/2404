#include "Order.h"

Order::Order(const string& orderName, int orderMenuItem, Location orderDelievered) : name(orderName) {
    menuItem = orderMenuItem;
    deliver = orderDelievered;
}

Location Order::getLocation() const {
    return deliver;
}

void Order::print() const {
    cout << name << " | Menu Item #: " << menuItem << endl;
}
