#ifndef BATTLE_H
#define BATTLE_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"

using namespace std;
namespace Gondor {
    void fight(Character&, Character&);
}

namespace Mordor {
    void fight(Character&, Character&);

}
#endif 