#ifndef DRIVER_H
#define DRIVER_H
#include "Entity.h"

class Driver: public Entity {
    private:
        static const char code;
        static int nextId;
    public:
        Driver();
        Driver(const string& name, Location location);

        bool isFree() const;
        void print() const;

};
#endif
