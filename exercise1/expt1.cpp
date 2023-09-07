//x raised to n

#include<iostream>
using namespace std;

int main()
{
    int x, n, power = 1;
    cout << "Enter value of x, n: ";
    cin >> x >> n;

    for(int i = 0; i < n; i++)
        power = power * x;
    
    cout << "The result is " << power <<endl;

    return 0;
}