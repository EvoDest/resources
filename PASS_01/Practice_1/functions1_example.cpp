//  functions1_example.cpp
//  Description: Demonstrates 4 useful function signatures
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

//function declaration
void sayHi_1(); //void function
string sayHi_2(); //function with return value
void sayHi_3(string s); //parameterized void function
string sayHi_4 (string s); //parameterized function w return value


int main(void)
{
    sayHi_1(); 
    
    string s = sayHi_2();
    cout<<s<<endl;
    
    sayHi_3("Shirley");
    
    cout<<sayHi_4("Harry")<<endl;
    
    return 0;
    
} // end of main program block


//function implementation

void sayHi_1() // void function
{
    cout<<"Hello"<<endl;
}

string sayHi_2() // function with return value
{
    string str = "Hello";
    return str;
}

void sayHi_3(string s) // parameterized void function
{
    cout<<"Hello, ";
    cout<<s<<endl;
}

string sayHi_4 (string s) // parameterised function w return value
{
    string str = "Hello, "+s; //what does '+' do?
    return str;
}
