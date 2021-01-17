//  ConsoleGame.h
//  Description: Declaration of the ConsolGame class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
// Good OOP programming guidelines:
// -High Cohesion
// -Low Coupling
// -Reusability

#ifndef ConsoleGame_h
#define ConsoleGame_h

#include <stdio.h>
#include <unistd.h>
#include <iostream>

#include "Data.h"
#include "GUI.h"
#include "Logic.h"

using namespace std;

/*
 *    - A Composite Class -
 * Simulates a simple console game
 */

class ConsoleGame
{

public:
    //Constructor
    ConsoleGame();
    
    //Destructor
    ~ConsoleGame();
    
    //Initialises and executes application
    void run();
    
private:
    
    /* User-Defined Data Members */
    
    //Game's GUI Unit (1..1)
    GUI screen; /* composition */
    
    //Game's Logic Unit (1..1)
    Logic processor; /* composition */
    
    //Game's Data Units (0..3)
    //Stores a maximum of 3 high scores
    Data highScores[3]; /* aggregation */
};

#endif
