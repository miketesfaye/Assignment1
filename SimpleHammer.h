#ifndef SimpleHammer_h
#define SimpleHammer_h

#include <string>
#include "Weapon.h"

class SimpleHammer : public Weapon {
public:
    
    SimpleHammer() : Weapon("Simple Hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }
    
    virtual ~SimpleHammer() {};
    
    virtual double hit(double armor);
    
};

#endif /* SimpleHammer_h */
