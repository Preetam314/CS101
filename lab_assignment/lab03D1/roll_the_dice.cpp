#include <simplecpp>

main_program{
    int n;  cin >> n;
    int one = 0, two = 0, three = 0, four = 0, five = 0;
    
    for(int i = 0; i < n; i++){
        int random =  rand()%6 + 1;

        
        if(random == 1){
            one++;
        }
        else if(random == 2){
            two++;
        }
        else if(random == 3){
            three++;
        }
        else if(random == 4){
            four++;
        }
        else if(random == 5){
            five++;
        }

}
    cout << "1: " << one << endl;
    cout << "2: " << two << endl;
    cout << "3: " << three << endl;
    cout << "4: " << four << endl;
    cout << "5: " << five << endl;
    cout << "6: " << n - (one + two + three + four + five) << endl; 
}