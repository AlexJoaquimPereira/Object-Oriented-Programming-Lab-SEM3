#include<iostream>
#include<string.h>
using namespace std;

struct book_list{
        char title[20];
        char author[20];
        float price;
        char publisher[20];
        int stock;
};

class books{
    book_list *book;
    int n;
    static int successful;
    static int unsuccessful;
  public:
    books(){
        cout << "Enter number of books: ";
        cin >> n;
        book = new book_list [n];
        for (int i = 0; i < n; i++){
            cout << "Enter details for book " << i+1 << endl;
            cout << "Enter book title: ";
            cin >> book[i].title;
            cout << "Enter author: ";
            cin >> book[i].author;
            cout << "Enter price: ";
            cin >> book[i].price;
            cout << "Enter publisher: ";
            cin >> book[i].publisher;
            cout << "Enter stock: ";
            cin >> book[i].stock;
            cout << endl;
        }
    }

    int is_available(char t[20], char a[20]) {
        for(int i = 0; i < n; i++){
            if (t == book[i].title && a == book[i].author)
                return i+1;
        }
        return 0;
    }

    void transaction() {
        char t[20], a[20];
        cout << "Enter the title and author of the book : ";
        cin >> t >> a;
        int x;
        if (x = is_available(t, a)) {
            x--;
            int copies;
            cout << "Book Details: " << endl;
            cout << "Title: " << book[x].title << endl;
            cout << "Author: " << book[x].author << endl;
            cout << "Price: " << book[x].price << endl;
            cout << "Publisher: " << book[x].publisher << endl;
            cout << "Number of Copies Requested: ";
            cin >> copies;

            if (copies <= book[x].stock) {
                float cost = copies * book[x].price;
                cout << "Total Cost: " << cost << endl;
                book[x].stock = book[x].stock - copies;
                successful++;
            } 
            else {
                cout << "Required copies not in stock" << endl;
                unsuccessful++;
            }
        } 
        else {
            cout << "Book not available" << endl;
            unsuccessful++;
        }
    }

    static void display_stats() {
        cout << "Transaction Statistics:" << endl;
        cout << "Successful Transactions: " << successful << endl;
        cout << "Unsuccessful Transactions: " << unsuccessful << endl;
    }

  private:
    friend books change_price(int x, books b){
        int new_price;
        cout << "Enter new price of the book: ";
        cin >> new_price;
        b.book[x].price = new_price;
        cout << "Price updated\n";
        cout << "Updated book Details: " << endl;
        cout << "Title: " << b.book[x].title << endl;
        cout << "Author: " << b.book[x].author << endl;
        cout << "Price: " << b.book[x].price << endl;
        cout << "Publisher: " << b.book[x].publisher << endl;
        return b;
    }
};

int books::successful = 0;
int books::unsuccessful = 0;

int main() {
    books b;
    int s;
    do {
        cout << "1. Process Transaction" << endl;
        cout << "2. Update price of a book" << endl;
        cout << "3. Display Transaction Statistics" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> s;
        switch(s){
            case 1: b.transaction();
                break;
            case 2:
                char t[20], a[20];
                cout << "Enter the title and author of the book : ";
                cin >> t >> a;
                int x;
                if (x = b.is_available(t, a))
                    b = change_price(x--, b);
                break;
            case 3: b.display_stats();
                break;
            case 4: break;
            default: cout << "Invalid choice" << endl; 
        }
    } while (s != 4);
    return 0;
}
