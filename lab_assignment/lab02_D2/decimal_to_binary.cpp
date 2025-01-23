#include<simplecpp>

main_program{

    int n;
    cin >> n;
    int k = n;
    int two_power = 0;
    int biggest_exponent = 1; //lageest exponent of 2 that is less that n





    for(int i = 0; i < n; i++){ //this is for calculating biggest power two can have
        k = k/2;
        two_power++;
        if(k == 0){
            two_power = two_power -1;
            break;     
        }
    }

    for(int i = 0; i < two_power; i++){ // this is for calculating that 2 powers something that is biggest
        biggest_exponent = biggest_exponent*2;
    }


    for(int i = 0; i <= two_power; i++){
        if(n >= biggest_exponent){
            cout << 1;
            n = n - biggest_exponent;
            biggest_exponent = biggest_exponent/2;
        }
        else{
            cout << 0;
            biggest_exponent = biggest_exponent/2;
        }


    }
    //cout << biggest_exponent;
    
    


}

/*
Write a simplecpp program that takes a decimal number n as input and converts it into its binary representation.

The binary system (base 2, unlike base 10 in decimal system) uses only two digits: 0 and 1. It's the fundamental system used in computers.

    Place Value: Just like in the decimal system, each digit in a binary number has a place value based on powers of 2. For example, in the binary number 1011, the digits represent:
    1 2 (8)
    0 2 (0)
    1 2 (2)
    1 2 (1)

So, 1011 in binary is 8 + 0 + 2 + 1 = 11 in decimal.


To convert decimal to binary:

    Find the largest power of 2 (denoted as 2^p) that is smaller than or equal to n by starting from p = 0 and incrementing p until 2^p exceeds n. Then, decrease p by 1 to get the correct power.
    Start from the highest power of 2^p to 2^0
    Determine if the decimal number is greater than or equal to the value of the current power
    If yes, print 1 and subtract the value of the current power from the decimal number
    If no, print 0
    Move to the next lower power of 2


Example for Decimal 21

    The largest power of 2 is 4 that is smaller than or equal to n (2^5 > 21: too large, 16 <= 21: This is the starting point.)
    Going from 2^4 to 2^0
    21 >= 2^4. Print 1, and n = 21 - 16 = 5
    5 < 2^3: Print 0, n remains 5
    5 >= 2^2: Print 1, and n = 5 - 4 = 1
    1 < 2^1: Print 0, n remains 1
    1 >= 2^0: Print 1, n = 1 - 1 = 0



Input Format:

    A single decimal number, n, provided as an integer.


Output Format:

    A string representing the binary equivalent of the decimal number n.


Assumptions on input :

    Assume that N will be between 1 and 1000, both inclusive.


*/