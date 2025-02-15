#include <simplecpp>

void swap(char &a, char &b){
	a =  a + b;
	b = a - b;
	a = a - b;
}


void sortBooks(char &a, char &b, char &c, char &d){
	if(a > b) swap(a, b);
	if(b > c) swap(b, c);
	if(c > d) swap(c, d);
	if(a > b) swap(a, b);
	if(b > c) swap(b, c);
	if(a > b) swap(a, b);
}

main_program{
	int t; cin >> t; 

	for(int i = 0; i < t; i++){
		char a; cin >> a;
		char b; cin >> b;
		char c; cin >> c;
		char d; cin >> d;
		sortBooks(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << endl;
	}	
	

	
}
