//  function_pointer_example.cpp
//  Description: a program that demonstrates the use of function pointers and callback functions
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

float add (float x, float y);       //adds two floats
float multiply (float x, float y);  //multipies two floats
float divide (float x, float y);    //divides two floats

void callBackFunc(float x, float y, void(*funcPtr)());//A call back function
void callMeMaybe ();//function to be 'called back'


int main(void)
{
    //--------------------------------------------------
    //1) Function Pointers
    
    float x = 11.10;
    //Stores first float variable
    
    float y = 7.55;
    //Stores second float variable
    
    float(*funcPtr)(float,float)={};
    //A Function Pointer ('={}' means currently pointing to nothing)
    
    float(*funcPtrArr[])(float,float)={add,multiply,divide};
    //A Function Pointer Array (note square brackets)
    
    string funcName[]={"+","x","/"};
    //A string Array
    
    for (int i=0; i<3; i++) //for loop
    {
        funcPtr=funcPtrArr[i];
        //during each loop a new function is assigned to funcPtr
        
        cout<<x<<" "<<funcName[i]<<" "<<y<<" = ";
        cout<<funcPtr(x,y)<<endl; //function call using funcPtr
        //displays the results
    }
    
    //--------------------------------------------------
    //2) Callback Functions
    
    // Callback function test
    callBackFunc(x,y,callMeMaybe);
    
    return 0;
}

//--------------------------------------------------
//About Callback functions

//In simple language, if a reference of a function is
//passed to another function as an argument it is called
//a Callback function. In C++, a callback function is
//a function that is called through a function pointer
//inside of another function.

//More on callback functions: https://www.geeksforgeeks.org/callbacks-in-c/

//Callback function - takes two floats and a pointer to a function
void callBackFunc(float x, float y, void(*funcPtr)())
{
    if(x>20 && y>30) //checks for some condition
    {
        funcPtr(); //performs call back (using funcPtr)
    }
}

//The function to be 'called back'
void callMeMaybe ()
{
    cout<<"Why, hello there..."<<endl;
}

//--------------------------------------------------

float add (float x, float y)
{
    return x+y;
}

float multiply (float x, float y)
{
    return x*y;
}

float divide (float x, float y)
{
    return x/y;
}
//--------------------------------------------------

