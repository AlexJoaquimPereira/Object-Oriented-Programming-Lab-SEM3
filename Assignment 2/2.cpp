#include<iostream>
using namespace std;

class vector{
    float *v;
    int n;
  public:
    vector(){}
    void create(){
        cout << "Enter the number of vectors: ";
        cin >> n;
        v = new float[n];
        cout << "Enter the vectors: ";
        for(int i = 0; i < n; i++)
            cin >> v[i];
    }
    void modify(){
        float x;
        int s;
        cout << "Enter the element to modify and the new value\n";
        cin >> s >> x;
        v[s] = x;
    }
    void multiply(){
        float x;
        cout << "Enter the scalar to multiply: ";
        cin >> x;
        for(int i = 0; i < n; i++)
            v[i] = v[i] * x;
    }
    void display(){
        cout << "The vector is (";
        for(int i = 0; i < n; i++){
            cout << v[i];
            if (i != n-1) cout << ", ";
        }
        cout << ")\n";
    }
    friend vector operator + (vector, vector);
};

vector operator+(vector a, vector b) {
    vector t;
    t.n = (a.n < b.n) ? b.n : a.n;
    t.v = new float[t.n];
    float a1, b1;
    for (int i = 0; i < t.n; i++) {
        a1 = (i < a.n) ? a.v[i] : 0;
        b1 = (i < b.n) ? b.v[i] : 0;
        t.v[i] = a1 + b1;
    }
    return t;
}

int main(){
    int s;
    char c;
    vector a, b;
    cout << "Creating vector A:\n";
    a.create();
    cout << "Creating vector B:\n";
    b.create();
    do{
        cout << "\n1. Modify element";
        cout << "\n2. Multiply scalar";
        cout << "\n3. Display a vector";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> s;
        if (s == 4) break;
        cout << "\nEnter the vector: ";
        cin >> c;
        switch(s){
            case 1:
                if (c == 'A' || c == 'a')
                    a.modify();
                else if (c == 'B' || c == 'b')
                    b.modify();
                break;
            case 2:
                if (c == 'A' || c == 'a')
                    a.multiply();
                else if (c == 'B' || c == 'b')
                    b.multiply();
                break;
            case 3:
                if (c == 'A' || c == 'a')
                    a.display();
                else if (c == 'B' || c == 'b')
                    b.display();
                break;
        }
    }while(s != 4);
    cout << "Adding both vectors into vector C:\n";
    vector C = a + b;
    C.display();
}