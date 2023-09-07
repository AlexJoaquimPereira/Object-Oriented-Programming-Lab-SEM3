// Maximum from an array

#include<iostream>
using namespace std;

int main()
{
    int *a, n, max = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    a = new int [n];
    cout << "Fill the array\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++)
    {
        if (a[i] > a[max])
            max = i;
    }

    cout << "The maximum element is " <<a[max]<<endl;
}