//  Animal.h
//  Description: declaration of an Animal class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#ifndef ANIMAL_H
#define ANIMAL_H

#include <stdio.h>
using namespace std;

//--------------------------------------

//  Animal Class (parent)
//  All methods have been written as inline functions.
//  What are inline functions?
//  Visit: https://www.geeksforgeeks.org/inline-functions-cpp/
//  What is public,private and protected inheritance?
//  Visit: https://www.programiz.com/cpp-programming/public-protected-private-inheritance

//--------------------------------------

class Animal //aka. base class
{
    
public:
    
    Animal()
    {
        value=0;
        cout<<"<Animal> Hello!"<<endl;
        
    } //constructor
    
    ~Animal()
    {
        cout<<"<Animal> Bye!"<<endl;
        
    } //destructor
    
    void eat()
    {
        cout<<"<Animal> Eating...Yum Yum"<<endl;
    }
    
    void move()
    {
        value++;
    }
    
private:
    
    int value;
};

#endif /* ANIMAL_H */
