#include "battle.h"

namespace Gondor {
    void fight(Character& fighter, Character& orc) {
        cout << "In Gondor" << endl;
        orc.takeDamage(fighter.strike() + 1);
        cout << fighter.getName() << " hits " << orc.getName() << " for " << fighter.strike() + 1 << " damage!" << endl;
        fighter.takeDamage(orc.strike() - 1);
        cout << orc.getName() << " hits " << fighter.getName() << " for " << orc.strike() - 1 << " damage!" << endl;
    };
}

namespace Mordor {
    void fight(Character& fighter, Character& orc) {
        cout << "In Mordor" << endl;
        orc.takeDamage(fighter.strike() - 1);
        cout << fighter.getName() << " hits " << orc.getName() << " for " << fighter.strike() - 1 << " damage!" << endl;
        fighter.takeDamage(orc.strike() + 1);
        cout << orc.getName() << " hits " << fighter.getName() << " for " << orc.strike() + 1 << " damage!" << endl;
    };
}