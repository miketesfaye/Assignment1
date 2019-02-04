#include "CrazyRandomSword.h"
#include <cstdlib>

double CrazyRandomSword::hit(double armor) {
    double damage = hitPoints - random(2, (armor * 0.33));

    return damage;
}

