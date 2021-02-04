//  Person.h
//  Description: Person class declaration
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#ifndef PERSON_H //why do this?
#define PERSON_H

#include <stdio.h>
#include <iostream>

using namespace std;


class Person
{
    
    friend ostream& operator << (ostream &os, const Person &P);
    // friend overloaded << operator (only used for debugging)
    // why is uing a 'friend' function not ideal in class design?
    
    // how would you code an overloaded '>>' (input) operator? (try!)
    
    
public: //accessible outside the class 
    
    Person(); //constructor
    
    Person(string nm, int ag); //non-defsult constructor (overloading)
    
    ~Person(); //destructor
    
    
    string getName() const; //getter
    
    int getAge() const; //getter
    
    
    void setName(string nm); //setter
    
    void setAge(int ag); //setter
    
    
private: //only accessible to the methods of Person class
    
    string name;
    
    int age;
 
};

#endif //why do this?
