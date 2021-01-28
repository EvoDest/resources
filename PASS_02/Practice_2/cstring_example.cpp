//  cstring_example.cpp
//  Description: Demonstrates the use and manipulation of C strings
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

#include <stdio.h>
#include <iostream>

 using namespace std;

 //function declaration
 void display (char* c, int size);
 void clear (char* c, int size);
 char* copy (char*c, int size);

 int main(void)
 {
     char str [10] = {'E','L','I','Z','A'}; //declare and initialise char array
     
     //display contents of c-style string
     cout<<str<<endl; //method 1
     display(str,10); //method 2
     
     //clear contents of string
     clear(str,10);
     display(str,10); // what happens here?
     
     //fill array with a new name (using pointer arithmetic)
     *str='B';
     *(str+1)='O';
     *(str+2)='B';
     *(str+3)='B';
     *(str+4)='Y';
     display(str,10);
     
     //copy string
     char* newStr=copy(str,10); 
     display(newStr,10);
     
     //deallocate newStr
     delete[] newStr;
     newStr=NULL;
     
 } // end of main program block


 void display (char* c, int size)
 {
     for(int i=0; i<size; i++)
     {
         cout<<*(c+i);
     }
     cout<<endl; //new line
 }
 //traverse array using pointer arithmetic


 void clear (char* c, int size)
 {
     for (int i=0; i<size; i++)
     {
         c[i]='\0';
     }
 }
 //replace array element with nulls '\0'


 char* copy (char*c, int size)
 {
     char* strCpy = new char[size]; //initialised in heap

     for (int i=0; i<size; i++)
     {
         strCpy[i]=c[i];
     }
     return strCpy;
 }
 //makes a copy of array passed in

