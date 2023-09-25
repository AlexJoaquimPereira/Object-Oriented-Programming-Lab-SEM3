#include<iostream>
using namespace std;

class vector{
    float i, j ,k;
  public:
    vector(){
        cout << "Enter the vector: ";
        cin >> i >> j >> k;
    }
    void modify(){
        char s;
        int x;
        cout << "Enter the axis to modify and the new value\n";
        cin >> s >> x;
        switch(s){
            case 'i': i = x; break;
            case 'j': j = x; break;
            case 'k': k = x; break;
        }
    }
    void multiply(){
        int x;
        cout << "Enter the scalar to multiply: ";
        cin >> x;
        i = i * x, j = j * x, k = k * x;
    }
    void display(){
        cout << "The vector is ("<<i<<", "<<j<<", "<<k<<")\n";
    }
};

vector multiply(vector a, vector b){
    
}