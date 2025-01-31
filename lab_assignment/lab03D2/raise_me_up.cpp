#include <simplecpp>

main_program{
	unsigned int a, p;
    unsigned int res = 1;
    cin >> a >> p;
    if(p%2 == 0){
        repeat(p/2){
            res *= a;
        }
        res = res*a;
    }
    else{
        repeat((p-1)/2){
            res *= a;
        }
        res = res*res*a;
    }
    cout << res;

}