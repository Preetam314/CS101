#include<simplecpp>
#include<iomanip> 

main_program{
    double input;
    cin >> input;
    input = (input*9)/5 + 32;
    cout << fixed << setprecision(2)  << input;

}