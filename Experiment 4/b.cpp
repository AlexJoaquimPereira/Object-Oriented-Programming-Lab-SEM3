#include<iostream>
using namespace std;

class binary1{
    int a;
  public:
    binary1(int b){
        a = b;
    }
    friend binary1 operator +(int x, binary1 b){
        b.a = x + b.a;
        return b;
    }
    binary1 operator * (binary1 b){
        b.a = a * b.a;
        return b;
    }
    friend binary1 operator - (binary1 b, int p){
        b.a = b.a - p;
        return b;
    }
    void display(){
        cout << a << endl;
    }
};

int main(){
    binary1 x(10), y(20);
    cout << "Contents of X: ";
    x.display();
    cout << "Contents of Y: ";
    y.display();

    cout << "Performing x = 5 + y\n";
    x = 5 + y;
    x.display();
    cout << "Performing x = x * y\n";
    x = x * y;
    x.display();
    cout << "Performing x = y - 5\n";
    x = y - 5;
    x.display();
}