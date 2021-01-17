//  memory_leak_example.cpp
//  Description: Demonstrates the occurence of memory leaks
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

//Uncomment the 'debug' sections to see what happens...

int main(void)
{
    //intialise an integer in heap
    int *p = new int;
    *p=10;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    /* debug */
    //create a temporary pointer to store current integer's address
    //int * temp;
    //temp=p;
    
    //intialise a second integer in heap
    p = new int;
    // re-assign p to point to the new integer
    *p=25;
    cout<<p<<endl; //
    cout<<*p<<endl;
    
    //deallocate memory
    //only one integer is deallocated but two exist in memory!
    delete p;
    p=NULL;
    
    /* debug */
    //the first integer still exists in memory!
    //Memory leak has occured!! (why is this detrimental to your program?)
    //cout<<temp<<endl;
    //cout<<*temp<<endl;
    
    /*
     A simple rule of thumb:
     One pointer one memory location.
     */
    
    return 0;
    
    
} // end of main program block


