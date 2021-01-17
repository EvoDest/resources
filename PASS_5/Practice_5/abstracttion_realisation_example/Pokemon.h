//  Pokemon.h
//  Description: declaration of the Pokemon abstract class
//  Created by Glenn Lum on 19/2/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Pokemon_h
#define Pokemon_h

#include <stdio.h>
#include <iostream>

/*
 Sometimes implementation of all function cannot be provided
 in a base class because we don’t know the implementation.
 
 Such a class is called abstract class (or Abstraction).
 
 More on Abstract classes and Pure Virtual Functions:
 Visit: https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
 */

using namespace std;

class Pokemon
{
public:
    
    /*
     An abstracted class is a class that is never instantiated.
     A class is abstract if it has at least one pure virtual function.
         
     A pure virtual function (or abstract function) in C++
     is a virtual function for which we don’t have implementation,
     we only declare it. A pure virtual function is declared by
     assigning 0 in declaration. See the following example.
     
     In some cases where there is no other virtual methods except the
     destructor you have to make it pure vitrual in order to prevent
     the creation of the objects of that class.
     
     A Concrete class inheriting from an Abstract class is called a Realisation.
     
     */
    
    Pokemon(); //constructor
    
    virtual ~Pokemon()=0; //pure virtual destrcutor
    
    virtual int skillAndChance()=0; //pure virtual method (no implementation)
    //Aka. a mini game engine!
    
    virtual void attack()=0; //pure virtual method (no implementation)
    
    virtual void incurDamage()=0; //pure virual method (no implementation)
    
    //implmented methods
    
    bool isKnockedOut(); //method with implementation

    void speak(); //method with implementation
 
    void show(); //method with implementation
   
    //public vairiables (visible to external programs)
    string name;
    string call;
    int level;
    int hp;
};
#endif
