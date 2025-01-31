#include <simplecpp>

main_program{
    int n;
    cin >> n;
    int j =0;
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
        j++;
        }
        
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

/*
Write a cpp program that takes an integer n as input and print a SQUARE pattern. The edges of the square should be made of asterisks (*).

The space inside the square (from top-left to bottom-right) should alternate between hyphens (-) and plus signs (+), starting with a hyphen (-) on the top-left.

Run your program on the terminal to view a nice representation of the pattern. Bodhitree may not give you the same graphical view. 

Example for,

*/