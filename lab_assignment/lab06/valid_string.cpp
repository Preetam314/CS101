#include <simplecpp>

bool isFirstUpperLower(char s){
    if(int(s) >= 97){
        return 1;
    }
    else{
        return 0; 
    }
}
main_program{
    int n; cin >> n;
    string s; cin >> s;
    bool ans = 1;
    if(isFirstUpperLower(s[0])){
        for(int i = 1; i < n; i++){
            if((int(s[i]) >= 48 && int(s[i]) <= 57)){
                continue;
            }
            if(isFirstUpperLower(s[i]) != 1){
               ans = 0;
            }
        }
    }
    else{
        for(int i = 1; i < n; i++){
            if((int(s[i]) >= 48 && int(s[i]) <= 57)){
                continue;
            }
            if(isFirstUpperLower(s[i]) != 0){
               ans = 0;
            }
        }
    }

    if(ans == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}