//  switch_example.cpp
//  Description: Demonstrates use of switch statement
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.


#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) //main program block
{
    
    int day = 0;
    
    cout<<"Enter the day of the week: ";
    cin>>day;
    
    switch(day)
    {
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Error: invalid entry"<<endl;
            break;
    }
    
    return 0; //main program returns
    
} // end program

