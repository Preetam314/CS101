#include<simplecpp>


main_program{


    float n;
    cin >> n;
    turtleSim();

    
    repeat(n){
        left(180 - 360/n);
        forward(50);
        left(720/n);
        forward(50);
        left(180);

    }
     

    getClick();
}
/*
Write a C++ program to generate a starburst pattern with a given number of pointed sides n. Each side of the pattern must have a fixed length of 50 units. 

For n=8, the program should produce an 8-pointed star, and the program should be able to handle other values of n based on user input.


Input


An integer n (n > 4), which specifies the number of pointed sides (star tips).
*/