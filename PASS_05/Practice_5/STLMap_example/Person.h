//  Person.h
//  Descrition: declaration of a Person class
//  Created by Glenn Lum on 01/01/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.
//

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Person
{
    
    //friend overloaded operators
    friend ostream& operator << (ostream&, const Person&);
    friend istream& operator >> (istream&, Person&);
    
public:
    
    // constructors
    Person();
    Person ( string fn, string mn, string ln);
    
    // destructors
    ~Person();
    
    // setters
    void setFristName (string fn);
    void setMiddelName (string mn);
    void setLastName (string ln);
    void setName (string fn, string mn, string ln);
    
    // getters
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;
    
    // display all contents
    void print() const;
    
    // Overloaded comparison operator (why overload this?)
    bool operator < (const Person &otherPerson) const;
    
private:
    
    string firstName;
    string middleName;
    string lastName;
};

#endif 
