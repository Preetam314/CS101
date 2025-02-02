#include <simplecpp>
#include <iomanip> 

main_program{
    double n; cin >> n;
    double low = 0;
    double high = n;
    double e = 0.000001;

    while(high - low >= e){
        double mid = (high + low)/2;

        if(mid*mid > n){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout <<fixed << setprecision(6) <<(high + low)/2;


}