#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2;
    
    cout << "i. String assignment & concatenation:" << endl;
    str1 = "Hello, ";
    str2 = "World!";
    string concatenated = str1 + str2;
    cout << "Concatenated String: " << concatenated << endl;

    if (str1 == str2)
        cout << "ii. The strings are equal." << endl;
    else cout << "ii. The strings are not equal." << endl;

    string searchStr = "Hello,";
    if (concatenated.find(searchStr) != string::npos)
        cout << "iii. Substring '" << searchStr << "' found in the concatenated string." << endl;
    else cout << "iii. Substring '" << searchStr << "' not found in the concatenated string." << endl;

    char ch = 'W';
    if (concatenated.find(ch) != string::npos)
        cout << "Character '" << ch << "' found in the concatenated string." << endl;
    else cout << "Character '" << ch << "' not found in the concatenated string." << endl;

    cout << "iv. Swapping strings:" << endl;
    swap(str1, str2);
    cout << "str1 after swapping: " << str1 << endl;
    cout << "str2 after swapping: " << str2 << endl;
    return 0;
}