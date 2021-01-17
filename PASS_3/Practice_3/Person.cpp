 //  Person.cpp (v2)
 //  Description: Version 2 of the Person class with operator overloading
 //  Created by Glenn Lum on 1/1/20.
 //  Copyright © 2020 Glenn Lum. All rights reserved.

 #include "Person.h"


 Person::Person()
 {
     name="none";
     age=0;
 }
 //constructor

 Person::Person(string nm, int ag)
 {
     name=nm;
     age=ag;
 }
 //non-defsult constructor (overloading)

 Person::~Person()
 {
   //empty
 }
 //destructor


 string Person::getName() const //const =function cannot modify the class's variables
 {
     return name;
 }
 //getter

 int Person::getAge() const //const =function cannot modify the class's variables
 {
     return age;
 }
 //getter


 void Person::setName(string nm)
 {
     name = nm;
 }
 //setter

 void Person::setAge(int ag)
 {
     age = ag;
     
 }
 //setter

 void Person::operator = (const Person& P )
 {
     name=P.getName();
     age=P.getAge();
 }
 //BONUS: overloaded '=' operator !


 ostream& operator << (ostream &os, const Person &P)
 {
     os<<"Name: "<<P.getName()<<" Age: "<<P.getAge()<<endl;
     
     return os;
 }
 //overloaded << operator
 //no longer friend of the class (access data via getters and setters only)

 istream& operator >> (istream &is, Person &P)
 {
     string name;
     int age;
     
     if(is.peek()!='\n') //checks the first character in the stream for '/n'
     {
         getline(is,name,',');
         is>>age;
     }
     else
     {
         is.ignore(1); //reads from the second character onwards (why do this?)
         getline(is,name,',');
         is>>age;
     }
     
     P.setName(name);
     P.setAge(age);
     
     return is;
 }
 //overloaded >> operator
 //no longer friend of the class (access data via getters and setters only)
