#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage;
    if (armor < 30){
        damage = hitPoints - armor;
    }
    else{
        damage = hitPoints;
    }
    return damage;
}
