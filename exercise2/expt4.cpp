// first and last digit of any number

#include<iostream>
using namespace std;

int main()
{
    int first, last, num;
    cout << "Enter the number: ";
    cin >> num;

    last = num % 10;

    while(num > 0)
    {
        first = num % 10;
        num = num / 10;
    }
    
    cout << "First digit: " << first <<endl;
    cout << "Last digit: "<< last << endl;
}