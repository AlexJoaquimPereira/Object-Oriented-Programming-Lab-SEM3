#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    s3 = s1 + s2;
    cout << "Concantenation: " << s3 <<endl;

    if(s1.length() > s2.length())
        cout << s2 <<" is smaller\n";
    else if (s1.length() < s2.length())
        cout << s1 <<" is smaller\n";
    else cout << "Both are equal\n";
}