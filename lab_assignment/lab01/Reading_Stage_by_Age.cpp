#include<simplecpp>

main_program{

   int age;
   cin >> age;
   if(age < 2){
    cout << "Invalid";
   }
   else if(age < 4){
    cout << "Pre-reader";
   }
   else if(age < 8){
    cout << "Beginning reader";
   }
   else{
    cout << "Advanced reader";
   }
   
}
/*
You are tasked with implementing a program in C++ that determines a person's reading stage based on age. The program categorises the person into one of the following reading stages:

    Pre-reader: For ages between 2 and 3 (inclusive).
    Beginning reader: For ages between 4 and 5 (inclusive).
    Intermediate reader: For ages between 6 and 7 (inclusive).
    Advanced reader: For ages 8 and above.
    If the input age is less than 2, the program outputs "Invalid".

Input Format:

    A single integer age, where 0 age 100


Output Format:

    A single line containing one of the following strings:
    "Pre-reader"
    "Beginning reader"
    "Intermediate reader"
    "Advanced reader"
    "Invalid"

Notes:

    Do not include general prompts like "Enter a number" or "The computed answer is".
    Only print the final computed output.
    Avoid hardcoding outputs for specific cases without implementing logical checks for ranges.
*/