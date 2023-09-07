#include<iostream>
using namespace std;

class stream_extractor{
    int x;
  public:
    stream_extractor(){}
    friend void operator >> (istream &in, stream_extractor &p){
        in >> p.x;
    }
    friend void operator << (ostream &out, stream_extractor &p){
        out << p.x;
    }
};

int main(){
    stream_extractor t;
    cout << "Enter a number: ";
    cin >> t;
    cout <<"The number is : ";
    cout << t;
}