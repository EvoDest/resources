//  Logic.h
//  Description: declaration of the Logic class
//  Created by Glenn Lum on 2/3/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
// Good OOP programming guidelines:
// -High Cohesion
// -Low Coupling
// -Reusability

#ifndef Logic_hpp
#define Logic_hpp

#include <stdio.h>
#include <iostream>

#include "Data.h"
#include "sharedBuffer.h"

using namespace std;

/* Logic Unit */
//Handles all data processing activities

class Logic
{
    
public:
    //constructor
    Logic();

    //destructor
    ~Logic();
    
    // Takes a dataArray and a data obj
    // Inserts the data obj into the data array and sorts the array
    // in ascending order by score
    void addnSort(Data* dataArr, Data d);
    
    // Takes an integer argument and increments its value by 1
    void increment (int& n);
    
    // Takes an integer argument and decrements its value by 1
    void decrement (int& n);
    
    // Takes an integer argument and assigns a new value to it
    void reset (int& n, int newVal);
};

#endif
