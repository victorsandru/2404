#include "Driver.h"
const char Driver::code = 'D';
int Driver::nextId = 999;

Driver::Driver(const string& name) : Entity(code, ++nextId, name, Location(0, 0)) {}


Driver::Driver(const string& name, Location location) : Entity(code, ++nextId, name, location) {}

bool Driver::isFree() const {
    return getNumOrders() == 0;
}

void Driver::print() const {
    cout << "DRIVER | Name: " << name << " | Id: " << id << " | Location: ";
    location.print();
}