//  functions2a_example.cpp
//  Description: Demonstrates 3 ways to pass a parameter into a function.
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

//function declaration
void addFive_1(int x); //pass-by-value
void addFive_2(int &x);//pass-by-reference
void addFive_3(int *x);//pass-by-address

//For each of the above functions,can you describe
//what is happening at the level of memory?
//Hint: Google it.

int main(void)
{
    //const int n = 10;
    // Try passing a const variable into a function.
    // What errors were encountered and why?
    
    int n = 10;
    
    cout<<n<<endl;
    
    addFive_1(n);
    
    cout<<n<<endl;
    
    return 0;

} // end of main program block


void addFive_1(int x) //pass-by-value
{
    x+=5;
}

void addFive_2(int &x) //pass-by-reference
{
    x+=5;
}

void addFive_3(int *x) //pass-by-address
{
    (*x)+=5;
}

//Given what you know about stack and heap memory,
//can you describe how these 3 functions differ?
