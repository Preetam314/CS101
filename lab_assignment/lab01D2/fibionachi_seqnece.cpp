#include<simplecpp>
main_program{
    int term1 = 0;
    int term2 = 1;
    int result = 0;
    int n;
    cin >> n;


    if(n == 1){
        cout << term1; 
    }
    else if (n == 2){
        cout << term1 << " " <<term2;
    }
    else{
    cout << term1 << " "  << term2 << " ";
    repeat(n - 2){
        
        result = term1 + term2;
        term1 = term2;
        term2 = result;
        cout << result << " ";
    }
    }
}

/*
You are tasked with writing a C++ program that prints the Fibonacci series up to the n-th term. The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.

Mathematically, the Fibonacci sequence is defined as:

F0 = 0, F1 = 1, 

Fn = Fn1 + Fn2 for n>=2

Your task is to print n terms of the Fibonacci sequence where the 1st term is F0 = 0.
Input Format:

    A single integer n, representing the number of terms to generate in the Fibonacci sequence.


Output Format:

    The program should output a series of first n fibonacci numbers .


Assumptions on the input :  

    Value of n is assumed to be in the range of 1 <= n <= 30.


Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",
    cout << "The computed answer is", etc. 
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program. 
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded
*/