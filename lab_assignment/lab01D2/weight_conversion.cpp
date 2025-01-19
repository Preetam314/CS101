#include<simplecpp>
#include<iomanip>

main_program{
    float output;
    cin >> output;
    output = output*2.20;


    cout << fixed << setprecision(2) << output << endl;
}

/*
You are tasked with writing a C++ program that converts weight from kilograms (kg) to pounds (lb). The user will input a weight in kilograms, and your program should output the equivalent weight in pounds.

To convert kilograms (kg) to pounds (lb), use the following formula:

Pounds(lb) = Kilograms(kg) 2.20

where 1 kilogram (kg) = 2.20 pounds (lb)
Input Format:

    The first line of input contains the weight in kilograms (kg), which is a floating-point number.


Output Format:

    A single floating-point number representing the weight in pounds (lb), rounded to 2 decimal places.


Assumptions:

    The output value will be a positive floating-point number in between 1 and 1000, both inclusive
    The output should be rounded to two decimal places.
    Round to two decimal places using the iomanip library: (Ask the TAs for help)
    Note: While printing the output use setprecision(2) function from <iomanip> library.

Example: If you want to print variable x, you have to write

cout << std::fixed << std::setprecision(2) << x << endl;


Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",  
    cout << "The computed answer is", etc.
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program.
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded
*/