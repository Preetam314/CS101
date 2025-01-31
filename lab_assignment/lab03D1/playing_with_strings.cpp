#include <simplecpp>

main_program{
    int len_S, len_T;
    cin >> len_S;
    cin >> len_T;
    string S, T; 
    cin >> S;
    cin >> T;
    int weight_S = 0;
    int weight_T = 0;
    for(int i = 0; i < len_S; i++){
        int temp = int(S[i]);
        if(temp == 65 || temp == 69  || temp == 73 || temp == 79 || temp == 85 ){
            weight_S += 2;
        }
        else if(temp == 97 || temp == 101 || temp == 105 || temp == 111 || temp == 117){
            weight_S += 5;
        }
        else if(temp >= 65 && temp <= 90){
            weight_S += (temp - 65);
        }
        else if(temp >= 97 && temp <= 122){
            weight_S += (temp - 95);
        }
        else{
            weight_S += (temp%10);
        }
    }
    for(int i = 0; i < len_T; i++){
        int temp = int(T[i]);
        if(temp == 65 || temp == 69  || temp == 73 || temp == 79 || temp == 85 ){
            weight_T += 3 - 1;
        }
        else if(temp == 97 || temp == 101 || temp == 105 || temp == 111 || temp == 117){
            weight_T += 3 + 2;
        }
        else if(temp >= 65 && temp <= 90){
            weight_T += (temp - 64 - 1);
        }
        else if(temp >= 97 && temp <= 122){
            weight_T += (temp - 97 + 2);
        }
        else{
            weight_T += (temp%10);
        }
    }


    len_S = abs(weight_S - weight_T) ;// reusing variable


    cout << len_S ;
    if(len_S < 10){
        cout << " close";
    }
    else if(len_S < 50){
        cout << " Moderate";
    }
    else{
        cout  << " Far";
    }
}