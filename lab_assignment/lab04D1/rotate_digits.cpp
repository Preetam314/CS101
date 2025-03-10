#include<iostream>
using namespace std;

int rotateMe(int n, string c){
    int digit = n;
    int lastDigit = 0;
    int k = 1;
    

    for(int i = 0; i < c.size(); i++){
        if(c[i] == 'R'){
            k = 1;
            for(int i = 0;digit > 0; i++){
                digit = digit/10;
                k = k*10;
                if(digit/10 == 0){
                    lastDigit = digit%10;
                    digit = n;
                    digit = digit - lastDigit*k;
                    digit = digit*10 + lastDigit;
                    break;
                }
            }
        }
        else if(c[i] == 'L'){
            k = 1;
            for(int i = 1; digit > 0; i++){
                digit = digit/10;
                k = k*10;
                if(digit/10 == 0){
                    lastDigit = digit%10;
                    digit = n;
                    digit = digit - lastDigit*k;
                    digit = digit + (n%10)*k;
                    break;
                }
            }

        }
        else{
            break;
        }
    }
    return digit;


}

int main(){
    int n; cin >> n;
    string c; cin >> c;

    cout << rotateMe(n, c);

}