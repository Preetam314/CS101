#include <simplecpp>

main_program{
    int n;
    int head = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int random =  rand()%2;
        if(random == 1){
            head++;
        }
        }
    cout << "H: " << head << ", T: " << (n - head);

}