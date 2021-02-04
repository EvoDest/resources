//  Vector.h (STL implementation)
//  Description: Demonstrates an encapsulated STL vector
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.


#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector> // Uses STL Vector Library (Why encapsulate an STL Vector?)

using namespace std;


/* FEATURING DOXYGEN STYLE COMMENTING! */

/**
 * @class Vector
 * @brief template class that stores data in an STL Vector ADT:
 *
 *
 * @author Lum Zhi Hao Glenn
 * @version
 * 01 - Home Coded Vector Class using Array ADT
 * 02 - Vector class modified to use STL Vector ADT
 * methods removed: resize(), vCapacity(), isFull(), OOB()
 * methods added: clear()
 *
 * @date 26/05/19
 *
 */

static int MIN_SIZE=10;

template <class Type>
class Vector
{
    
public:
    
    //---------------------------------------------
    // Constructors / Destructor
    //---------------------------------------------
    /**
     * @brief Constructs a new vector obj with intial capacity of 10
     */
    Vector(); // constructor
    
    /**
     * @brief  Class Destructor
     */
    ~Vector(); // destructor
    
    //---------------------------------------------
    // Mutators
    //---------------------------------------------
    
    /**
     * @brief  Insert new element to end of the list.
     * @param  i - Vector obj reference of type 'Type'
     * @pre    Vector obj must be initalised
     * @post   Contents of list are modified.
     */
    bool push_back (const Type& i); // add element to end of list
    
    /**
     * @brief  Removes element from back of list.
     * @pre    Vector obj must be initalised
     * @post   Contents of vecotr are modified.
     */
    bool pop_back (); // remove last element from list
    
    /**
     * @brief  Removes element from the list.
     * @pre    Vector obj must be initalised
     * @post   Contents of vector are modified.
     */
    void clear(); //removes all elements from list

    
    //---------------------------------------------
    // Accessors
    //---------------------------------------------
    
    /**
     * @brief  Returns element at a specified location in the list
     * throws out_of_range exception if index is invalid
     * @param  index - location specifier
     * @pre    Vector obj must be initalised
     */
    Type& at (int index);
    
    //---------------------------------------------
    // Descriptors
    //---------------------------------------------
    
    /**
     * @brief  Prints list elements to screen
     * separated by a space.
     * @warning Works for primitive  data types only !
     * @pre    Vector obj must be initalised
     */
    void print() const; // prints all elements of the array
    
    /**
     * @brief  Returns true if list is empty
     * @pre    Vector obj must be initalised
     */
    bool isEmpty() const;
    
    /**
     * @brief  Returns number of elements
     * currently stored in the list
     * @pre    Vector obj must be initalised
     */
    long size(); // returns size of array
    

private:
    
    //---------------------------------------------
    // Variables
    //---------------------------------------------
    
    vector<Type> vec; //Declare an STL Vector
    
};

//---------------------------------------------

//             IMPLEMENTATION

//---------------------------------------------

//---------------------------------------------
// Constructors / Destructor
//---------------------------------------------

template <class Type>
Vector<Type>::Vector()
{
    vec.reserve (MIN_SIZE); //initial capacity of 10
}

template <class Type>
Vector<Type>::~Vector(){}

//---------------------------------------------
// Mutators
//---------------------------------------------

template <class Type>
bool Vector<Type>::push_back(const Type & i)
{
    try
    {
        vec.push_back(i);
        return true;
    }
    catch (...)
    {
        return false;
    }
}
//inserts element to end of list

template <class Type>
bool Vector<Type>::pop_back()
{
    if(vec.size()>0)
    {
        vec.pop_back();
        return true;
    }
    else
    {
        return false;
    }
}
//removes last element of list

template<class Type>
void Vector<Type>::clear()
{
    vec.clear();
}
//removes all elements from the list


//---------------------------------------------
// Accessors
//---------------------------------------------

template <class Type>
Type& Vector<Type>::at (int index)
{
        return vec.at(index);
}
//returns element at index location
//throws out_of_range exception if invalid index

//---------------------------------------------
// Descriptors
//---------------------------------------------

template <class Type>
void Vector<Type>::print() const
{
    if (vec.size()==0)
    {
        cout<<"No Data";
    }
    else
    {
        for (int index = 0; index< vec.size(); index++)
        {
            cout<<vec.at(index)<<" ";
        }
    }
        cout<<endl;
}
// prints vector elements to screen


template <class Type>
bool Vector<Type>::isEmpty() const
{
    return vec.empty();
}
// returns true if list is empty


template <class Type>
long Vector<Type>::size()
{
    return vec.size();
}
// returns current length of list


#endif /* VECTOR_H */

