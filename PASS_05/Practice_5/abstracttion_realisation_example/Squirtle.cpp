//  Squirtle.cpp
//  Description: implementation of the Squirtle class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Squirtle.h"

Squirtle::Squirtle() //constructor
{
    //uses scope resolution operator '::'
    //to initialise member variables
    Pokemon::name="Squirtle";
    Pokemon::call="Squirt";
    Pokemon::level=25;
    Pokemon::hp=100;
}

Squirtle::~Squirtle(){}//destrcutor

int Squirtle:: skillAndChance()
{
    return rand()%6+1;
}

void Squirtle:: attack()
{
    show();
    cout<<name<<" used Water Gun!"<<endl;
}
  
void Squirtle:: incurDamage()
{
    if(skillAndChance()<4)//light damage
    {
        hp-=10;
        cout<<"It's not very effective!"<<endl;
    }
    else if (skillAndChance()==4)//heavy damage
    {
        hp-=20;//heavy damage
        cout<<"A critical hit!"<<endl;
    }
    else //evade attack
    {
        cout<<name<<" evaded the attack!"<<endl;
    }
    cout<<endl;
}


