//  Pointer.h
//  Description: declaration of the Pointer class (deep copy version)
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef POINTER_H
#define POINTER_H

#include <iostream>
using namespace std;


//** ENSURING A DEEP COPY
// BY WRITING A COPY METHOD
// CALLING THE COPY METHOD IN THE COPY CONSTRUCTOR
// CALLING THE COPY METHOD IN THE OVERLOADED '=' OPERATOR


class Pointer
{
    
public:
    
    Pointer() //inline declaration
    {
        m_ptr=NULL; // pointer set to NULL
    };
    
    
    Pointer (const Pointer &initialiser); //** COPY CONSTURCTOR

    
    ~Pointer() // inline declaration
    {
        clear(); // calls clear function
    }
    
    
    bool copy  (const Pointer &rhs); // ** COPY METHOD
    
    
    void clear(); // deallocates pointer memory and sets pointer to NULL
    
    bool set(int number); // creates a new memory space to store a number
    // returns false if memory is full
    
    friend ostream& operator<< (ostream &ostr, const Pointer & pointer);
    // Not ideal to use a friend function (for demo only)
    
    
    Pointer& operator = (const Pointer &rhs); //** OVERLOADED ASSIGNMENT OPERATOR
    

private:
    
    int *m_ptr; // integer pointer
    
};


#endif /* POINTER_H */
