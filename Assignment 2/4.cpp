#include<iostream>
#include<string.h>
using namespace std;

class books{
    char title[20];
    char author[20];
    float price;
    char publisher[20];
    int stock;
    static int successful;
    static int unsuccessful;
  public:
    books(){
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter publisher: ";
        cin >> publisher;
        cout << "Enter stock: ";
        cin >> stock;
    }
    int is_available(char t[], char a[]) {
        for(int i = 0; i < n; i++){
            if (t == book[i].title && a == book[i].author)
                return i+1;
        }
        return 0;
    }
    void transaction(char t[], char a[]) {
        if (is_available(t, a)) {
            int copies;
            cout << "Book Details:" << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Number of Copies Requested: ";
            cin >> copies;

            if (copies <= stock) {
                float cost = copies * price;
                cout << "Total Cost:" << cost << endl;
                stock -= copies;
                successful++;
            } else {
                cout << "Required copies not in stock" << endl;
                unsuccessful++;
            }
        } else {
            cout << "Book not available" << endl;
            unsuccessful++;
        }
    }
    static void display_stats() {
        cout << "Transaction Statistics:" << endl;
        cout << "Successful Transactions: " << successful << endl;
        cout << "Unsuccessful Transactions: " << unsuccessful << endl;
    }
};

int books::successful = 0;
int books::unsuccessful = 0;

int main() {
    int n, s, c;
    books *book;
    cout << "Enter number of books: ";
    cin >> n;
    book = new books [n];
    do {
        cout << "1. Process Transaction" << endl;
        cout << "2. Update price of a book" << endl;
        cout << "3. Display Transaction Statistics" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> s;
        if(s == 4) break;
        char t[20], a[20];
        cout << "Enter the title and author of the book : ";
        cin >> t >> a;
        
        switch(s){
            case 1: book[].transaction(t, a);
                break;
            case 2: 
                break;
            case 3: book[].display_stats();
                break;
            default: cout << "Invalid choice" << endl;
        }
    } while (s != 4);

    return 0;
}
