#include<iostream>
using namespace std;

template<class T>
class Vector{
    T *v;
    int n;
  public:
    Vector(int);
    void modify();
    void display();
};

template<class T>
Vector<T> :: Vector(int num){
    n = num;
    v = new T[n];
    cout << "Fill the vector: ";
    for(int i = 0; i < n; i++)
        cin >> v[i];
}

template<class T>
void Vector<T> :: modify(){
    T mod;
    cout << "Enter the element to modify: ";
    cin >> mod;
    for(int i = 0; i < n; i++)
        if(mod == v[i]){
            v[i] = mod;
            return;
        }
    cout << "Element not found\n";
}

template<class T>
void Vector<T> :: display(){
    cout << "Vector elements are: ";
    for(int i = 0; i < n; i++)
        cout << "["<<v[i]<<"]" << " ";
    cout << endl;
}

int main(){
    int size, ch;
    cout << "Enter size of vector: ";
    cin >> size;
    Vector <int> V1(size);
    Vector <float> V2(size);
    Vector <char> V3(size);
    V1.modify();
    V1.display();
}