#include<iostream>
#include<string.h>
using namespace std;

class unary{
    int x;
    char *h1 = "While performing operation...";
  public:
    unary(int p){
        x = p;
    }
    void operator --(){
    	cout.write(h1, strlen(h1));
        cout << x-- << endl;
    }
    void operator ++(){
    	cout.write(h1, strlen(h1));
        cout << x++ << endl;
    }
    void operator ++(int){
    	cout.write(h1, strlen(h1));
        cout << ++x << endl;
    }
    void operator --(int){
    	cout.write(h1, strlen(h1));
        cout << --x << endl;
    }
    void display(){
        cout.width(20);
        cout << x << endl;
    }
};

int main(){
    unary u1(10), u2(20), u3(30), u4(40);
    
    cout.write("------Prefix operations------\n", 31);
    cout.write("\nu1 = ", 7);
    u1.display();
    cout.write("Performing increment on u1\n", 28);
    ++u1;
    cout.write("New value: ", 12);
    u1.display();

    cout.write("\nu2 = ", 7);
    u2.display();
    cout.write("Performing decrement on u2\n", 28);
    --u2;
    cout.write("New value: ", 12);
    u2.display();

    cout.write("\n------Postfix operations------\n", 33);
    cout.write("\nu3 = ", 7);
    u3.display();
    cout.write("Performing increment on u3\n", 28);
    u3++;
    cout.write("New value: ", 12);
    u3.display();

    cout.write("\nu4 = ", 7);
    u4.display();
    cout.write("Performing decrement on u4\n", 28);
    u4--;
    cout.write("New value: ", 12);
    u4.display();
}