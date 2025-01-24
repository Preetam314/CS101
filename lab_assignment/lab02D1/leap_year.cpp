#include <simplecpp>

main_program{
    int n;
    cin >> n;

    if(n%400 == 0 ){
        cout << "Century Leap Year";     
    }
    else if(n%4 == 0 && n%100 != 0){
        cout << "Leap Year";
    }
    else{  
        cout << "Not a Leap Year"; 
    }
}