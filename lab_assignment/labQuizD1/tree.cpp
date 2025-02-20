#include <simplecpp>

// void tree(int &n){

//     if(n == 0){
//     }
//     Turtle t1, t2;
//     t1.left(110); t2.left(80);
//     t1.forward(100); t2.forward(100);

//     n = n -1;
//     tree(n);
// }
void init(int &n,){

    t1.hide(); t2.hide();
    t1.forward(n);
    t2.left(90); t2.forward(n);
    
    n = n + 10;

    init(n);
}
main_program{
    initCanvas();
    
    int n = 10;

    init(n);

    // int n; cin >> n;
    // tree(n);

    getClick();

}