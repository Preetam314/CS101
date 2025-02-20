#include<simplecpp>

main_program{
    bool a1, a2, a3;
    cin>> a1 >> a2 >> a3;
    bool b1, b2, b3;
    cin >> b1 >> b2 >> b3;

    if( (a1 && b1) && (a2 || b2) && (a3 || b3)){
        cout<< "compatible";
    }
    else{
        cout << "not compatible";
    }
}