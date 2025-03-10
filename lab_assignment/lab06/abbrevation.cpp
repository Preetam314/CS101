#include <simplecpp>

bool charcheck(char &c1, char &c2){
    if(c1 >= 97){
        c1 = c1 -32;
    }
    if(c2 >= 97){
        c2 = c2 - 32;
    }

    if(c1 == c2){
        return 1;
    }
    else{
        return 0;
    }
}

bool isValidAbbreviation(char a,char b,char c,char d, string s){

    string intermidiate;
    intermidiate[0] = a;
    int x = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == 32){
             intermidiate[x] = s[i + 1];
             x++;
        }
    }
    if(intermidiate.size() != 4){
        return 0;
    }
    else if(charcheck(a, intermidiate[0]) &&  charcheck(b, intermidiate[1]) && charcheck(c, intermidiate[2]) && charcheck(d, intermidiate[3])){
        return 1;
    }
    else{
        return 0;
    }
    
}

main_program{

    char a, b, c, d;
    cin >> a >> b >> c >> d;
    cin >> noskipws;

    string s;
    cin >> s;

    if(isValidAbbreviation(a, b, c, d, s) == 1){
        cout << "yes";
    }
    else{
        cout << "no";
    }



}