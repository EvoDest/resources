//  Address.h
//  Description: declaration of the Address class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class Address
{
    //friend overloaded operators
    friend ostream & operator << (ostream &, const Address &);
    friend istream & operator >> (istream &, Address &);

public:
    
    // constructors
    Address ();
    Address (int blk, int fl, int un, string st, string c, string ctry, int pc);
    
    //destructors
    ~Address();
    
    // setters
    void seetBlock(int b);
    void setFloor(int f);
    void setUnit(int u);
    void setStreet(string s);
    void  setCity(string s);
    void setCountry(string s);
    void setPostalCode(int s);
    void setAddress (int blk, int fl, int un, string st, string c, string ctry, int pc);
    
    // getters
    int getBlock() const;
    int getFloor() const;
    int getUnit() const;
    string getStreet() const;
    string getCity() const;
    string getCountry() const;
    int getPostalCode() const;
    
    // display all contents
    void print()const;
    
private:
    
    int block;
    int unit;
    int floor;
    string street;
    string city;
    string country;
    int postalCode;
    
};

#endif 
