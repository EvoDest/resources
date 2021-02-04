//  io_example.cpp
//  Description: Demonstrates various methods that read input from stdin
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std; //what happens when u remove this?

int main(void) //main program block
{
    //-----------------------
    
    char c;
    cout<<"Enter a char: ";
    cin>>c;
    cout<<"You entered: "<<c<<endl;
    cout<<endl;//new line
    
    //-----------------------
    
    char cStr[20];
    cout<<"Enter a C-style string: "; //no spaces (why?)
    cin>>cStr;
    cout<<"You entered: "<<cStr<<endl;
    cout<<endl;//new line
    
    //-----------------------
    
    string s;
    cout<<"Enter a string: ";
    cin.ignore(); //why call ignore()?
    getline(cin,s);
    cout<<"You entered: "<<s<<endl;
    cout<<endl;//new line
    
    //-----------------------
    
    return 0; //main program returns 0 (why?)
    
} // end of main program block

