//  pointer_example.cpp
//  Description: Demonstrates the use of pointers
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;


int main(void)
{
    //(1) pointer to stack memory (what is stack memory?)
    
    int x = 10;
    
    int* p; //declare pointer
    
    p=&x; //initialise pointer
    
    cout<<x<<endl;      //prints value stored in x;
    cout<<*p<<endl;     //prints value stored in x (use * dereference operator);
    cout<<&x<<endl;     //prints memory address of x
    cout<<p<<endl;      //prints memory address of x
    cout<<&p<<endl;     //prints memory address of p
    
    cout<<endl;//new line
    
    //-----------------------------------------------------------
    
    //(2) pointer to heap memory (what is heap memory?)
    
    int* z = new int; // declare pointer (use 'new' operator)
    
    *z = 25; //intialise pointer

    cout<<*z<<endl;     //prints int value stored in heap;
    cout<<z<<endl;      //prints memory address of int value stored in heap
    cout<<&z<<endl;     //prints memeory address of p
    
    delete z;           //deallocate memory in heap (manually deallocated)
    z=NULL;             //set NULL pointer (why?)
    
    
    //cout<<*z<<endl;   //doing this will create an error (why?)
    
    
} // end of main program block



