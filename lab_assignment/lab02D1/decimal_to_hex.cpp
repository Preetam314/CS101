#include<simplecpp>
main_program{


    int n;
    cin >> n;
    int k = n;
    int sixteen_power = 0;
    int biggest_exponent = 1; 


    for(int i = 0; i <= n; i++){ //this is for calculating biggest power sixteen can have
        k = k/16;
        sixteen_power++;
        if(k == 0){
            sixteen_power = sixteen_power -1;
            break;     
        }
    }
    

    for(int i = 0; i < sixteen_power; i++){ // this is for calculating that 16 powers something that is biggest
        biggest_exponent = biggest_exponent*16;
    }
    k = biggest_exponent;



    for(int i = 0; i < k; i++){
        if(n < biggest_exponent){
            biggest_exponent = biggest_exponent/16;
            cout << 0;
        }
        else if(n >= biggest_exponent && n/biggest_exponent < 10){
            cout << n/biggest_exponent;
            n = n%biggest_exponent;
            biggest_exponent = biggest_exponent/16;
            
        }
        else if(n >= biggest_exponent && n/biggest_exponent >= 10){
            switch(n/biggest_exponent){
                case 10:
                cout << "A";
                break;

                case 11:
                cout << "B";
                break;

                case 12:
                cout << "C";
                break;

                case 13:
                cout << "D";
                break;

                case 14:
                cout << "E";
                break;

                case 15:
                cout << "F";
                break;
            }
            n = n%biggest_exponent;
            biggest_exponent = biggest_exponent/16;
        }

        if(n == 0 && biggest_exponent == 0){
            break;
        }
    }

 
}



    
