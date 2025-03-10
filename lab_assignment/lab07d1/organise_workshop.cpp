#include<iostream>


int no_of_elements(char workshop[], int m){
    int result = 0;
    int var = workshop[0];
    for(int i = 0; i < m; i++){
        if(var == workshop[i]) result++;
    }
    return result;

}

int main(){
    int n; std::cin >> n;
    int m; std::cin >> m;
    char workshop[m+1]; workshop[m] = '\0';
    for(int i = 0; i < m; i++){
        std::cin >> workshop[i]; 
    }
    int distinct_elements = m/no_of_elements(workshop, m);
    int result = m;
    if(distinct_elements - 1  < n){
        result = (no_of_elements(workshop,m) - 1)*(n - distinct_elements + 1) + m;
    }


    std::cout << result;

}


/*
Question 
You are organizing a series of workshops for a conference. Each workshop is labeled with a letter from A to Z. Your task is to schedule the workshops in such a way that there is a gap of at least n days between two workshops with the same label. The gap between two workshops with the same label must be filled with either other workshops or rest days. You need to determine the minimum number of days required to organize all the workshops, following the given constraint.


Example:


Input:

workshops = ['P', 'P', 'P', 'Q', 'Q', 'Q']

n = 2

Output:

8


Explanation:

In this case, you have the following workshops:

    You need to schedule the workshop 'P' 3 times and 'Q' 3 times, with a gap of at least 2 days between each occurrence of 'P' and between each occurrence of 'Q'.


One possible schedule is: P, Q, rest, P, Q, rest, P, Q

This satisfies the condition that there are at least 2 days of rest between two occurrences of 'P' and two occurrences of 'Q'. Thus, the minimum number of days required is 8.

Input Format:

    An integer n (1 <= n <= 100), representing the minimum number of days of rest between two workshops with the same label.
    An integer m(1 <= m <= 10^3), representing the total number of workshops to be scheduled.
    A character array of workshops of length m, representing the workshops to be scheduled. Each character in the array represents a workshop label, which is a single uppercase letter from A to Z.

Output Format:

    Print the minimum number of days required to organize all the workshops while respecting the rest constraint.

*/