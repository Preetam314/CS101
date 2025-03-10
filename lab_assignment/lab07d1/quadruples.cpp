#include<iostream>
#include <vector>
// this code is incomplete

int main(){

    int n;  std::cin>> n;
    std::vector<int> A;
    for(int i =0; i < n; i++){
        int a; std::cin >> a;
        A.push_back(a);
    }
    int i =0, j = 0, k =0, l = 0;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(k = 0;  k < n; k++){
                for(l = 0; l < n; l++){
                    if(i != j && i != k && i != l && j != k && j !=l && k !=l && (A.at(i)*A.at(i) + A.at(j))*A.at(j) == A.at(k)*A.at(k) + A.at(l)*A.at(l)){
                        std::cout << "("<< A.at(i) << "," << A.at(j) << "," << A.at(k) << "," << A.at(l) << ")\n"; 
                    }
                }
            }
        }
    }


}