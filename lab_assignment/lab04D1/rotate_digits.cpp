#include <simplecpp>

int Lrotate(int& n){
    int fix = n;
    int i;
    int intermidiate = n;

    for(i = 0; intermidiate > 0; i++){
        intermidiate = intermidiate/10;
    }
    intermidiate = n;
    n =  n/pow(10, i - 1);
    intermidiate = -(n*pow(10, i - 1) - intermidiate);
    intermidiate = intermidiate*10 + n;
    n = fix;

    
    return intermidiate;
}


int Rrotate(int& n){
    int fix = n;
    int intermidiate = n;
    int i;
    for(i = 0; intermidiate > 0; i++){
        intermidiate = intermidiate/10;
    }
    intermidiate = n%10;
    n = (n/10) + intermidiate*pow(10, i - 1) ;

    intermidiate = n;
    n = fix;
    return intermidiate;
}


int rotateMe(int& n, string& c){
    int k = n;
    for(int i = 0; i <= c.size(); i++){
        if(c[i] == 'R'){
            k = Rrotate(k);
        }
        if(c[i] == 'L'){
            k = Lrotate(k);
        }
        if(c[i] == 'X'){
            break;
        }
    }

    return k;

}

main_program{
    int n; cin >> n;
    string c; cin >> c;

    cout << rotateMe(n, c) << endl;

}