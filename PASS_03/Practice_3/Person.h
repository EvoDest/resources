 //  Person.h (v2)
 //  Description Version 2 of the Person class with operator overloading
 //  Created by Glenn Lum on 1/1/20.
 //  Copyright © 2020 Glenn Lum. All rights reserved.


 #ifndef PERSON_H
 #define PERSON_H

 #include <stdio.h>
 #include <iostream>

 using namespace std;


 class Person
 {
     
 public: //accessible outside the class
     
     Person(); //constructor
     
     Person(string nm, int ag); //non-defsult constructor (overloading)
     
     ~Person(); //destructor
     
     
     string getName() const; //getter
     
     int getAge() const; //getter
     
     
     void setName(string nm); //setter
     
     void setAge(int ag); //setter
     
     void operator = (const Person &P); //BONUS: overloaded '=' operator !
     // Why declare this overloaded operator within the class and not outside it?
     
     
 private: //only accessible to the methods of Person class
     
     string name;
     
     int age;
  
 };

 //Overloaded operators now declared outside the class (How will this improve class design?)

 ostream& operator << (ostream &os, const Person &P);
  
 istream& operator >> (istream &is, Person &P);


 #endif
