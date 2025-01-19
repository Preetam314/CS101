#include<simplecpp>

main_program{
    int n;
    int i = 1;
    cin >> n;

    repeat(n){

        int k = 1;
        repeat(i){
            
            cout << k;
            k = k + 1;
        }
        cout << endl;
        i = i +1;

    }

}

/*
Floyd's Triangle is a pattern of numbers arranged in rows, where:

    Each row is aligned to form a right angle on the left side
    Row 1 has 1 number
    Row 2 has 2 numbers
    Row 3 has 3 numbers (and so on...)

The numbers start at 1 and increase by 1 as we fill the triangle from left to right, top to bottom.

Write a program to print Floyds Triangle for a given number of rows n.

E.g. n = 4

1

12

123

1234


Input Format:

    A single integer n, representing the number of rows of Floyds Triangle.


Output Format:

    Print the Floyds Triangle with n rows.
    Each row should contain consecutive integers starting from 1.

Assumptions on the input : 

    Assume the value of n in the range 1 <= n <= 50.


Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",
    cout << "The computed answer is", etc. 
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program. 
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded.

Visible Test cases
*/
