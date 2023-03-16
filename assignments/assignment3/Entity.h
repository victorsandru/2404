#ifndef ENTITY_H
#define ENTITY_H
#include "Queue.h"

class Entity {
	public:
		Entity(const char, const int, const string&, const Location&);
		~Entity();
		void setLocation(Location);

		Order* getNextOrder();
		int getNumOrders() const;
		void addOrder(Order* order);
		bool equals(const string&);
		Location* getLocation();

		void print() const;
	
	protected:
		const string id;
		const string name;
		Location location;
		Queue* orders;
};
#endif