#include<iostream>
using namespace std;

class DB;
class DM{
    int metres;
    int centimetres;
  public:
    void getdata(){
        cout << "Metres: ";
        cin >> metres;
        cout << "Centimetres: ";
        cin >> centimetres; 
    }
    void display(){
        cout << "Distance: "<< metres <<"."<< centimetres << "m\n";
    }
    friend DM addition(DM a, DB b);
};

class DB{
    int feet;
    int inches;
  public:
    void getdata(){
        cout << "Feet: ";
        cin >> feet;
        cout << "Inches: ";
        cin >> inches; 
    }
    void display(){
        cout << "Distance: "<< feet <<"'"<< inches << "\n";
    }
    friend DM addition(DM a, DB b);
};

DM addition(DM a, DB b){
    DM x;
    x.metres = a.metres + (b.feet / 0.33);
    x.centimetres = a.centimetres + (b.inches * 2.54);
    x.metres = x.metres + (x.centimetres / 100);
    return x;
}
int main(){
    DM metric, sum;
    DB imperial;
    metric.getdata();
    imperial.getdata();
    cout << "Adding both...";
    sum = addition(metric, imperial);
    sum.display();
}