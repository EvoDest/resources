//  calculator_example.cpp
//  Description: Demonstrates the use of a template classes
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>
#include "Calculator.h"

using namespace std;

int main(void)
{
    Calculator<int> c1(23,11); //integer calculator
    cout<<c1.add()<<endl; //23+11
    cout<<c1.sub()<<endl; //23-11
    
    Calculator<double> c2(23.85,11.77); //double calculator
    cout<<c2.add()<<endl; //23.85+11.77
    cout<<c2.sub()<<endl; //23.85-11.77
    
    Calculator<float> c3(786.234,11.53401); //float calculator
    cout<<c3.add()<<endl; //786.234+11.53401
    cout<<c3.sub()<<endl; //786.234-11.53401
    
    return 0;
} // end of main program block

