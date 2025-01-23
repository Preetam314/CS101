#include<simplecpp>

main_program{
    int n;
    cin >> n;
    int k = 10;
    int j = 1;
    int max = 0;
    int min = 9;
    int digit = 0;

    digit = log10(n)+ 1;



    

    for(int i = 0; i < digit ; i++){

          if((n == 0)){
            max = 0; min = 0;
            break;
        }
    

        if(((n%k)/j) > max){
            max = (n%k)/j;
        }
        if(((n%k)/j) < min){
            min = (n%k)/j;
        }

        
        n = (n - n%k);
        k = k*10;
        j = j*10;


        }

    cout << max - min;
}

/*
Write a C++ program that takes an integer n as input and calculates the difference between the largest and smallest digits in the integer n.

For example:

    For n = 5736, the largest digit is 7 and the smallest digit is 3. The difference is 7 - 3 = 4.
    For n = 42, the largest digit is 4 and the smallest digit is 2. The difference is 4 - 2 = 2.

Input:

    An integer n (0 <= n <= 10^6), where n is a positive integer.


Output:

    Print the difference between the largest and smallest digits in the integer n.
*/