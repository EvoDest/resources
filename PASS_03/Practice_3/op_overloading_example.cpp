//  op_overloading_example.cpp
//  Description: Demonstrates the use of overloaded operators in a class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int main(void)
{
    Person p1;
    Person p2;
    Person p3;
    Person p4;
    
    cout<<"Enter person 1's name and age (ex.Tommy Lee Jones,55): ";
    cin>>p1;
    //uses overloaded >> operator

    cout<<"<p1> "<<p1;
    //uses overloaded << operator

    cout<<"Enter person 2's name and age (ex.Tommy Lee Jones,55): ";
    cin>>p2;
    
    cout<<"<p2> "<<p2;
    //uses overloaded << operator
    
    p3=p2;
    //uses overloaded = operator
    cout<<"<p3> "<<p3;
    
    
    // reads data from a file and uses data to initialise a person object and store a quote
    // try creating and reading your own data.txt file
    
    ifstream infile ("data.txt");
    string quote;
    
    if(infile.is_open()) // why wrap the operation in an if-else block?
    {
        infile>>p4; //overloaded >> operator
        infile.ignore(); //skip
        getline(infile,quote,'!'); //reads the quote
    }
    else
    {
        cout<<"Error Reading From File";
    }
    
    cout<<"<p4> "<<p4<<quote<<endl;
    
    return 0;
} // end of main program block

