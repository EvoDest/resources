//
//  FriendBook.cpp
//  ICT283_Sandbox
//
//  Created by Glenn Lum on 28/9/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "FriendBook.h"

//constructor
FriendBook::FriendBook(string name)
{
    your_name = name;
    count=0;
    friendList = new string [3];
    cout<<"*New member "+your_name<<endl;
}

//copy constructor
FriendBook::FriendBook(FriendBook &fb)
{
    count=0;
    friendList = new string [3];
    copy(fb);
    cout<<"*New member "+your_name<<endl;
}

//destructor
FriendBook::~FriendBook()
{
    delete[] friendList;
    friendList=NULL;
    cout<<"Deleted "<<your_name<<"'s Friends"<<endl;
}

//to add friends to list
void FriendBook::addFriend(string name)
{
    friendList[count]=name;
    count++;
}

//to edit friend in the list
void FriendBook::editFriend (int pos, string name)
{
    friendList[pos]=name;
    pos++;
}

//to display contents of the friendbook
void FriendBook::display()
{
    cout<<endl;
    
    cout<<your_name+"'s friends are:"<<endl;
    
    for (int i=0; i<count; i++)
    {
        cout<<friendList[i]+", ";
    }
    cout<<endl<<endl;
}

//getter function for secure access
string FriendBook::getName()
{
    return this->your_name;
}

//getter function for secure access
string* FriendBook::getFriendList()
{
    return this->friendList;
}

//for making friendBook object copies
void FriendBook::copy(FriendBook &fb)
{
    your_name = fb.getName();
    
    for(int i =0; i<3; i++)
    {
        if(fb.getFriendList()[i]!="")
        {
            addFriend(fb.getFriendList()[i]);
        }
        else
        {
            break;
        }
    }
}

//for making friendBook object copies
FriendBook& FriendBook:: operator = (FriendBook &fb)
{
    copy(fb);
    return *this;
}
