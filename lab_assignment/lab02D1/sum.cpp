#include <simplecpp>

main_program{

    int n;
    cin >> n;
    int k = 10;
    int j = 1;
    int digit = 0;
    int sum = 0;
    
    if(n < 0){
        n = -n;
    }
    digit = log10(n)+ 1;
    for(int i = 0; i < digit ; i++){

          if((n == 0)){
            break;
        }
        sum = sum + (n%k)/j;        
        n = (n - n%k);
        k = k*10;
        j = j*10;
        }
        cout << sum;
    
}