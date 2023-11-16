#include<iostream>
using namespace std;

void test(int p){
    try{
        if(p==1)
            throw p;
        else if(p==0)
            throw 'c';
        else if(p==-1)
            throw -1.0;
    }
    
    catch(int m){
        cout<<"int exception"<<endl;
    }
    
    catch(char n){ 
        cout<<"char exception"<<endl;
    }
    
    catch(double q){
        cout<<"double exception"<<endl;
    }
}

int main(){
    test(1);
    test(0);
    test(-1);
}
