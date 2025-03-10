#include <simplecpp>

main_program{
    char c, y, e;
    cin >> c >> y >> e;
    bool ans = 1;
    if(c == 'b'){
        if(y == '1' && e != 'i'){
            ans = 0;
        }
        else if(y == '2' && e != 'c'){
            ans = 0;
        }
        else if(y == '3' && (e == 't')){
            ans = 0;
        }
        else if(y == '4' && e != 'e'){
            ans = 0;
        }
    }
    else{
        if(y == '1' && (e == 'c' || e == 't')){
            ans = 0;
        }
        else if(y == '2' && (e == 'c' || e == 'i')){
            ans = 0;
        }
    }


    if(ans == 1){
        cout << "valid";
    }
    else{
        cout << "invalid";
    }
}