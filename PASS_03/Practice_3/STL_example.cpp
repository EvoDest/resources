//  STL_example.cpp
//  Description: Demonstrates the use of STL container classes in C++
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include <vector> // STL Vector
#include <list>  //  STL linked list

// What is the difference between a vector and a linked list?

using namespace std;

int main(void)
{
     // Initalise a vector to store integers (container)
     vector <int> v = {2,4,6,8,10};
    
     //list <int> v = {2,4,6,8,10}; // Try using list instead (replace vector with list)
    
    
     v.push_back(20);
     // Add element to back of container
     v.push_back(30);
     // Add element to back of container
     v.pop_back();
     // Remove element from back of container
     
     // Initialise an iterator to access vector v (iterator)
     vector<int>:: iterator itr;
    
     //list<int>:: iterator itr; // Try using list instead (replace vector with list)
    
    
     //Display elements
     cout<<"Elements: "<<endl;
     for (itr=v.begin(); itr!=v.end(); itr++)
     {
         cout<<*itr<<" ";
         //itr is a pointer type
     }
    
     cout<<endl; //new line
    
     //Perform some operation then display elements
     cout<<"Elements: "<<endl;
     for (itr=v.begin(); itr!=v.end(); itr++)
     {
            cout<<++*itr<<" ";
            //what happens here?
     }
        
    return 0;
} // end of main program block



