#include<iostream>
#include<string.h>
using namespace std;

class string1{
	char *s;
	int len;
  public: 
  	string1(){}
  	friend void operator >> (istream &in, string1 &x){
  		char i, *j;
  		int l = 1;
  		x.len = 1;
		while(i != '\t' || i != '\r'){
			j = new char[len];
			in >> i;
			
			x.len++, l++;
			strcat(j, i);
		}
	}
	int length(){
		return len;
	}
};

int main(){
    string1 s1, s2, s3;
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
