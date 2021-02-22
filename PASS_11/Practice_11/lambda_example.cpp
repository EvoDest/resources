//  lambda_example.cpp
//  Description: Demonstrates lambda expressions
//  Created by Luke Ng on 04/02/21.
//  Copyright © 2021 Luke Ng. All rights reserved.

#include <functional>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int funcAddFive(int input)
{
    return input + 5;
}

int funcMath(int input, int (*math)(int))
{
    return math(input);
}

int funcMultiplyTwo(int input)
{
    return input * 2;
}

int main()
{
    // Named function
    // C++11
    function<int(int)> addFive1 = funcAddFive;

    cout << "addFive1(10) -> " << addFive1(10) << endl << endl;

    // Anonymous function using lambda expression
    // C++11
    function<int(int)> addFive2 = [](int input){ return input + 5; };

    cout << "addFive2(10) -> " << addFive2(10) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // C++11
    auto addFive3 = [](int input){ return input + 5; };

    cout << "addFive3(10) -> " << addFive3(10) << endl << endl;

        int extValue1 = 5;
    int extValue2 = 10;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Capture by value
    // C++11
    auto addExt = [extValue1](int input)
    {
        return input + extValue1;
    };

    cout << "addExt(10) -> " << addExt(10) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Mutable capture by value
    // C++11
    auto addInputReturnExtVal = [extValue2](int input) mutable
    {
        extValue2 = extValue2 + input;
        return extValue2;
    };

    cout << "addInputReturnExtVal(10) -> " << addInputReturnExtVal(10) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Capture by reference
    // C++11
    auto addInputReturnExtRef = [&extValue2](int input)
    {
        extValue2 = extValue2 + input;
    };

    addInputReturnExtRef(10);

    cout << "addInputReturnExtRef(10) -> " << extValue2 << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Parameter type deduction/inference
    // Capture by value and reference
    // C++11
    auto addInputExtValRef = [extValue1, &extValue2](int input)
    {
        cout << "extValue1 -> " << extValue1 << endl;
        cout << "extValue2 -> " << extValue2 << endl;

        extValue2 = extValue1 + input;
    };

    addInputExtValRef(10);

    cout << "addInputExtValRef(10)" << endl;
    cout << "extValue1 -> " << extValue1 << endl;
    cout << "extValue2 -> " << extValue2 << endl;
    cout << endl;

    // Anonymous function using lambda expression
    // Specify function return type
    // C++11
    auto addFloatReturnInt = [](float input) -> int { return input + 5.1; };

    cout << "addFloatReturnInt(10.2) -> " << addFloatReturnInt(10.2) << endl << endl;

    // Anonymous function using lambda expression
    // Specify function return type
    // Parameter type deduction/inference
    // C++11
    auto addFloatReturnFloat = [](float input) -> float { return input + 5.1; };

    cout << "addFloatReturnFloat(10.2) -> " << addFloatReturnFloat(10.2) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Parameter type deduction/inference
    // C++14
    auto addFive4 = [](auto input){ return input + 5; };

    cout << "addFive4(10) -> " << addFive4(10) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Parameter type deduction/inference
    // Constant expression
    // C++17
    constexpr auto addFive5 = [](auto input){ return input + 5; };

    cout << "addFive5(10) -> " << addFive5(10) << endl << endl;

    // Anonymous function using lambda expression
    // Return type deduction/inference
    // Template parameter type
    // C++20
    auto addFive6 = []<typename T>(T input){ return input + 5; };

    cout << "addFive6(10) -> " << addFive6(10) << endl << endl;

    // Named function pointer
    // C++98
    cout << "funcMath(10, funcMultiplyTwo) -> " << funcMath(10, funcMultiplyTwo) << endl;

    // Anonymous function using lambda expression
    // C++11
    cout << "funcMath(10, [](int input){ return input * 2; }) -> " << funcMath(10, [](int input){ return input * 2; }) << endl;

    cout << endl;

    // Anonymous function using lambda expression
    // Capture list
    // C++11
    int valueToCompare = 10;
    int valueToSet = 20;

    cout << "Orginal List: " << endl;
    vector<int> numbers = { 5, 15, 5, 15, 5 };

    for (auto item : numbers)
    {
        cout << item << " ";
    }
    cout << endl;

    replace_if(numbers.begin(), numbers.end(), [valueToCompare](int item)
    {
        return item < valueToCompare ? true : false;
    }, valueToSet);

    cout << "If value < 10, set as 20: " << endl;
    for (auto item : numbers)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
