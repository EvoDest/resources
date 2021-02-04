//  abstraction_realisation_example.cpp
//  Description: demonstrates realisation of the abstract Pokemon class in a program
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include "Pokemon.h"
#include "Pikachu.h"
#include "Squirtle.h"
#include "Eevee.h"

using namespace std;

bool knockOut (Pokemon* a, Pokemon* b);

int main(void)
{
    /*------Pokemon Battle Arena!------*/
    
    //Pokemon opp; //note: abstract class cannot be instantiated
    
    //Choose Contenders - try switching between the Pokemon!
    Squirtle opp1; /*VS*/ Pikachu opp2;
    
    cout<<"----Let's Battle!----"<<endl<<endl;
    cout<<opp1.name<<" VS "<<opp2.name<<endl<<endl;
    cout<<"---------------------"<<endl<<endl;
    
    //Max of 30 rounds
    int rounds=30;
    
    //Battle loops for a maximum of 30 rounds
    while(rounds>0)
    {
        cout<<"-Round "<<(31-rounds)<<"-"<<endl<<endl;
        
        //-----------------------------------------------
        //opp1's turn
        opp1.attack();
        opp2.incurDamage();
        //ends the battle when one opponent is knocked out
        if(knockOut(&opp1,&opp2)==true)
            break;
    
        //-----------------------------------------------
        //opp2's turn
        opp2.attack();
        opp1.incurDamage();
        //ends the battle when one opponent is knocked out
        if(knockOut(&opp1,&opp2)==true)
            break;
        
        //-----------------------------------------------
        
        //decrement rounds
        rounds--;
        //pauses loop for 2 secs
        sleep(2);
    }
    return 0;
}

//Checks both pokemon to see if one is knocked out
//Takes the pointer of any object implementing 'Pokemon'
bool knockOut (Pokemon * a, Pokemon * b)
{
    if(a->isKnockedOut())
    {
        cout<<"* "<<b->name<<" wins!!!"<<endl;
        return true;
    }
    else if(b->isKnockedOut())
    {
        cout<<"* "<<a->name<<" wins!!!"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
