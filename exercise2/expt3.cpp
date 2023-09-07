// print a fibonacci triangle

#include<iostream>
using namespace std;

int main()
{
    int n, num1 = 0, num2 = 1, temp;
    cout << "Enter the height of triangle: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        num1 = 0, num2 = 1;
        for(int j = 0; j < i; j++)
        {
            cout << num2 << " ";
            temp = num2;
            num2 = num2 + num1;
            num1 = temp;
        }
        cout << endl;
    }
}