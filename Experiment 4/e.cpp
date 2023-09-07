#include<iostream>
using namespace std;

class vector{
    int *a;
    int n;
  public:
    vector(){
        cout << "Enter size of vector: ";
        cin >> n;
        a = new int [n];
        cout << "Fill the vector: ";
        for(int i = 0; i < n; i++)
            cin >> a[i];
    }
    vector operator *(int x){
        for(int i = 0; i < n; i++)
            a[i] = a[i] * x;
        
    }
    vector operator + (vector v){
        for(int i = 0; i < n; i++)
            v.a[i] = v.a[i] + a[i];
        return v;
    }
    void display(){
        for(int i = 0; i < n; i++)
            cout << "["<<a[i]<<"]"<<endl;
    }
};

int main(){
    int r;
    vector v1, v2;

    cout << "Enter scalar to multiply: ";
    cin >> r;
    v1 = v1*r;
    v1.display();

    cout << "Adding both vectors\n";
    v2 = v1+v2;
    v2.display();
}