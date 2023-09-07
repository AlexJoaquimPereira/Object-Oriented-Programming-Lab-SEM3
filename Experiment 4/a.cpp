#include<iostream>
using namespace std;

class unary{
    int x;
  public:
    unary(int p){
        x = p;
    }
    void operator --(){
        x = x - 1;
    }
    void operator ++(){
        x = x + 1;
    }
    void display(){
        cout << x << endl;
    }
    /*friend unary operator ++(unary u){
        u.x = u.x + 1;
        return u;
    }
    friend unary operator --(unary u){
        u.x = u.x - 1;
        return u;
    }*/
};

int main(){
    unary u1(10), u2(20);
    u1.display();
    cout << "Performing increment on u1\n";
    ++u1;
    u1.display();

    u2.display();
    cout << "Performing decrement on u2\n";
    --u2;
    u2.display();
}