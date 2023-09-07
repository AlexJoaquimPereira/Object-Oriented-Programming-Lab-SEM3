#include<iostream>
using namespace std;

class complex{
    float real;
    float imaginary;
  public:
    complex(){
        real = 0, imaginary = 0;
    }
    complex(float r, float i){
        real = r, imaginary = i;
    }
    void display(){
        cout << "The number is: "<< real << " + " << imaginary <<"i\n";
    }
    friend complex sum (complex x, complex y);
};

complex sum (complex x, complex y){
    complex z;
    z.real = x.real + y.real;
    z.imaginary = x.imaginary + y.imaginary;
    return z;
}

int main(){
    complex A(1.1, 1.2);
    complex B = complex(1.3, 1.4);
    complex C;
    C = sum (A, B);
    C.display();
    return 0;
}