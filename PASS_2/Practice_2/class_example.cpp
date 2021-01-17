//  class_example.cpp
//  Description: Demonstrates the use of classes for data storage
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include "Person.h" //must include person class

using namespace std;

//function declaration
void display (Person* pList, int size);

int main(void)
{
    //declare and initialise people
    
    Person p1 ("Maggie",36); //which construcctor is called?
    Person p2 ("Sophie",12);
    Person p3 ("Jimmy",10);
    
    //An array of people
    Person list [10];
    
    //add people to the list
    list[0]=p1;
    list[1]=p2;
    list[2]=p3;
    
    //display birthdays to screen
    display(list,10);
    
    cout<<endl;//new line
    
    //declare and initialise a person pointer
    Person* pPtr;
    
    //point to first element (using -> operator)
    pPtr=list;
    pPtr->setName("Neil");
    
    //point to second element (using -> operator)
    pPtr=list+1;
    pPtr->setName("Patrick");
    
    //point to third element (using -> operator)
    pPtr=list+2;
    pPtr->setName("Harris");
    
    //display birthdays to screen
    display(list,10);
    
} // end of main program block


void display (Person* pList, int size)
{
    for(int i=0; i<size; i++)
    {
        if(pList[i].getName()!="none")
        {
            cout<<"Name: "<<pList[i].getName(); //why getters and setters and not '<<' ?
            cout<<" , Age: "<<pList[i].getAge()<<endl;
        }
    }
}
//print contents of Person list

