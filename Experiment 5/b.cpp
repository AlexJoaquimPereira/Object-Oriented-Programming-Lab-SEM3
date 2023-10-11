#include<iostream>
using namespace std;

class grandparent{
  public:
    grandparent(){
        cout << "Grandparent class inherited\n";
    }
};

class parent1: virtual public grandparent{
    int y1;
  public:
    parent1(){
        cout << "Parent1 class inherited\n";
    }
};

class parent2: virtual public grandparent{
    int y2;
  public:
    parent2(){
        cout << "Parent2 class inherited\n";
    }
};

class derived: public parent1, public parent2{
  public:
    derived(){
        cout << "Check if grandparent was derived twice\n";
        cout << "If grandparent was derived twice, it would call constructor twice\n";
    }
};

int main(){
    derived d;
    return 0;
}