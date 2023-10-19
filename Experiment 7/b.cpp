#include<iostream>
#include<string.h>
#define SPACE ' '
#define NEWLINE '\n'
#define DEL '\x1A'
#define MAX 1024
using namespace std;

class output{
    int lines = 0;
    int words = 0;
    int characters = 0;
    char text[MAX];
  public:
    void get_text(){
        cin.getline(text, MAX, DEL);
    }
    void calc_text(){
        for(int i = 0; i < strlen(text); i++){
            characters++;
            if(text[i] == SPACE)
                words++;
            else if(text[i] == NEWLINE)
                lines++;
        }
    }
    void display_table(){

    }
};

int main(){
    output A;
    A.get_text();
    A.calc_text();
}