#include <simplecpp>

main_program{
    int a, b;
    cin >> a;
    cin >> b;
    int lowest_multiple = a*b;

    for(int i = 1; i <= (a*b); i++){
        if(i%a == 0 && i %b == 0 && i >= a && i >= b && i < lowest_multiple){
            lowest_multiple = i;
        }
    }
    cout << lowest_multiple;

}