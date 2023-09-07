//sin series upto 3 digits

#include<iostream>
using namespace std;

int main()
{
    int count = 1, factorial = 1;
    float term = 0, quotient = 1, x;
    cout<<"Enter the angle: ";
    cin>>x;

    for(int i = 1; i <= 5; i = i + 2)
    {
        
        for (int j = 1; j <= i; j++)
            factorial = factorial * j; 

        for(int k = 0; k < i; k++)
            quotient = quotient * x;

        term = quotient / factorial;
        cout << "Term " << i << " is " << term << endl;
        
        factorial = 1, quotient = 1;
    }
    return 0;
}
