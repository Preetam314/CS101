#include <simplecpp>

main_program{
	int n; cin>> n;

	for(int j = 1 ; j <= n ; j++){
		for(int i = 1; i <= n; i++){
			if(j == -(i)+ (n+3)/2 || j == (i) -(n-1)/2 ||i == -(j)+ (3*n + 1)/2 || i  == (j) -(n-1)/2 )   {
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}


}

