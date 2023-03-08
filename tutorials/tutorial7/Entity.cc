#include "Entity.h"

Entity::Entity(char type, int num, const string& name, Location location) : name(name), id(name) {
    location = location;
    orders = new Queue();
}

Entity::~Entity() {
    delete orders;
}

void Entity::setLocation(Location newLocation) {
    location = newLocation;
}

int Entity::getNumOrders() const{
    return orders->size();
}

Location* Entity::getLocation() {
    return &location;
}

Order* Entity::getNextOrder() {
    return orders->popFirst();
}

void Entity::addOrder(Order* order) {
    orders->addLast(order);
}

bool Entity::equals(const string& id2) {
    return id2 == id;
}

void Entity::print(){
    cout << "Name: " << name << " | Id: " << id << " | Location: ";
    location.print();
}