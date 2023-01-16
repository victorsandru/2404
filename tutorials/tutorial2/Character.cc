#include "Character.h"

Character::Character(const string& n, int m, int d) {
    name = n;
    maxHealth = m;
    damage = d;
    currentHealth = maxHealth;
}

string Character::getName() {
    return name;
}

int Character::getCurrentHealth() {
    return currentHealth;
}

void Character::takeDamage(int incoming) {
    currentHealth -= incoming;
    if(currentHealth < 0) {
        currentHealth = 0;
    }
}

int Character::strike() {  
    return damage;
}

void Character::print() {
    cout << name << " has " << currentHealth << " health points." << endl;
}
