#include <simplecpp>

main_program{
    int n;
    cin >> n;

    if(n%400 == 0 ){
        cout << "Century Leap Year";     
    }
    else if(n%4 == 0 && n%100 != 0){
        cout << "Leap Year";
    }
    else{  
        cout << "Not a Leap Year"; 
    }
}

/*
Write a program to determine whether a given year is a leap year. A leap year has 366 days instead of the usual 365. The extra day is added to February, making it 29 days long. The rules for determining a leap year are as follows:

    A year is a century leap year if it is divisible by 400
    A year is a leap year If it is divisible by 4 but not by 100
    Otherwise, it is a common year with 365 days.

Input:

    A single integer Y, representing the year.


Output:

Print one of the following:

    Century Leap Year if the year is a century leap year
    Leap Year if the year is a leap year.
    Not a Leap Year if the year is not a leap year.

Assumptions on the input : 

    Y is a positive integer in the range 1<=Y<=100000.
    The year is within a valid range of the Gregorian calendar.

Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",  
    cout << "The computed answer is", etc.
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program.
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded.
*/