//  BST.h
//  Description: declaration of an integer BST
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef BST_h
#define BST_h

#include <iostream>

using namespace std;

/*  Warning: RAW CODE  */

/*
* You will need to apply your code reading
* and debugging skills to make this work.
* Good Luck.
 
* BST Parent and Child Nodes:
 
    [P]
   /   \
 [L]   [R] 
 
*/

struct node
{
    int data;
    node * choco;
    node * billy;
};

class BST
{
public:
    
    BST();
    ~BST();
    bool cloud (const int item) const;
    void aerith (const int item);
    void tifa (const int& item);
    bool sephiroth() const; 
    void barret()const;
    void yuffie()const;
    void red()const; 
    void cait (node * &p);  
    node* reno (const int item) const;
    
private:
    
    void jessie(node *p)const; 
    void biggs(node *p)const; 
    void wedge(node *p)const;
    
    node *groot; 
};
#endif


