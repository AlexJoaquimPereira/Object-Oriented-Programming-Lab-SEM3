#include <iostream>
using namespace std;

inline int sum (int a, int b){
	return(a + b);
}

inline int diff (int a, int b){
	return (a - b);
}

inline int mult (int a, int b){
	return (a * b);
}

inline int divi (int a, int b){
	return (a / b);
}

int main(){
	int x, y, s;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	cout << "The sum of " << x << " and " << y << " is "<< sum(x, y) << endl;
	cout << "The difference of " << x << " and " << y << " is "<< diff(x, y) << endl;
	cout << "The product of " << x << " and " << y << " is "<< mult(x, y) << endl;
	cout << "The quotient of " << x << " and " << y << " is "<< divi(x, y) << endl;
}
