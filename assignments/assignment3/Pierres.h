#ifndef PIERRES_H
#define PIERRES_H
#include "Franchise.h"
#include "Driver.h"
#include <vector>

class Pierres {
    private:
        vector<Driver*> drivers;
        vector<Franchise*> franchises;
    public:
        Pierres();
        ~Pierres();

        void addDriver(const string& name, Location location);
        void addFranchise(const string& name, Location location);

        void takeOrder(const string& customerName, int menuItem, Location location);
        void driverPickup(const string& franchiseId, int numOrders);
        void driverDeliver(const string& driverId, int numOrders);

        void printFranchises() const;
        void printDrivers() const;
};
#endif