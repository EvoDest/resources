//  Security_System.h
//  Description: declaration of the security system
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Security_System_h
#define Security_System_h

#include <stdio.h>
#include <iostream>

#include "Time.h"
#include "Event.h"
#include "freddyGenerator.h"

#include <map>   //STL Map
#include <queue> //STL Queue

class Security_System
{
    
public:
    
    Security_System();
    ~Security_System();
    
    void run();        //Initialises and executes the system
    void display();    //Shows system stats
    void menu();       //Displays a simple menu
    void selector();   //Performs operations selected by user (the business end of the program)
    void deplete();    //Checks game state and introduces power penalties
    
private:
    
    int power;
    bool door;
    bool light;
    Time time;
    
    /* A map of queues ! */
    //Simulates a 4-camera video feed
    map<int,queue<string>> event_feed;
    
};


#endif
