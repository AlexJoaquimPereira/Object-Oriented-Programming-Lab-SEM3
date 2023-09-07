#include<iostream>
using namespace std;

class binary{
    int a;
  public:
    binary(int b){
        a = b;
    }
    friend binary operator +(int x, binary b){
        b.a = x + b.a;
        return b;
    }
    binary operator * (binary b){
        b.a = a * b.a;
        return b;
    }
    friend binary operator - (binary b, int p){
        b.a = b.a - p;
        return b;
    }
    void display(){
        cout << a << endl;
    }
};

int main(){
    binary x(10), y(20);
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