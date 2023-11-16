#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float mult;
    cout << setw(5) << "VALUE";
    cout << setfill('*') << setw(23) << "MULT OF VALUE";
    cout << endl;
    for(int i = 1; i <= 4; i++){
        mult = i * 2;
        cout << setfill('.') << setiosflags(ios::showpos) << setiosflags(ios::internal) << setw(5) << i;
        cout << resetiosflags(ios::internal);
        cout << setprecision(4) << setiosflags(ios::showpoint) << setw(24) << mult;
        cout << endl;
    }
}