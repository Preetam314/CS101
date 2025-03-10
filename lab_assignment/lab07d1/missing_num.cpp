#include<iostream>
#include<string>

int charToint(char c){
    return int(c) - '0';
}

bool arrCheck(int b[], int a1, int b1){
    int sum = 0;
    for(int i = 0; i < b1 ; i++){
        if(a1 == b[i]) sum++;
    }
    return sum;
}


int main(){
    int n; std::cin >> n;

    int a[n] = {0};
    for(int i = 0; i < n; i++){
        a[i] = a[i] + i + 1;
    }
    std::cin.ignore();
    std::string s;
    getline(std::cin, s);

    int b[s.length()/2 +1] = {0};

    for(int i = 0; i < s.length()/2 +1; i++){
        b[i] = charToint(s[2*i]);
    }

    for(int i = 0;i < n; i++){
        if(!arrCheck(b, a[i],s.length()/2 +1)) std::cout << a[i] << " ";
    }













    



}