#include<iostream>
using namespace std;

class item2;
class item1{
    int id;
    float price;
    public:
    void getdata(){
        cout << "ID: ";
        cin >> id;
        cout << "Price: ";
        cin >> price;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "Price: "<< price <<endl;
    }
    friend void swap(item1 &, item2 &); 
};

class item2{
    int id;
    float price;
    public:
    void getdata(){
        cout << "ID: ";
        cin >> id;
        cout << "Price: ";
        cin >> price;
    }
    void display(){
        cout << "ID: " << id << endl;
        cout << "Price: "<< price <<endl;
    }
    friend void swap(item1 &, item2 &);
};

void swap(item1 &a, item2 &b){
    int temp = b.id;
    b.id = a.id;
    a.id = temp;
    float temp1 = b.price;
    b.price = a.price;
    a.price = temp1;
}

int main(){
    item1 x;
    item2 y;
    cout << "Enter details of item 1:\n";
    x.getdata();
    cout << "\nEnter details of item 2:\n";
    y.getdata();
    cout << "\nContents of item 1: \n";
    x.display();
    cout << "\nContents of item 2: \n";
    y.display();
    cout << "\nSwapping both items.....\n";
    swap(x, y);
    cout << "\nContents of item 1: \n";
    x.display();
    cout << "\nContents of item 2: \n";
    y.display();
    return 0;
}