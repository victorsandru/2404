#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class Character {
    private:
        string name;
        int maxHealth, currentHealth, damage;
    public:
        Character(const string&, int maxHealth, int damage);

        string getName();
        int getCurrentHealth();

        void takeDamage(int);
        int strike();
        void print();
};



#endif