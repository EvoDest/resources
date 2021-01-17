//  Pikachu.h
//  Description: declaration of the Pikachu class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Pikachu_h
#define Pikachu_h

#include <stdio.h>
#include <iostream>
#include "Pokemon.h"
#include "HM03.h"

using namespace std;

//multiple inheritance
class Pikachu : public Pokemon, public HM03
{
    
public:
    
    Pikachu(); //constructor
    
    ~Pikachu(); //destrcutor
    
    int skillAndChance(); //skillAndChance generator
    
    void attack(); //attack
    
    void incurDamage(); //incur damage
    
    void surf(); //HM03-Surf
};
#endif 
