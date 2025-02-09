#include<iostream>
using namespace std;

void starryline(int num_spaces, int num_stars){
    for(int i = 0; i < 3; i++){
        for(int i = 0; i < num_spaces; i++){
            cout << " ";
        }
        for(int i = 0; i < num_stars; i++){
            cout << "*";
        }
        for(int i = 0; i < num_spaces; i++){
            cout << " ";
        }
        cout << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<= n ; i++){
        starryline((n - i), (2*i - 1));
    }


}