#include<iostream>
using namespace std;

class A{
    int x;
  public:
    A(int i){
        x = i;
        cout << "A initialized\n";
    }
    int ret_x(){
        return x;
    }
};

class B{
    int y;
  public:
    B(int j){
        y = j;
        cout << "B initialized\n";
    }
    int ret_y(){
        return y;
    }
};

class C: public A, public B{
    int z;
  public:
    C(int a, int b): A(a), B(b){
        z = ret_x() + ret_y();
        cout << "C initialized\n";
    }
    void show(){
        cout << "The data input: " << ret_x() << " " << ret_y() << endl;
        cout << "Sum = " << z << endl;
    }
};

int main(){
    int num1, num2;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    C obj(num1, num2);
    obj.show();
}