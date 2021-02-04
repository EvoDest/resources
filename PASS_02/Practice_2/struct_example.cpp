//  struct_example.cpp
//  Description: Demonstrates the use of structs for data storage
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

//srtuct declaration (what category of data type is this?)
struct Birthday
{
    string name="";
    int day;
    int month;
};

//function declaration
void display (Birthday* bList, int size);

int main(void)
{
    //initialise a birthday (using . operator)
    Birthday b1;
    b1.name = "Johnny D";
    b1.day = 15;
    b1.month = 6;
    
    //initialise another birthday (using . operator)
    Birthday b2;
    b2.name = "Sally H";
    b2.day = 3;
    b2.month = 9;
    
    //An array of birthdays
    Birthday list [10];
    
    //add birthdays to list
    list[0]=b1;
    list[1]=b2;
    
    //display birthdays to screen
    display(list,10);
    
    //------------------------------------
    
    cout<<endl;//new line
    
    //declare and initialise a birthday pointer
    Birthday* bPtr;
    
    //point to first element (using -> operator)
    bPtr=list;
    bPtr->name = "Patrick P";
    
    //point to second element (using -> operator)
    bPtr=list+1;
    bPtr->name = "Kiki K";
    
    //display birthdays to screen
    display(list,10);
    
    
} // end of main program block


void display (Birthday* bList, int size)
{
    for(int i=0; i<size; i++)
    {
        if(bList[i].name!="") // why do this?
        {
            cout<<bList[i].name<<"'s brithday falls on ";  //why '.' and not '->' ?
            cout<<bList[i].day<<"/"<<bList[i].month<<endl;
        }
    }
}
//print birthday listing

