#include <iostream>
#include<string>


using namespace std;

int no_of_elements_string(string &word){
    return sizeof(word)/sizeof(word[0]);
}



string check(string candidates[],int &n,string &partial_word){
    for(int i = 0; i < n; i++){
        if(no_of_elements_string(partial_word) == sizeof(candidates)/sizeof(candidates[0])){
            for(int i = 0; i < no_of_elements_string(partial_word); i++){
                string test = candidates[i];
                if(partial_word[i] == '_'){
                    continue;
                }
                else if(partial_word[i] == test[i]){
                    return test;
                }
                else{
                    return "Not Possible";
                }
            }
        }
    }

}

int main(){
    int n; cin >> n;
    string candidates[n]; 
    for(int i = 0; i < n; i++){
        cin >> candidates[i];
    }
    string partial_word; cin >> partial_word;


    cout << check(candidates, n, partial_word);
}

