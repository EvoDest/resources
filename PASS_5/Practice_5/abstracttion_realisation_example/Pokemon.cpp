//  Pokemon.cpp
//  Description: implementation of the Pokemon abstract class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include <stdio.h>
#include "Pokemon.h"

Pokemon::Pokemon(){} //constructor

Pokemon::~Pokemon(){} // destructor (never called)

void Pokemon::speak() //method inherited by realised classes
{
    cout<<call+"!"<<"-"<<call+"!"<<endl;
}

void Pokemon::show() //method inherited by realised classes
{
    speak();
    cout<<name<<" | Level: "<<level<<" | HP: "<<hp<<endl;
}

bool Pokemon::isKnockedOut() //method inherited by realised classes
{
    if(hp<=0)
    {
        cout<<name<<" fainted!"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
