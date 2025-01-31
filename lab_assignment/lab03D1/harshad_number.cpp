#include <simplecpp>
#include <chrono>
using namespace std::chrono;


main_program{

    int n; cin >> n;
    int k = n;
    int sum = 0;
    int i = n;

    while(k){
        k = k/10;
        k = k*10;
        sum = sum + (n - k); 
        n = n/10;
        k =n;
    }
    if(i%sum == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


}
    