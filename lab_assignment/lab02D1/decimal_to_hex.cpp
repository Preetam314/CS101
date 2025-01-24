#include<simplecpp>
main_program{


    int n;
    cin >> n;
    int k = n;
    int sixteen_power = 0;
    int biggest_exponent = 1; 


    for(int i = 0; i <= n; i++){ //this is for calculating biggest power sixteen can have
        k = k/16;
        sixteen_power++;
        if(k == 0){
            sixteen_power = sixteen_power -1;
            break;     
        }
    }
    

    for(int i = 0; i < sixteen_power; i++){ // this is for calculating that 16 powers something that is biggest
        biggest_exponent = biggest_exponent*16;
    }
    k = biggest_exponent;



    for(int i = 0; i < k; i++){
        if(n < biggest_exponent){
            biggest_exponent = biggest_exponent/16;
            cout << 0;
        }
        else if(n >= biggest_exponent && n/biggest_exponent < 10){
            cout << n/biggest_exponent;
            n = n%biggest_exponent;
            biggest_exponent = biggest_exponent/16;
            
        }
        else if(n >= biggest_exponent && n/biggest_exponent >= 10){
            switch(n/biggest_exponent){
                case 10:
                cout << "A";
                break;

                case 11:
                cout << "B";
                break;

                case 12:
                cout << "C";
                break;

                case 13:
                cout << "D";
                break;

                case 14:
                cout << "E";
                break;

                case 15:
                cout << "F";
                break;
            }
            n = n%biggest_exponent;
            biggest_exponent = biggest_exponent/16;
        }

        if(n == 0 && biggest_exponent == 0){
            break;
        }
    }

 
}


/*
Write a cpp program that takes an integer n as input and outputs its hexadecimal representation.

Hexadecimal is a base 16 system, and it uses the digits 09 and the letters AF to represent values 1015. 

Lets break down an example, say 2F3 in hexadecimal.
Step-by-step explanation:

    2 16 (512)
    F 16 (F = 15, so 15 16 = 240)
    3 16 (3 1 = 3)

Now, add them together: 2256 + 1516 + 31 = 512 + 240 + 3 = 755 

So, 2F3 in hexadecimal is 755 in decimal.

Now, we have a decimal representation of n and we want to find the hexadecimal representation of n.

Algorithm to represent a decimal number in hexadecimal form.

    Find the greatest power p of 16 smaller than n.
    If p is smaller than n then print 0 and move to the next lower power of 16.
    Else If p is greater than or equal to n, then print the quotient of n / p and make n = n % p and move to the next lower power of 16.
    Repeat steps 2 and 3 until n and p becomes 0.

Example:

For n = 2575, 

The greatest power of 16 smaller than 2575 is 256 (16 ^ 2). 

So p = 256,

As 2575 >= 256, print A (2575 / 256 = 10), and 10 is represented as A in hexadecimal representation.

Now n will become 15 and p will become 16.

As 15 < 16, print 0.

Now n will remain 15 and p will become 1.

As 15 >= 1, print F (15 / 1 = 15), and 15 is represented as F in hexadecimal representation.

Now n will become 0 and p will become 0, so we STOP.


So, for n = 2575 the hexadecimal representation will be A0F.


Input Format:

    A single integer, n.


Output Format:

    A string representing the hexadecimal equivalent of the integer n.


Assumptions on input :

    n is a non-negative (i.e., n >= 0 )
    n will be between 0 and 1000000 inclusive.
*/
    
