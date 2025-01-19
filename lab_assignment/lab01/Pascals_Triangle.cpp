#include<simplecpp>

main_program{


    int n;
    cin >> n;
    int i = 0;

    repeat(n){
        repeat(n -1 - i){
            cout << "_";
        }
        repeat( 2*i + 1){
            cout << "*";
        }
        repeat(n-1 -i){
            cout << "_";
        }
        i = i + 1;
        cout << endl;
    }

}

/*
You are tasked with generating a pattern that resembles Pascals Triangle, but using asterisks (*) in place of the numbers. Each row will have an odd number of asterisks (*), and the spaces before and after the asterisks will be filled with underscores (_). The pattern should be symmetric. 

For example for n=3,

    The first row contains 1 asterisk (*).
    The second row contains 3 asterisks (*).
    The third row contains 5 asterisks (*).
    The spaces before and after the asterisks in each row should be filled with underscores (_) so that the pattern is centered.

__*__

_***_

*****
Input Format:

    A single integer n, representing the number of rows to generate.
*/