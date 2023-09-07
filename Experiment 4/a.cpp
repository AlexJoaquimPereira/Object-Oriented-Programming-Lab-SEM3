#include<iostream>
using namespace std;

class unary{
    int x;
  public:
    unary(int p){
        x = p;
    }
    void operator --(){
        x--;
    }
    void operator ++(){
        x++;
    }
    void operator ++(int){
        ++x;
    }
    void operator --(int){
        --x;
    }
    void display(){
        cout << x << endl;
    }
};

int main(){
    unary u1(10), u2(20), u3(30), u4(40);
    
    cout << "Prefix operations\n";
    cout << "\nu1 =";
    u1.display();
    cout << "Performing increment on u1\n";
    ++u1;
    u1.display();

    cout << "\nu2 =";
    u2.display();
    cout << "Performing decrement on u2\n";
    --u2;
    u2.display();

    cout << "Postfix operations\n";
    cout << "\nu3 =";
    u3.display();
    cout << "Performing increment on u3\n";
    u3++;
    u3.display();

    cout << "\nu4 =";
    u4.display();
    cout << "Performing decrement on u4\n";
    u4--;
    u4.display();
}