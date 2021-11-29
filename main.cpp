/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Vishal Choday
 */
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an operation ('+','-','*','/','plus','minus','mul','div') followed by two operands (followed by 'Enter')\n";
    string our_operation;
    double first_op;
    double second_op;
    //double this_is_our_answer = 0;
    cin >> our_operation >> first_op >> second_op;
    
    if (our_operation == "+" || our_operation == "plus")
    {
        cout<<"The answer is: "<<first_op + second_op<<"\n";
    }
    else if (our_operation == "*" || our_operation == "mul")
    {
        cout<<"The answer is: "<<first_op * second_op<<"\n";
    }
    else if (our_operation == "-" || our_operation == "minus")
    {
        cout<<"The answer is: "<<first_op - second_op<<"\n";
    
    }
    else if (our_operation == "/" || our_operation == "div")
    {
        cout<<"The answer is: "<<first_op / second_op<<"\n";
    }
    
    return 0;
}
