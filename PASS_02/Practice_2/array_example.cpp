//  array_example.cpp
//  Description: Demonstrates the use and manipulation of arrays
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

 #include <stdio.h>
 #include <iostream>

 using namespace std;

 //function declaration
 void display_1 (int* x, int size);
 void display_2 (int* x, int size);
 void increment (int* x, int size);
 int* copy (int* x, int size);

 int main(void)
 {
     int arr [5] = {1,2,3,4,5}; //declare and initialise int array
     
     //two methods to traverse an array
     display_1(arr,5); //uses []
     display_2(arr,5); //uses pointer arithmetic
     
     //increment each array element
     increment(arr,5);
     display_1(arr,5);
     
     //make a copy of an array
     int* arrCpy = copy(arr,5);
     increment(arrCpy,5);
     
     display_1(arrCpy,5);
     display_1(arr,5);
     
     //deallocate arrCpy
     delete[] arrCpy;
     arrCpy=NULL;

 } // end of main program block


 void display_1 (int* x, int size) //what type of parameters are passed?
 {
     for(int i=0; i<size; i++)
     {
         cout<<x[i]<<" ";
     }
     cout<<endl; //new line
 }
 //traverse array using [] operator


 void display_2 (int* x, int size) //what type of parameters are passed?
 {
     for(int i=0; i<size; i++)
     {
         cout<<*(x+i)<<" ";
     }
     cout<<endl; //new line
 }
 //traverse array using pointer arithmetic (what?)


 void increment (int* x, int size) //what type of parameters are passed?
 {
     for (int i=0; i<size; i++)
     {
         x[i]++;
     }
 }
 //increment each array element


 int* copy (int* x, int size) //what type of parameters are passed?
 {
     int* newArr = new int[size]; //initialised in heap (why?)
     
     for (int i=0; i<size; i++)
        {
            newArr[i]=x[i];
        }
     return newArr;
 }
 // what copy does:
 // 1. create a new array in heap (using 'new')
 // 2. copy elements of array x into newArr
 // 3. returns address of newArr (return-by-address)
