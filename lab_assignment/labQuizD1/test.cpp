#include <simplecpp>

int calculator(int &a, int &b, char &c){
    if(c == '+'){
        return a+b;
    }
    else if(c == '-'){
        return a -b;
    }
    else if(c == '*'){
        return a*b;
    }
    else{
        return 0;
    }
}


main_program{

    int a; cin >> a;
    while(1){
        char c; cin >> c;
        if(c == 'x'){
            break;
        }
        int b; cin >> b;
        a = calculator(a, b, c);
    }
    cout <<    a;
}