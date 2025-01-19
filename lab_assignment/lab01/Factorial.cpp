#include<simplecpp>

main_program{


    int n;
    cin >> n;
    int i = n;
    int output = n;
    if(n == 0){
        cout << 1;
    }
    else if(n == 1){
        cout << 1;
    }
    else{
    repeat(n -1){
        output = output*(i - 1);
        i = i -1;
    }
    cout << output;
    }
}

/*
Write a program that calculates the factorial of a given non-negative integer n. The factorial of a number n is the product of all positive integers less than or equal to n.

Example:

    5! = 54321 = 120
    0! = 1 (by definition)

Input Format:

    A single non-negative integer n (0<=n<=10) , representing the number for which the factorial needs to be computed.


Output Format:

    The program should print the factorial of the number n.
*/