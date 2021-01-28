//  reference_example.cpp
//  Description: Demonstrates the use of references
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
   
    int x = 10;
    
    int& y = x; // y references x
    
    int& z = y; // z references y
    
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<&z<<endl;
    //the variables share the same memory address, why?
    
    x+=1;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    // which values change and why?
    
    y+=1;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    // which values change and why?

    
    z+=1;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    // which values change and why?
    
    
    return 0;
    
} // end of main program block

