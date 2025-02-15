#include <simplecpp>
int popcount(int &input){
	int sum = 1;	
	while(input != 1){
		sum += (input%2 == 1)? 1 : 0;
		input /= 2;
	}
	return sum;

}

main_program{
	int input; cin >> input;

	cout << popcount(input);
}
