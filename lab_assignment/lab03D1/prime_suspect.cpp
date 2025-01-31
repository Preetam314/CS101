#include <simplecpp>


    

main_program{

    int n;
    cin >> n;
    bool prime = 1;

    int i = 0;
    if(n%2 == 0 && n > 2){
        prime = 0;
    }
    else{
        for(i = 1; (i*i) < n; i++){
            if(n%(2*i + 1) == 0 && ((2*i + 1) < n)){
                prime = 0;
            }
            if((2*i + 1) > n){
                break;
            }            
        }
    }

    if(prime){
        cout << "sus" << endl;
    }
    else{
        cout << "not sus" << endl;
    }

}

