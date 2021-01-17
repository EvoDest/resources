//  hash_function_example.java
//  Description: a program that takes in a name string and converts it into a numeric hash code
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.


import java.util.Scanner;

public class hash_function_example 
{
	//main program block
	public static void main(String[] args) 
	{
		
		Scanner input = new Scanner(System.in);
		//keyboard input reader
		
		while(true) //infinite loop
		{
			
			String firstName;
			//a first name
			
			String lastName;
			//a last name
			
			System.out.println("- Hash Code Generator - ");
			System.out.println();
			
			System.out.println("Enter a first name: ");
			
			firstName=input.nextLine();
			//read first name
			
			System.out.println("Enter a last name: ");
			
			lastName=input.nextLine();
			//read last name
			
			Person p = new Person (firstName,lastName);
			//initialize a new person
			
			System.out.println();
			System.out.println("------------------------------------");
			
			System.out.println(p+" "+"hashes to: "+ hash_function(p));
			//show hash code conversion
			
			System.out.println("------------------------------------");
			System.out.println();

		}

	}
	
	//returns a hash code of a person object
	public static int hash_function (Person p) 
	{
		return p.hashCode();
		//calls overridden function hashCode() in person class
		
	}

}

