//whether a number is a prime number
#include<iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            cout<<"The number is not a prime number\n";
            break;
        }
    }
    if(flag == 0)
        cout<<"The number is a prime number\n";
    
    return 0;
}
