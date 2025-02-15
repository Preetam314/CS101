#include <simplecpp>


bool calculateNetincome(int &x,int &y){
	int temp = y;
	// int i = 0;
	// while(pow(2, i) < y){
	// 	i++;
	// }
	y = y >> (x -1);

	if(y%2 == 1){
		
		y = temp;
		return 1;
	}
	else{
		
		y  = temp;
		return 0;
	}
}

main_program{

	int t; cin >> t;
	for(int i = 0; i < t; i++){
		int x; cin >> x;
		int y; cin >> y;

		if(calculateNetincome(x, y) == 1){
			cout << "Taxed" << endl;
			cout << y - (pow(2, x - 1)) << endl;
		}
		else{
			cout << "Not Taxed" << endl;
			cout << y << endl;
		}
	}

}
