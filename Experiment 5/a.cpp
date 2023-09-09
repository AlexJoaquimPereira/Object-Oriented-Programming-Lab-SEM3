#include<iostream>
using namespace std;

class salary{
    int s;
  public:
    void getsalary(){
        cout << "Enter the salary: ";
        cin >> s;
    }
    void displaysalary(){
        cout << "Salary: Rs "<<s<<endl;
    }
};
class manager : public salary{
};
class developer : public salary{

};
class HR : public salary{

};
int main(){

}