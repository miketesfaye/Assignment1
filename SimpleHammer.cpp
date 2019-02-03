#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if (armor < 30){
        damage = 0;
    }
    else{
        damage = hitPoints - armor;
    }
    return damage;
}
