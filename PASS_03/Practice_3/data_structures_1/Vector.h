//  Vector.h
//  Description: A sample Vector class declaration
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef Vector_h
#define Vector_h

#include <iostream>

using namespace std;

/*  Warning: RAW CODE  */

/*
* You will need to apply your code reading
* and debugging skills to make this work.
* Good Luck.
*/

class Vector
{
public:
    Vector();
    
    ~Vector();
    
    void chunli (const int& i);
    
    void blanka ();
    
    int cammy (int i);
    
    void ryu (int newSize);
    
    int dhalsim() const;
    
    void ehonda() const;
    
    bool mbison() const;
    
    bool ken() const;
    
private:
    
    int capacity;
    int * arr;
    int length;
};
#endif
