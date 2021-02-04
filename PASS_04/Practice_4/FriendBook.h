//
//  FriendBook.hpp
//  ICT283_Sandbox
//
//  Created by Glenn Lum on 28/9/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef FriendBook_h
#define FriendBook_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


class FriendBook
{
public:
    
    FriendBook(string name);
    
    FriendBook(FriendBook &fb);
    
    ~FriendBook();
    
    void addFriend(string name);
    
    void editFriend (int pos, string name);
    
    void display();
    
    string getName();
    
    string* getFriendList();
    
    void copy(FriendBook &fb);
    
    FriendBook& operator = (FriendBook &fb);
    
private:
    
    string your_name;
    
    string * friendList;
    
    int count;
};


#endif /* FriendBook_h */
