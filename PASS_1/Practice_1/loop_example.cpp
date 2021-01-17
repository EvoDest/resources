//  loop_example.cpp
//  Description: Demonstrates the use of various loops
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
   
    char choice = 'y'; // (y = 121 in ascii code)
    int arr[5];
    int count=0, sum=0;;
    
    //--------------------------
    
    while (choice=='y') //what happens if 'y' is replaced with 121? Why is that?
    {
        if(count<5) // why <5?
        {
            cout<<"Enter a number: ";
            
            cin>>arr[count];
            count++;
            
            cout<<"Enter another number? (y/n): ";
            cin>>choice;
        }
        else
        {
            cout<<"Error: array out of bounds"<<endl;
            break; //What does 'break' do?
        }
    }
    
    //--------------------------
    
    cout<<endl; //new line
    cout<<"You entered: ";
    
    for(int i=0; i<count; i++)
    {
        cout<<arr[i]<<", ";
        sum+=arr[i];
    }
    
    //--------------------------
    
    cout<<endl; //new line
    cout<<"Average = "<<sum/count<<endl;
    
    
    return 0;
    
} // end of main program block

