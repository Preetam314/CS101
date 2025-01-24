#include <simplecpp>

main_program{

    int n;
    cin >> n;
    int k = 10;
    int j = 1;
    int digit = 0;
    int sum = 0;
    
    if(n < 0){
        n = -n;
    }
    digit = log10(n)+ 1;
    for(int i = 0; i < digit ; i++){

          if((n == 0)){
            break;
        }
        sum = sum + (n%k)/j;        
        n = (n - n%k);
        k = k*10;
        j = j*10;
        }
        cout << sum;
    
}

/*
You are tasked to write a simplecpp program that takes an integer N as input and calculates the sum of its digits.


Input Format:


A single integer N.


Output Format:


A single integer representing the sum of the digits of N.


Assumptions on input:


N lies in between -1000 to 1000, both inclusive.

The sum of digits is calculated using the absolute value of N (ignoring the sign).


Note:


Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:


cout << "Enter a number:",  


cout << "The computed answer is", etc.


cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program.


If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded.
*/