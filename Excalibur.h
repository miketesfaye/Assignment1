#ifndef Excalibur_h
#define Excalibur_h

#include <string>
#include "Weapon.h"

class Excalibur : public Weapon {
public:
    
    Excalibur() : Weapon("Excalibur", 50.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }
    
    virtual ~Excalibur() {};
    
    virtual double hit(double armor);
    
};

#endif /* Excalibur_h */

