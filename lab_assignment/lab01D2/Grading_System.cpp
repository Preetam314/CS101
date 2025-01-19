#include<simplecpp>
main_program{
    int mark;
    cin >> mark;
    if(mark >= 90){
        cout << "A";
    }
    else if(mark >= 80){
        cout << "B";
    }
    else if(mark >= 70){
        cout << "C";
    }
    else if(mark >= 60){
        cout << "D";
    }
    else if(mark >= 50){
        cout << "E";
    }
    else{
        cout << "F";
    }

}

/*
You are tasked with implementing a C++ program that prints a student's grade based on their numerical score. The program should classify the grade into the following categories:

    A: For scores greater than or equal to 90.
    B: For scores between 80 and 89 (inclusive).
    C: For scores between 70 and 79 (inclusive).
    D: For scores between 60 and 69 (inclusive).
    E: For scores between 50 and 59 (inclusive).
    F: For scores below 50.

Input:

    A single integer representing the student's score.


Output:

    The program should print the grade category corresponding to the given score based on the above rules.


Assumptions on the input : 

    Integer is assumed to be lying in range of 0-100 (inclusive)


Note:

    Do not write any C++ statements for printing general messages. For example, the following should NOT be present in your program:
    cout << "Enter a number:",  
    cout << "The computed answer is", etc.
    cout should be used to print only the computed final output. In addition, do not print unnecessary spaces unless specified in the program.
    If any hard coding is found, or if any test case passes by merely writing a cout statement and without any logic, then the marks for that test case will NOT be awarded.
*/