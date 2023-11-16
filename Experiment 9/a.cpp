#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    int num, num1, num2, arr1[5], arr2[3];
    char c;
    fstream f1, f2, f3;
    f1.open("file1.txt", ios :: out);
    cout << "Enter 5 numbers in the first file : \n";
    for (int i = 0 ; i < 5 ; i++)
        cin >> arr1[i];
    sort(arr1, arr1 + 5);
    for (int i = 0 ; i < 5; i++)
        f1 << arr1[i] << " ";
    f1.close();

    cout << "Enter 3 numbers in the second file : \n";
    for (int i = 0 ; i < 3 ; i++)
        cin >> arr2[i];
    sort(arr2, arr2 + 3);
    f2.open("file2.txt", ios :: out);
    for (int i = 0 ; i < 3 ; i++)
        f2 << arr2[i] << " ";
    f2.close();

    f1.open("file1.txt", ios :: in);
    f2.open("file2.txt", ios :: in);
    f3.open("file3.txt", ios :: out);
    if (f1 >> num1 && f2 >> num2){
        while (true){
            if (num1 < num2){
                f3 << num1 << " ";
                if (!(f1 >> num1)) {
                    f3 << num2 << " ";
                    break;
                }
            }
            else {
                f3 << num2 << " ";
                if (!(f2 >> num2)) {
                    f3 << num1 << " ";
                    break;
                }
            }
        }
        while(f1 >> num1)
            f3 << num1 << " ";
        while (f2 >> num2) 
            f3 << num2 << " ";
    }
    f1.close();
    f2.close();
    f3.close();

    f3.open("file3.txt",ios::in);
    while((c = f3.get()) != EOF)
        cout << c;

    return 0;
}
