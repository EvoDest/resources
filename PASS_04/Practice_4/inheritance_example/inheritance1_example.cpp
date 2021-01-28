//  inheritance1_example.cpp
//  Description: A sample unit test and side-by-side comparison of the Animal and Dog class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.


#include <stdio.h>
#include <iostream>
#include "Animal.h" //parent class
#include "Dog.h"    //child class

using namespace std;

int main(void)
{
    cout<<endl;
    cout<<"-Call Constructors-"<<endl;
    
    Animal a;
    //Initialise an Animal object
    Dog d;
    //Initialise a Dog Object (This class calls 2 constrcutors. Why does this happen?)
    
    cout<<endl;
    cout<<"-Call eat() Method-"<<endl;
    
    a.eat();
    //Calls 'Eat' method in Animal class
    d.eat();
    //Calls 'Eat' method in Dog class (Why doesn't the Dog object call the 'Eat' method in Animal class?)
    
    cout<<endl;
    cout<<"-Call bark() Method-"<<endl;
    
    //a.bark();
    //The above code reults in an error as there is no 'Bark' method in Animal class
    //The second code example (inheritance2) shows us how to get around this issue and make an Animal object 'Bark'.
    
    d.bark();
    //Calls 'Bark' method in Dog class (this method is specific to Dog class)
   
    cout<<endl;
    cout<<"-Call Deconstructors-"<<endl;
    
    //Dog obj calls 2 deconstrcutors (Note the order in which they are called. Why does this happen?)
    
    //Having run the code, What does this tell you about the creation and destruction of child classes?
    //What can you conclude about class inheritance in C++?

    return 0;
}
