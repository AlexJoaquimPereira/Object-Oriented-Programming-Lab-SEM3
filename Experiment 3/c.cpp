#include<iostream>
#include<string.h>
using namespace std;

class temp{
    char str[30];
  public:
    temp(){}
    temp(char *s){
        strcpy(str, s);
    }
    void join (temp a, temp b){
        strcpy(str, strcat(a.str, b.str));
    }
    void display(){
        cout << "String: " << str << endl;
    }
};

int main(){
    char *f1 = (char *)"Goa";
    temp name1(f1), name2((char *)"College"), name3((char *)"Engineering"), s1, s2;
    s1.join(name1, name2);
    s2.join(s1, name3);
    s2.display();
    return 0;
}