//  STLSet_example.cpp
//  Description: demonstrates the use of STL set
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <set>    //STL Set
#include <vector> //STL Vector

using namespace std;

int main(void)
{
    //----------------------------------------------------------
    //SET Demo Part 1
    
    // A set does not accept duplicates
    // Values in a set are sorted on insertion
    
    cout<<"Create an int Set"<<endl;
    
    set<int> myset; // initialise a new set
    
    set<int>::iterator it; // initialise a set iterator
    
    int number; // stores a number
    
    for (int i=1; i<=5;++i) //insert 5 numbers into the set
    {
        cout<<"Enter a number: ";
        cin>>number;
        myset.insert(number);
    }
    
    cout<<endl; //new line
    
    for (it=myset.begin(); it!=myset.end(); ++it) //print each element in the set to screen
    {
        cout<<*it<<" ";
    }
    cout<<endl;
 
 
    //----------------------------------------------------------
    //SET Demo Part 2
    
    // The same rules apply for the results of a set operation
    // The result contains no duplicates values
    // Values in the resulting set are sorted
    
    vector<int> v(10); // initalise a vector of size 10
    vector<int>::iterator itr; // intialise a vector iterator
    set<int>::iterator itSet;
    
    set<int>myset1; // intialise first set
    set<int>myset2; // initialise second set
    
    for (int i=0; i<5; i++)
    {
        myset1.insert (i*5); // insert values into first set
        myset2.insert (i*10); // insert values into second set
    }
    cout<<endl;
    
    //use a range-based for loop to print set elements
    //'auto' - automatic type detection
    
    cout<<"set1: ";
    for (auto elem : myset1)
    {
        cout << elem <<" ";
    }
    cout<<endl;
    
    //use a range-based for loop to print set elements
    //'auto' - automatic type detection
    
    cout<<"set2: ";
    for (auto elem : myset2)
    {
        cout << elem <<" ";
    }
    cout<<endl<<endl;
    
    //More on 'auto'
    //Visit: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
    
    //----------------------------------------------------------
    
    cout<<"Intersect"<<endl;
    
    set_intersection (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
    //perform intersection and input result into the vector
    
    for (itr=v.begin(); itr!=v.end();itr++)
        // print elements in the vector
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    //----------------------------------------------------------
    
    cout<<"Difference"<<endl;
    
    set_difference (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
    //perform difference and input result into the vector
    
    for (itr=v.begin(); itr!=v.end();itr++)
        // print elements in the vector
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    //----------------------------------------------------------
    
    cout<<"Union"<<endl;
    
    set_union (myset1.begin(),myset1.end(),myset2.begin(),myset2.end(),v.begin());
    //perform union and input result into the vector
    
    for (itr=v.begin(); itr!=v.end();itr++)
        // print elements in the vector
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    return 0;
}
