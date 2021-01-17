//  deep_copy_example.cpp
//  Description: Demonstrates deep copy using the Pointer class
//  Created by Glenn Lum on 30/7/19.
//  Copyright © 2019 Glenn Lum. All rights reserved.
//

#include <iostream>
#include "Pointer.h"

int main(void)
{
   
    Pointer ptr1;
    Pointer ptr2;
    
    ptr1.set (89);

    ptr2 = ptr1;
    // USES OVERLOADED '=' OPERATOR
    // DEEP COPY EXECUTED HERE
    
    Pointer ptr3 (ptr1);
    // USES COPY CONSTRUCTOR
    // DEEP COPY EXECUTED HERE
    
    cout << "Pointer 1:" << endl;
    cout << ptr1;
    cout << endl;
    
    cout << "Pointer 2:" << endl;
    cout << ptr2;
    cout << endl;
    
    cout << "Pointer 3:" << endl;
    cout << ptr3;
    cout << endl;

    return 0;
}
