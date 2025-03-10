#include <iostream>
#include <string>


bool frequencyComparison(int a[26], int b[26]){
    for(int i = 0; i < 26; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

void frequencyCalc(std::string jumble, int f[26]){
    char frequency[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i = 0; i < jumble.length(); i++){
        for(int j = 0; j < 26; j++){
            if(jumble[i] == frequency[j]){
                f[j]++;
            }
        }
    }

}

int check(std::string input[], int n, std::string jumble){

    int f1[26] = {0};


    frequencyCalc(jumble, f1);

    for(int i = 0; i < n; i++){
        int f2[26] = {0};
        frequencyCalc(input[i], f2);

        if(frequencyComparison(f1, f2) == 1){
            return i;
        }

    }

    return (n+1);


}


int main(){
    int n; std::cin >> n;
    std::string input[n];
    for(int i = 0; i < n; i++){
        std::cin >> input[i];
    } 
    std::string jumble; std::cin >> jumble;
    

    if(check(input, n, jumble) == (n+1)){
        return 0;
    }
    else{
        std::cout << input[check(input, n, jumble)];
    }

    




}