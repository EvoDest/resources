//  Time.h
//  Declaration of the Time class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Time_h
#define Time_h

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*
 * A minimal Time class
 * Essential operations only!
*/

class Time
{
 
public:
    
    Time();
    ~Time();
    
    int gethr() const;
    void set(int h, int m);
    void increment(int mins);
    void show()const;
    
private:
    
    int hr;
    int min;
};

#endif
