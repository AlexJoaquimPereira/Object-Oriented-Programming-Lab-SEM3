#include<iostream>
using namespace std;

void krishnamurthy(int &n){
    int digit, factorial = 1, sum = 0;
    while(n > 0){
        digit = n % 10;
        for (int i = 1; i <= digit; i++)
            factorial = factorial * i;
        sum = sum + factorial;
        factorial = 1;
        n = n / 10;
    }
    n = sum;
}

int main(){
    int num, num1;
    cout << "Enter the number: ";
    cin >> num;
    num1 = num;
    krishnamurthy(num);
    if (num1 == num)
    	cout << num1 << " is a Krishnamurthy number\n";
    else
    	cout << num1 << " is not a Krishnamurthy number\n";
    return 0;
}
