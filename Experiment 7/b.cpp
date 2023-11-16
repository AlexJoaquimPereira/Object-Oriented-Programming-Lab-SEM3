#include<iostream>
#include<string.h>
#define SPACE '\x20'
#define NEWLINE '\n'
#define DEL '\x05'
#define MAX 1024
using namespace std;

class output{
    int lines = 0;
    int words = 0;
    int characters = 0;
    char text[MAX];
  public:
    void get_text(){
        cout << "Enter your text (Press Ctrl+E(Linux) or Ctrl+Z(Windows) to stop):\n";
        cin.ignore();
        cin.getline(text, MAX, DEL);
    }
    void calc_text(){
        for(int i = 0; i < strlen(text); i++){
            characters++;
            if(text[i] == SPACE)
                words++;
            else if(text[i] == NEWLINE)
                lines++, words++;
        }
    }
    void display_table(){
        cout.setf(ios::left, ios::adjustfield);
        cout.width(25);
        cout << "TEXT CONTENTS";
        cout << endl;

        cout.setf(ios::left, ios::adjustfield);
        cout.width(15);
        cout << "Lines: ";
        cout.unsetf(ios::left);
        cout.width(10);
        cout << lines;
        cout << endl;

        cout.setf(ios::left, ios::adjustfield);
        cout.width(15);
        cout << "Words: ";
        cout.unsetf(ios::left);
        cout.width(10);
        cout << words;
        cout << endl;
        
        cout.setf(ios::left, ios::adjustfield);
        cout.width(15);
        cout << "Characters: ";
        cout.unsetf(ios::left);
        cout.width(10);
        cout << characters;
        cout << endl;
    }
};

int main(){
    output A;
    A.get_text();
    A.calc_text();
    A.display_table();
}