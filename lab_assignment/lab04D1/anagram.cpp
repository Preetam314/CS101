#include <simplecpp>

bool isanagram(int& a , int& b){
    int n1 = 0;
    int n2 = 0;
    while(a > 0){
        n1 = a%10;
        a = a/10;

    }
    while(b > 0){
        n2 = b%10;
        b = a/10;

    }
    if(n1 == n2){
        return 1;
    }
    else{
        return 0;
    }
}

main_program{
    int a; cin >> a;
    int b; cin >> b;
    if(isanagram(a, b) == 1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}