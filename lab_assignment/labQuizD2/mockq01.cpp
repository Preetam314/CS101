#include <simplecpp>

void swap(int &a, int &b){
	a =  a + b;
	b = a - b;
	a = a - b;
}


void sort(int &a, int &b, int &c, int &d){
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
		int a; cin >> a;
		int b; cin >> b;
		int c; cin >> c;
		int d; cin >> d;
		sort(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << endl;
	}	
	

	
}
