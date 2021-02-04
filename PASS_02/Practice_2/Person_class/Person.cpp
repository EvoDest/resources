 &//  Person.cpp
//  Description: Person class implementation
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include "Person.h"


Person::Person() //why use the scope resolution '::' operator?
{
    name="none"; //default values
    age=0;
}
//constructor

Person::Person(string nm, int ag)
{
    name=nm;
    age=ag;
}
//non-defsult constructor (overloading)

Person::~Person()
{
  //empty (for now)
}
//destructor


string Person::getName() const //what does 'const' do here?
{
    return name;
}
//getter

int Person::getAge() const //what does 'const' do here?
{
    return age;
}
//getter


void Person::setName(string nm) //why no 'const' here?
{
    name = nm;
}
//setter

void Person::setAge(int ag) //why no 'const' here?
{
    age = ag;
    
}
//setter


ostream& operator << (ostream &os, const Person &P) //why no scope resolution '::' operator?
{
    os<<"Name: "<<P.name<<", Age: "<<P.age<<endl;
    
    return os;
}
// implements friend overloaded operator

