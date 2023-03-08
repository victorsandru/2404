#ifndef FRANCHISE_H
#define FRANCHISE_H
#include "Entity.h"

class Franchise : public Entity{
    private:
        static const char code;
        static int nextId;
        static const string menu[MENU_ITEMS];
    public:
        Franchise(const string& name);
        Franchise(const string& name, Location location);
        void print() const;

        static void printMenu();
        static const string getMenu(int);
};
#endif