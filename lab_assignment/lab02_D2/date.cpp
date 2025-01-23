#include<simplecpp>

// this program is long and lokks like hardcoding because function, arrays and other topic have no been. this is made using if statements only
main_program{
    int year;
    int day;
    cin >> year;
    cin  >> day;
    if(year/4 != 0){
        if((day - 31) <= 0){
            cout << day << "/" << 1 << "/";
        }
        else if((day - 59) <= 0){
            day = day - 31;
            cout << day << "/" << 2 << "/";
        }
        else if((day - 90) <= 0){
            day = day - 59;
            cout << day << "/" << 3 << "/";
        }
        else if((day - 120) <= 0){
            day = day - 90;
            cout << day << "/" << 4 << "/";
        }
        else if((day - 151) <= 0){
            day = day - 120;
            cout << day << "/" << 5 << "/";
        }
        else if((day - 181) <= 0){
            day = day - 151;
            cout << day << "/" << 6 << "/";
        }
        else if((day - 212) <= 0){
            day = day - 181;
            cout << day << "/" << 7 << "/";
        }
        else if((day - 243) <= 0){
            day = day - 212;
            cout << day << "/" << 8 << "/";
        }
        else if((day - 273) <= 0){
            day = day - 243;
            cout << day << "/" << 9 << "/";
        }
        else if((day - 304) <= 0){
            day = day - 273;
            cout << day << "/" << 10 << "/";
        }
        else if((day - 334) <= 0){
            day = day - 304;
            cout << day << "/" << 11 << "/";
        }
        else if((day - 365) <= 0){
            day = day - 334;
            cout << day << "/" << 12 << "/";
        }
    } 
    else if(year%400 == 0 && year%100 == 0){
        if((day - 31) <= 0){
            cout << day << "/" << 1 << "/";
        }
        else if((day - 59 + 1) <= 0){
            day = day - 31;
            cout << day << "/" << 2 << "/";
        }
        else if((day - 90 + 1) <= 0){
            day = day - 59;
            cout << day << "/" << 3 << "/";
        }
        else if((day - 120 + 1) <= 0){
            day = day - 90;
            cout << day << "/" << 4 << "/";
        }
        else if((day - 151 + 1) <= 0){
            day = day - 120;
            cout << day << "/" << 5 << "/";
        }
        else if((day - 181 + 1) <= 0){
            day = day - 151;
            cout << day << "/" << 6 << "/";
        }
        else if((day - 212 + 1) <= 0){
            day = day - 181;
            cout << day << "/" << 7 << "/";
        }
        else if((day - 243 + 1) <= 0){
            day = day - 212;
            cout << day << "/" << 8 << "/";
        }
        else if((day - 273 + 1) <= 0){
            day = day - 243;
            cout << day << "/" << 9 << "/";
        }
        else if((day - 304 + 1) <= 0){
            day = day - 273;
            cout << day << "/" << 10 << "/";
        }
        else if((day - 334 + 1) <= 0){
            day = day - 304;
            cout << day << "/" << 11 << "/";
        }
        else if((day - 365 + 1) <= 0){
            day = day - 334;
            cout << day << "/" << 12 << "/";
        }


    } 
    else{
        if((day - 31) <= 0){
            cout << day << "/" << 1 << "/";
        }
        else if((day - 59) <= 0){
            day = day - 31;
            cout << day << "/" << 2 << "/";
        }
        else if((day - 90) <= 0){
            day = day - 59;
            cout << day << "/" << 3 << "/";
        }
        else if((day - 120) <= 0){
            day = day - 90;
            cout << day << "/" << 4 << "/";
        }
        else if((day - 151) <= 0){
            day = day - 120;
            cout << day << "/" << 5 << "/";
        }
        else if((day - 181) <= 0){
            day = day - 151;
            cout << day << "/" << 6 << "/";
        }
        else if((day - 212) <= 0){
            day = day - 181;
            cout << day << "/" << 7 << "/";
        }
        else if((day - 243) <= 0){
            day = day - 212;
            cout << day << "/" << 8 << "/";
        }
        else if((day - 273) <= 0){
            day = day - 243;
            cout << day << "/" << 9 << "/";
        }
        else if((day - 304) <= 0){
            day = day - 273;
            cout << day << "/" << 10 << "/";
        }
        else if((day - 334) <= 0){
            day = day - 304;
            cout << day << "/" << 11 << "/";
        }
        else if((day - 365) <= 0){
            day = day - 334;
            cout << day << "/" << 12 << "/";
        }

    }
    cout << year;  

}

/*
Write a C++ program that takes two integers as input:

    An integer y, representing a year.
    An integer d, representing a day of the year.

The program should output the corresponding date in the format DD/MM/YYYY for the given day d of the year y.


Input Format:

    An integer, y representing the year (1100 <= y <= 2900).
    An integer d, representing the day of the year (1 <= d <= 366).

Output Format:

    Print a date in the given format.
*/