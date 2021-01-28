//  Squirtle.h
//  Description: declaration of the Squirtle class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Squirtle_h
#define Squirtle_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"

using namespace std;

class Squirtle : public Pokemon
{
public:
    
    Squirtle(); //constructor
    
    ~Squirtle(); //destrcutor
    
    int skillAndChance(); //skillAndChance generator
    
    void attack(); //attack
    
    void incurDamage(); //incur damage
};
#endif
