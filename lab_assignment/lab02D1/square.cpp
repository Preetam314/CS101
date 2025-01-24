#include <simplecpp>

main_program{
    int n;
    cin >> n;
    int j;
    repeat(n){
        cout << "* " ;
    }
    cout << endl;
    for(int i = 0; i < (n - 2) ; i++){
        cout << "* " ; 
         if(j%2 == 0){
            for(int i = 0; i < (n -2); i++){
                if(i%2 == 0){
                    cout << "- " ;
                }
                else{
                    cout << "+ " ;
                }
        }
        j++;
        }
        else{
            for(int i = 0; i < (n -2); i++){
                if(i%2 == 0){
                    cout << "+ " ;
                }
                else{
                    cout << "- " ;
                }
            }
            j++;
        }
        cout << "* " ;
        cout << endl;
    }


    
    repeat(n){
        cout << "* " ;
    }
}
