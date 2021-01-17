//  functions2b_example.cpp
//  Description: Demonstrates 3 ways to return values using a function.
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

//function declaration
int addFive_1(int* x); //return-by-value
int& addFive_2(int* x);//return-by-reference
int* addFive_3(int* x);//return-by-address

//For each of the above functions,can you describe
//what is happening at the level of memory?
//Hint: Google it.

int main(void)
{
    int* p = new int(5); //allocate some heap memory
    
    cout<<*p<<endl;
    
    cout<<addFive_1(p)<<endl;
    
    cout<<*p<<endl;
    
    return 0;

} // end of main program block


int addFive_1(int* x) //pass-by-value
{
    int n = *x+5; //add 5 to n
    return n;     //returns the value of x
}

int& addFive_2(int* x) //pass-by-reference
{
    int* n = x;  //assign value in x to pointer n
    *n+=5;       //add 5 to n
    return *n;   //returns a reference to x
}

int* addFive_3(int* x) //pass-by-address
{
    int* n = x; //assign value in x to pointer n
    *n+=5;      //add 5 to n
    return n;   //returns the address of x
}

//Given what you know about stack and heap memory,
//can you describe how these 3 functions differ?
//Was the heap memory used safely deallocated?
