//reverse 4 digit number

#include<iostream>
using namespace std;

int main()
{
    int n, revnum = 0;
    cout<<"Enter a four digit number: ";
    cin>>n;

    if(n < 999 || n > 9999){
        cout << "The entered number is invalid" << endl;
        return 0;
    }

    for(int i = 0; i < 4; i++)
    {
        revnum = revnum * 10;
        revnum = revnum + (n % 10);
        n = n / 10;
    }

    cout <<"The reversed number is "<<revnum<<endl;
    return 0;
}