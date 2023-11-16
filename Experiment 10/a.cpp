#include<iostream>
using namespace std;

void divide(int x, int y){
    try{
         if(y != 0)
            cout<<"Division = "<<x/y;
         else
            throw y;
    }
    catch(int q){
        cout<<"Exception caught in divide function, y = "<<q<<endl;
        throw;
    }
}
int main(){
    int a,b;
    cout<<"\nEnter a and b:";
    cin>>a>>b;
    try{
        divide(a,b);
    }    
    catch(int p){
        cout<<"Divide by zero exception caught in main, b = "<<p<<endl;
    }
     
}