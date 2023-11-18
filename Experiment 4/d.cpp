#include<iostream>
#include<string.h>
using namespace std;

class String{
	char s[100];
	int len;
  public: 
  	String(){
  		strcpy(s, "");
  	}
  	friend void operator >> (istream &in, String &x){
  		in >> x.s;
  		x.len = strlen(x.s);
	}
	int length(){
		return len;
	}
	friend String operator + (String a, String b){
		String c;
		strcat(c.s, a.s);
		strcat(c.s, b.s);
		return c;
	}
	friend void operator << (ostream &out, String &x){
		out << x.s;
	}
};

int main(){
    String s1, s2, s3;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    s3 = s1 + s2;
    cout << "The concatenated string is: ";
    cout << s3;
    
    cout << "\nFinding out the smaller string: ";
    if(s1.length() > s2.length())
        cout << s2;
    else if (s1.length() < s2.length())
        cout << s1;
    else cout << "Both are equal";
    cout << endl;
}
