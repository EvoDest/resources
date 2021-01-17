//  Person.java
//  Description: a Person class (Java-style)
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.


public class Person 
{
	//a first name
	String firstName; 
	
	//a surname
	String lastName; 

	
	//Person parameterized constructor
	public Person(String firstName, String lastName) 
	{
		super();
		this.firstName = firstName;
		this.lastName = lastName;
	}


	//Displays string info of a person object
	@Override
	public String toString() 
	{
		return firstName+" "+lastName;
	}
	

	//Returns a hash code for the person object created
	@Override
	public int hashCode() 
	{
		final int prime = 31;
		int result = 1;
		result = prime * result + ((firstName == null) ? 0 : firstName.hashCode());
		result = prime * result + ((lastName == null) ? 0 : lastName.hashCode());
		return result;
	}
}
