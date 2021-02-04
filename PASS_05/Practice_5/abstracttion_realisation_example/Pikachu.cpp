//  Pikachu.cpp
//  Description: implementationo of the Pikachu class
//  Created by Glenn Lum on 19/2/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Pikachu.h"

Pikachu::Pikachu() //constructor
{
    //uses scope resolution operator '::'
    //to initialise member variables
    Pokemon::name="Pikachu";
    Pokemon::call="Pika";
    Pokemon::level=25;
    Pokemon::hp=100;
}

Pikachu::~Pikachu(){} //destrcutor

int Pikachu:: skillAndChance()
{
    return rand()%6+1;
}

void Pikachu:: attack()
{
    show();
    cout<<name<<" used Thunderbolt!"<<endl;
}
  
void Pikachu::incurDamage()
{
    if(skillAndChance()<3) //light damage
    {
        hp-=10;
        cout<<"It's not very effective!"<<endl;
    }
    else if (skillAndChance()==5) //heavy damage
    {
        hp-=20;
        cout<<"A critical hit!"<<endl;
    }
    else if(skillAndChance()==6) //special move
    {
        surf();
    }
    else //evade attack
    {
        cout<<name<<" evaded the attack!"<<endl;
    }
    cout<<endl;
}

void Pikachu::surf()
{
    hp+=15; //recover
    cout<<name<<" countered with Surf! +15HP!"<<endl;
}


