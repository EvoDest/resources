//  person_test.cpp
//  Description: A sample unit test for the Person class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include "Person.h"

using namespace std;

int main (void)
{
    /* Unit test of Person class */
    
    cout<<"Test1:"<<"default constructor"<<endl;
    Person p1;
    cout<<p1<<endl; // this default constructor should intialise vairables with default values
    
    cout<<"Test2:"<<"non-default constructor"<<endl;
    Person p2("Sam",25);
    cout<<p2<<endl; // this non-default constructor should intialise all variables
    
    cout<<"Test3:"<<"getName"<<endl;
    cout<<p2.getName()<<endl;
    cout<<p2<<endl; // a getter should not modify the class's vairables

    cout<<"Test4:"<<"getAge"<<endl;
    cout<<p2.getAge()<<endl;
    cout<<p2<<endl; // a getter should not modify the class's vairables
    
    cout<<"Test5:"<<"setName"<<endl;
    p2.setName("Jill");
    cout<<p2<<endl; // a setter should be able to modify a class's variables

    cout<<"Test6:"<<"setAge"<<endl;
    p2.setAge(45);
    cout<<p2<<endl; // a setter should be able to modify a class's variables
    
}

