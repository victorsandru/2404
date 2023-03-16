#include "Pierres.h"

Pierres::Pierres() {}

Pierres::~Pierres() {
    for(Driver* d : drivers) {
        delete d;
    }
    drivers.clear();
    for(Franchise* f : franchises) {
        delete f;
    }
    franchises.clear();
}

void Pierres::addDriver(const string& name, Location location) {
    drivers.push_back(new Driver(name, location));
}

void Pierres::addFranchise(const string& name, Location location) {
    franchises.push_back(new Franchise(name, location));
}

void Pierres::takeOrder(const string& customerName, int menuItem, Location location) {
    if(franchises.size() == 0) {
        cout << "no franchises" << endl;
        return;
    }
    int closest = 99999999;
    Franchise* closeFranchise;
    for(Franchise* f : franchises) {
        if(f->getLocation()->getDistance(location) < closest) {
            closeFranchise = f;
        }
    }
    Order* order = new Order(customerName, menuItem, &location);
    closeFranchise->addOrder(order);
}

void Pierres::driverPickup(const string& franchiseId, int numOrders) {
    if(franchises.size() == 0) {
        cout << "no franchises" << endl;
        return;
    }
    Franchise* franchise = NULL;
    for(Franchise* f : franchises) {
        if(f->equals(franchiseId)) {
            franchise = f;
        }
    }
    if(franchise == NULL) {
        cout << "no franchise with name" << endl;
        return;
    }
    Driver* closeDriver = NULL;
    int closest = 99999999;
    for(Driver* d : drivers) {
        if(d->isFree() && d->getLocation()->getDistance(*franchise->getLocation()) < closest) {
            closeDriver = d;
        }
    }
    if(closeDriver == NULL) {
        cout << "no drivers available" << endl;
        return;
    }
    closeDriver->setLocation(*franchise->getLocation());
    if(numOrders > franchise->getNumOrders()) numOrders = franchise->getNumOrders();
    for(int i = 0; i < numOrders; i++) {
        closeDriver->addOrder(franchise->getNextOrder());
    }
}

void Pierres::driverDeliver(const string& driverId, int numOrders) {
    if(drivers.size() == 0) {
        cout << "no drivers" << endl;
        return;
    }
    Driver* driver = NULL;
    for(Driver* d : drivers) {
        if(d->equals(driverId)) {
            driver = d;
        }
    }
    if(driver == NULL) {
        cout << "no driver with name" << endl;
        return;
    }
    if(numOrders > driver->getNumOrders()) numOrders = driver->getNumOrders();
    for(int i = 0; i < numOrders; i++) {
        Order* orderD = driver->getNextOrder();
        driver->setLocation(*orderD->getLocation());
        cout << "Delivering: ";
        orderD->print();
        delete orderD;
    }
}

void Pierres::printFranchises() const {
    for(Franchise* f : franchises) {
        f->print();
    }
}

void Pierres::printDrivers() const {
    cout << drivers.size() << endl;
    for(Driver* d : drivers) {
        d->print();
    }
}