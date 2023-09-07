// if(number == palindrome)

#include<iostream>
using namespace std;

int main()
{
    int num, revnum, temp;
    cout << "Enter the number: ";
    cin >> num;
    temp = num;
    while(temp > 0)
    {
        revnum = revnum * 10;
        revnum = revnum + (temp % 10);
        temp = temp / 10;
    }

    if(revnum == num)
        cout << "The number is a palindrome\n";
    else 
        cout << "The number is a not a palindrome\n";
}