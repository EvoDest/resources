//  Eevee.h
//  Description: declaration of the Eevee class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Eevee_h
#define Eevee_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"

using namespace std;

class Eevee : public Pokemon
{
public:
    
    Eevee(); //constructor
    
    ~Eevee(); //destrcutor
    
    int skillAndChance(); //skillAndChance generator
    
    void attack(); //attack
    
    void incurDamage(); //incur damage
};
#endif 
