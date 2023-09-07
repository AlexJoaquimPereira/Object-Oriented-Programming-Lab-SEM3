#include<iostream>
using namespace std;

class item{
    int id;
    float price;
  public:
    item(){
        cout << "ID: ";
        cin >> id;
        cout << "Price: ";
        cin >> price;
    }
    item(item &a){
        id = a.id, price = a.price;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "Price: "<< price <<endl;
    }
};

int main(){
    cout << "Creating item X...\n";
    item x;
    x.display();
    cout << "\nCreated item Y...copying contents from X\n";
    item y(x);
    y.display();
}