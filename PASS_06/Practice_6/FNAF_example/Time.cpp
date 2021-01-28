//  Time.cpp
//  Description: implementation of the Time class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Time.h"

Time::Time()
{
    hr= 0;
    min=0;
}

Time::~Time(){}

void Time::increment(int mins)
{
    min+=mins;
    if(min>=60)
    {
        hr++;
        min-=60;
    }
}

int Time::gethr() const
{
    return hr;
}

void Time::set(int h, int m)
{
        hr=h;
        min=m;
}

void Time::show() const
{
    cout<<setw(2)<<setfill('0')<<hr<<":"
    <<setw(2)<<setfill('0')<<min;
}
