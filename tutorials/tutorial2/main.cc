#include "battle.h"

int main(int argc, char const *argv[])
{
    string fighterName, orcName;
    int fighterMH, orcMH, fighterD, orcD;
    cout << "Input name, max health and damage for fighter: ";
    cin >> fighterName >>  fighterMH >> fighterD;
    cout << "Input name, max health and damage for orc: ";
    cin >> orcName >> orcMH >> orcD;

    Character fighter = Character(fighterName, fighterMH, fighterD);
    Character orc = Character(orcName, orcMH, orcD);

    fighter.print();
    orc.print();
    Gondor::fight(fighter, orc);
    fighter.print();
    orc.print();
    Mordor::fight(fighter, orc);
    fighter.print();
    orc.print();

    return 0;
}