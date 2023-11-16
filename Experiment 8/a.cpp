#include<iostream>
using namespace std;

template<class T>
void swap (T a, T b){
    T c = b;
    b = a;
    a = c;
    cout << a << " " << b << endl;
}

int main(){
    swap(1, 2);
    swap(13.67, 53.34);
    swap('a', 'u');
    swap("GOA", "COLLEGE");
}