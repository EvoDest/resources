//  GUI.h
//  Description: declaration of the GUI class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
// Good OOP programming guidelines:
// -High Cohesion
// -Low Coupling
// -Reusability

#ifndef GUI_h
#define GUI_h

#include <stdio.h>
#include <iostream>

#include "Data.h"
#include "sharedBuffer.h"

using namespace std;

/* GUI Unit */
//Creates the game's user interface

class GUI
{
    
public:
    //Constructor
    GUI();
    
    //Destructor
    ~GUI();
    
    //Takes in a Data array
    //Displays graphics for high score
    void showHiScore(Data* dataArr);
    
    //Display current score
    void showCurrScore();
    
    //Display game over
    void showGameOver();
    
    //Display interface for user to enter nickname
    void showEnterNickName();
    
    //Display graphics for start screen
    void showStartScreen();
    
    //Display various graphics for coin on left
    void showCoinLeft();
    void takeCoinLeft();
    void noCoinLeft();
    
    //Display various graphics for coin on right
    void showCoinRight();
    void takeCoinRight();
    void noCoinRight();
    
    //Display various graphics for coin above
    void showCoinAbove();
    void takeCoinAbove();
    void noCoinAbove();
};

#endif
