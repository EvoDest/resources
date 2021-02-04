//  Data.h
//  Description: declaration of the Data class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
// Good OOP programming guidelines:
// -High Cohesion
// -Low Coupling
// -Reusability

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>

#include "sharedBuffer.h"

using namespace std;

/* Data Unit */
//Stores data created by the game

class Data
{
public:
    //Constructor
    Data();
    //Destructor
    ~Data();
    
    //Returns a player's name
    char* getPlayerNm();
    
    //Returns a player's score
    int getScore();
    
    //Takes a char array and integer
    //Modifies the data object's player name and score
    void set(char* p, int s);
    
private:
    char playerNm[3]; //stores a player's name (Max 3-chars)
    int pl_score;     //stores player's score
};
#endif
