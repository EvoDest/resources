//  Data.cpp
//  Description: implementation of the Data class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Data.h"

Data::Data()
{
    playerNm[0]=' ';
    playerNm[1]=' ';
    playerNm[2]=' ';
    pl_score=0;
}

Data::~Data(){}

char* Data::getPlayerNm()
{
    return &playerNm[0];
    //return by address
}
 
int Data::getScore()
{
    return pl_score;
    //return by value
}

void Data::set(char* p, int s) //pass by address, pass by value
{
    //Uses first 3 chars of 'P' to create a name
    for(int i=0; i<MAX_SIZE; i++)
    {
        playerNm[i]=p[i];
    }
    pl_score = s;
}

