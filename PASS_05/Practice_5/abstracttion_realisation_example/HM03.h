//  HM03.h
//  Description: declaration of the HM03 interface
//  Created by Glenn Lum on 20/2/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef HM03_h
#define HM03_h

#include <stdio.h>

/*
Interface Classes
 
An interface describes the behavior or capabilities of a C++ class without
committing to a particular implementation of that class.
 
More on interfaces
Visit: https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm 
*/

//A pure virtual class
class HM03 //the 'surf' interface class
{
public:
    
    //teaches your pokemon 'surf'!
    virtual void surf()=0; //pure virtual method (no implementation)
};
#endif
