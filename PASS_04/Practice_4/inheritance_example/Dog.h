//  Dog.h
//  Description: declaration of a Dog class that inherits from Animal
//  Created by Glenn Lum on 19/7/19.
//  Copyright © 2019 Glenn Lum. All rights reserved.

#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include "Animal.h"
using namespace std;


//--------------------------------------

//  Dog Class (child)
//  We say Dog is a 'specialisation' of animal class
//  All methods have been written as inline functions.
//  What are inline functions?
//  Visit: https://www.geeksforgeeks.org/inline-functions-cpp/
//  What is public,private and protected inheritance?
//  Visit: https://www.programiz.com/cpp-programming/public-protected-private-inheritance

//--------------------------------------

class Dog : public Animal // dog inherits animal class (public inheritance)
{
    
public:
    
    Dog()
    {
        cout<<"<Dog> Hello!"<<endl;
        
    } //constructor
    
    ~Dog()
    {
        cout<<"<Dog> Bye!"<<endl;
        
    } //destructor
    
    void eat() //method overriding
    {
        cout<<"<Dog> Arf,Arf,Yum Yum"<<endl;
    }
    
    void bark() //dog class-specific function
    {
        cout<<"<Dog> Woof-Woof"<<endl;
    }
    
private:
    
    int value;
};


#endif /* DOG_H */
