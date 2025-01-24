#include <simplecpp>

main_program{
    int a, b;
    cin >> a;
    cin >> b;
    int lowest_multiple = a*b;

    for(int i = 1; i <= (a*b); i++){
        if(i%a == 0 && i %b == 0 && i >= a && i >= b && i < lowest_multiple){
            lowest_multiple = i;
        }
    }
    cout << lowest_multiple;

}

/*
Write a cpp program that takes two integers n and m as input and finds the LCM of n and m.
Input Format:

    Two integers, n and m.


Output Format:

    An integer representing the LCM of n and m.


Assumptions on input :

    n and m will be between 0 and 100000 (both inclusive).


Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",  
    cout << "The computed answer is", etc.
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program.
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded.
*/