//  Eevee.cpp
//  Description: implementation of the Eevee class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Eevee.h"

Eevee::Eevee() //constructor
{
    //uses scope resolution operator '::'
    //to initialise member variables
    Pokemon::name="Eevee";
    Pokemon::call="Eev";
    Pokemon::level=27;
    Pokemon::hp=110;
}

Eevee::~Eevee(){} //destrcutor

int Eevee:: skillAndChance()
{
    return rand()%6+1;
}

void Eevee:: attack()
{
    show();
    cout<<name<<" used Quick Attack!"<<endl;
}
  
void Eevee:: incurDamage()
{
    if(skillAndChance()<2)//light damage
    {
        hp-=10;
        cout<<"It's not very effective!"<<endl;
    }
    else if (skillAndChance()==6)//heavy damage
    {
        hp-=20;
        cout<<"A critical hit!"<<endl;
    }
    else //evade attack
    {
        cout<<name<<" evaded the attack!"<<endl;
    }
    cout<<endl;
}


