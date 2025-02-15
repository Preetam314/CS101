#include <simplecpp>
double sum(int n){
    if(n == 0) return 0.0;
    double m; cin >> m;
    return m + sum(n - 1);
}
main_program{
    int n; cin >> n;
    double totalMarks; cin >> totalMarks;
    if(totalMarks == sum(n)){
        cout << "Total is Correct!";
    }
    else{        
        cout << "Time to Crib!";
    }

}