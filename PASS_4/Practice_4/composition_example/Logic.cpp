//  Logic.cpp
//  Description: implementation of the Logic class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
//

#include "Logic.h"

Logic::Logic(){}

Logic::~Logic(){}

void Logic::addnSort(Data* dataArr, Data d) //pass by address , pass by value
{
    for(int i=0; i<MAX_SIZE; i++)
    {
        if(dataArr[i].getScore()==0)
        {
            dataArr[i].set(d.getPlayerNm(),d.getScore());//set Data object
            return;
        }
        else if(d.getScore()>dataArr[i].getScore())
        {
            //Store data to be replaced in a temporary variable
            Data temp;
            temp.set(dataArr[i].getPlayerNm(),dataArr[i].getScore());
            //Insert new data
            dataArr[i].set(d.getPlayerNm(),d.getScore());//set Data object
            //If element to be shifted is not the last element
            if(i!=MAX_SIZE-1)
                dataArr[i+1].set(temp.getPlayerNm(),temp.getScore());
                //move element to the next slot
        }
    }
}

void Logic::increment (int& n) //pass by reference
{
    n+=1; //increment value by 1
}

void Logic::decrement (int& n) //pass by reference
{
    n-=1; //decrement value by 1
}

void Logic::reset (int& n, int newVal) //pass by reference
{
    n=newVal; //assign newVal
}
