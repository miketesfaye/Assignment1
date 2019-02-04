#include "Excalibur.h"
#include <cstdlib>

double Excalibur::hit(double armor) {
    double damage = hitPoints - (armor * 0.50);
    
    return damage;
}
