#include <iostream>
#include <string>


bool match(std::string a, std::string course[], int n){
    int count = 0;
    for(int i =0; i < n; i++){
        if(a == course[i]) count++;
    }
    if(count > 0) return 1;

    return 0;
}


int main(){
    int n1; std::cin >>n1;
    int n2; std::cin >> n2;
    std::string cs101[n1];
    std::string ma110[n2];

    for(int i = 0; i < n1; i++){
        std::cin >> cs101[i];
    }
    for(int i = 0; i < n2; i++){
        std::cin >> ma110[i];
    }

    for(int i = 0; i < n1; i++){
        if(!match(cs101[i], ma110, n2)) std::cout << cs101[i] << " ";
    }
    for(int i = 0; i < n2; i++){
        if(!match(ma110[i], cs101, n1)) std::cout << ma110[i] << " ";
    }
    

}