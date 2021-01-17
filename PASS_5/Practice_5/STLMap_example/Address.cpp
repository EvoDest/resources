//  Address.cpp
//  Description: implementation of the Address class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#include "Address.h"

//---------------------------------------
// constructors

Address::Address ()
{
    block=1;
    unit=1;
    floor=1;
    street="Orchard Rd";
    city="Singapore";
    country="Singapore";
    postalCode=123456;
}

Address::Address (int blk, int fl, int un, string st, string c, string ctry, int pc)
{
    
    block=blk;
    unit=un;
    floor=fl;
    street=st;
    city=c;
    country=ctry;
    postalCode=pc;
    
}

//---------------------------------------
// destructor

Address::~Address(){}

//---------------------------------------
// setters

void Address::seetBlock(int b)
{
    block = b;
}
void Address::setFloor(int f)
{
    floor=f;
}
void Address::setUnit(int u)
{
    unit=u;
}
void Address::setStreet(string s)
{
    street=s;
}
void  Address::setCity(string s)
{
    city=s;
}
void Address::setCountry(string s)
{
    country=s;
}

void Address::setPostalCode(int pc)
{
    postalCode=pc;
}

void Address::setAddress (int blk, int fl, int un, string st, string c, string ctry, int pc )
{
    
    block=blk;
    unit=un;
    floor=fl;
    street=st;
    city=c;
    country=ctry;
    postalCode=pc;
}

//---------------------------------------
// getters

int Address::getBlock() const
{
    return block;
}
int Address::getFloor() const
{
    return floor;
}
int Address::getUnit() const
{
    return unit;
}
string Address::getStreet() const
{
    return street;
}
string Address::getCity() const
{
    return city;
}
string Address::getCountry() const
{
    return country;
}
int Address::getPostalCode() const
{
    return postalCode;
}

//---------------------------------------
// display all contents

void Address::print()const
{
    cout<<"Blk "<<block<<", "
    <<"# "<<floor<<"-"
    <<unit<<", "
    <<street<<", "
    <<city<<", "
    <<country<<", "
    <<postalCode;
}

//---------------------------------------
// friend overloaded operators

ostream & operator << (ostream & os, const Address & A)
{
    os<<"Blk "<<A.block<<", "
    <<"# "<<A.floor<<"-"
    <<A.unit<<", "
    <<A.street<<", "
    <<A.city<<", "
    <<A.country<<", "
    <<A.postalCode<<endl;
   
    return os;
}

istream & operator >> (istream & is, Address & A)
{
    is>>A.block>>A.floor>>A.unit>>A.street>>A.city>>A.country>>A.postalCode;
    
    return is;
}
