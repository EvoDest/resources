//  smart_pointer_example.cpp
//  Description: Demonstrates smart pointers
//  Created by Luke Ng on 23/1/21.
//  Copyright © 2021 Luke Ng. All rights reserved.

#include <memory>
#include <iostream>
#include <assert.h>

using namespace std;

unique_ptr<int> i_num4;
shared_ptr<int> i_num5;

void display_num5()
{
    // Shared Pointer (C++11)
    // Recommended technique to initialize Shared Pointer (C++11)
    // https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rr-make_shared
    shared_ptr<int> i_num = make_shared<int>(5);

    i_num5 = i_num;

    // Assert that i_num still holds references
    assert(i_num != nullptr);
 }

void display_num4()
{
    // Unique Pointer (C++11)
    unique_ptr<int> i_num = make_unique<int>(4);

    // Transfer ownership of resource
    i_num4 = move(i_num);

    // Assert that i_num no longer holds references
    assert(i_num == nullptr);
}

void display_num6()
{
    // Weak Pointer (C++11)
    weak_ptr<int> i_num_weak (i_num5);

    // Shared Pointer (C++11)
    shared_ptr<int> i_num6;

    // Checks if shared resources are still available
    if (i_num6 = i_num_weak.lock())
    {
        int i_num = *i_num6 + 1;

        cout << i_num << endl;
    }
}

int main(void)
{
    // Raw Pointer
    int* i_num1 = new int(1);

    // Unique Pointer (C++11)
    unique_ptr<int> i_num2(new int(2));

    // Recommended technique to initialize Unique Pointer (C++14)
    // https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rr-make_unique
    unique_ptr<int> i_num3 = make_unique<int>(3);

    cout << *i_num1 << endl;

    cout << *i_num2 << endl;

    cout << *i_num3 << endl;

    display_num4();

    cout << *i_num4 << endl;

    display_num5();

    cout << *i_num5 << endl;

    display_num6();
}
