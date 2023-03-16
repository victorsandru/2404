#include "Franchise.h"

const char Franchise::code = 'F';
int Franchise::nextId = 0;
const string Franchise::menu[MENU_ITEMS] = {"1. Large Poutine", "2. Medium Poutine", "3. Small Poutine"};

Franchise::Franchise() : Entity(code, ++nextId, "Shawarma", Location(0, 0)) {}

Franchise::~Franchise() {
    
}

Franchise::Franchise(const string& name, Location location) : Entity(code, ++nextId, name, location) {};

const string Franchise::getMenu(int index) {
    if(index > MENU_ITEMS || index < 0) return "unknown menu item";
    return menu[index];
}

void Franchise::print() const {
    cout << "FRANCHISE | Name: " << name << " | Id: " << id << " | Number of orders: " << getNumOrders() << " | Location: ";
    location.print();
}

void Franchise::printMenu() {
    cout << "Menu: ";
    for(int i = 0; i < MENU_ITEMS; i++) {
        cout << menu[i] << ", ";
    }
    cout << endl;
}