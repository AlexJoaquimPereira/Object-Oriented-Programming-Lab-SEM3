#include<iostream>
using namespace std;

float area (float radius){
    return(3.14 * radius * radius);
}

float area (float l, float b){
    return (l * b);
}

float area (float half, float b, float h){
    return (half * b * h);
}

int main(){
    int n;
    float radius, l, b, h;
    cout << "Enter the shape: \n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cin >> n;
    switch (n){
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area = " << area(radius) << endl;
            break;
        case 2:
            cout << "Enter length and breadth: ";
            cin >> l >> b;
            cout << "Area = " << area(l, b) << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area = " << area(0.5, b, h) << endl;
            break;
        default:
            cout << "Invalid input\n";
    }
    return 0;
}