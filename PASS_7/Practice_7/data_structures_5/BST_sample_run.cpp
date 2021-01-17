//  BST_sample_run.cpp
//
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include <iostream>
#include "BST.h"

int main(void)
{

    //---------------------------------------------
    // Insert elements into tree
    
    BST Btree;
    
    Btree.insert(23);
    Btree.insert(12);
    Btree.insert(31);
    Btree.insert(3);
    Btree.insert(15);
    Btree.insert(29);
    Btree.insert(88);
    Btree.insert(7);
    Btree.insert(13);
    Btree.insert(19);
    Btree.insert(25);
    Btree.insert(53);
    
    //---------------------------------------------
    // Show elements in tree
    
    cout<<"Test - inorder()"<<endl;
    Btree.inorderTraversal();
    cout<<endl<<endl;
    
    cout<<"Test - preorder()"<<endl;
    Btree.preorderTraversal();
    cout<<endl<<endl;
    
    cout<<"Test - postorder()"<<endl;
    Btree.postorderTraversal();
    cout<<endl<<endl;
    
    //---------------------------------------------
    
    return 0;
}
