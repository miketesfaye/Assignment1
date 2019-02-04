#ifndef CrazyRandomSword_h
#define CrazyRandomSword_h

#include <string>
#include <cstdlib>
#include "Weapon.h"

class CrazyRandomSword : public Weapon {
public:
    
    CrazyRandomSword() : Weapon("Crazy Random Sword", random(7, 101)) { //Calls Weapon(name, hitpoints) constructor with values CrazyRandomSword and 40.0
    }
    
    virtual ~CrazyRandomSword() {};
    
    virtual double hit(double armor);

private:
    
    int random(int first, int last){
        int randNum;
        srand( time(NULL) );
        randNum=(first+(rand()% (last-first+1)));
        return randNum;
    }
    
};


#endif /* CrazyRandomSword_h */
