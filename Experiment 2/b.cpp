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
	cout <<"Enter your operation\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cin >> s;
	switch (s){
		case 1:
			cout << "The sum of " << x << " and " << y << " is "<< sum(x, y) << endl;
			break;
		case 2:
			cout << "The difference of " << x << " and " << y << " is "<< diff(x, y) << endl;
			break;
		case 3:
			cout << "The product of " << x << " and " << y << " is "<< mult(x, y) << endl;
			break;
		case 4:
			cout << "The quotient of " << x << " and " << y << " is "<< divi(x, y) << endl;
			break;
		default:
			cout << "Invalid input\n";
	}
	return 0;
}
