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
    friend vector operator *(vector y, int x){
        for(int i = 0; i < y.n; i++)
            y.a[i] = y.a[i] * x;
        return y;
    }
    friend vector operator + (vector v, vector vv){
        if(v.n != vv.n){
            cout << "Vectors unequal\n";
            exit(1);
        }
        for(int i = 0; i < v.n; i++)
            vv.a[i] = vv.a[i] + v.a[i];
        return vv;
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
    v1 = v1 * r;
    v1.display();

    cout << "Adding both vectors\n";
    v2 = v2 + v1;
    v2.display();
}