#include<simplecpp>
main_program{
    int a, b;
    cin >> a >> b;
    int gcd = 0;
    if(a > b){
        a = a + b;
        b =  a - b;
        a =  a - b;
    }
        
    
  for(int i = 1; i <= b ; i++){

    if(a%i == 0 && b%i ==0){
        gcd = i;
    }
  }
  cout << gcd;
}

/*
Write a cpp program that takes two integers n and m as input and finds the GCD of n and m.

Let's recall that the GCD (Greatest Common Divisor) of two integers is the largest non-negative integer that divides both of the numbers without leaving a remainder. For example, the GCD of 12 and 15 is 3.
Input Format:

    Two integers, n and m.


Output Format:

    An integer representing the GCD of n and m.


Assumptions on input :

    n and m will be between 0 and 1000000 (both inclusive).
*/