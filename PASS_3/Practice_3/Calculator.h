//  Calculator.h
//  Description: An example of a template class
//  Created by Glenn Lum on 1/1/20.
//  Copyright © 2020 Glenn Lum. All rights reserved.

  #ifndef CALCULATOR_H
  #define CALCULATOR_H

  using namespace std;

  // I want my calculator class to handle a number of different data types not just integers.
  // Instead of coding different calculator classes for different data types,
  // I will perform what is known as templating.
  // Now, one piece of code can be re-used for various data types.


  /* Declaration */

  template <class T> // 'T' is a place holder for a yet to be defined type
  class Calculator
  {
      
  public:
      
      Calculator(T x, T y); //constructor
      T add();
      T sub();
      
  private:
      
      T a;
      T b;
      
  };

  /* IMPLEMENTATION (inside the h file) */

  // Why must templates be implemented in the .h file?
  // Check out:  https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file


  template <class T>
  Calculator<T>::Calculator(T x, T y)
  {
      a=x;
      b=y;
  }

  template <class T>
  T Calculator<T>::add()
  {
      return a+b;
  }

  template <class T>
  T Calculator<T>::sub()
  {
      return a-b;
  }

  #endif


