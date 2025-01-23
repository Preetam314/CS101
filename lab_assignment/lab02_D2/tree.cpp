#include <simplecpp>

main_program{
    int input;
    cin >> input;
    int n = input;
    for(int i = 1; i <= n; i++){
        repeat(n - i){
            cout << " ";
        }
        repeat(i -1){
            cout << "*+";
        }
        cout << "*";
        repeat(n - i){
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < (n/2); i++){
        repeat(n - 2){
            cout << " ";
        }
        cout << "***";
        repeat(n - 2){
            cout << " ";
        } 
        cout << endl;     
    }

}