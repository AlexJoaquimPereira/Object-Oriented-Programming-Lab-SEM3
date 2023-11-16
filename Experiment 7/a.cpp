#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    double inv;
    double sum = 0;
    cout << "Enter n: ";
    cin >> n;
    cout.width(5);
    cout << "n";
    cout.width(13);
    cout << "Inverse_of_n";
    cout.width(13);
    cout << "Sum_of_terms";
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout.width(5);
        cout << i;
        inv = 1.0 / i;
        sum += inv;
        cout.setf(ios::scientific, ios::adjustfield);
        cout.setf(ios::showpoint, ios::adjustfield);
        cout.width(13);
        cout.precision(4);
        cout << inv;
        cout.unsetf(ios::scientific);
        cout.width(13);
        cout.precision(5);
        cout << sum;
        cout << endl;
    }
}
