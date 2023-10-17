#include<iostream>
using namespace std;

class base{
  public:
    void display(){
        cout << "Display base\n";
    }
    virtual void show(){
        cout << "Show base\n";
    }
};

class derived : public base{
  public:
    void display(){
        cout << "Display derived\n";
    }
    void show(){
        cout << "Show derived\n";
    }
};

int main(){
    base B;
    derived D;
    base *ptr;
    cout << "Pointing *ptr to base class\n";
    ptr = &B;
    ptr->display();
    ptr->show();
    cout << "Pointing *ptr to derived class\n";
    ptr = &D;
    ptr->display();
    ptr->show();
    return 0;
}