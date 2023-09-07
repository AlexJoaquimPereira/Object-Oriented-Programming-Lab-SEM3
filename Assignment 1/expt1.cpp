#include <iostream>
using namespace std;
struct account
{
    char name[10];
    int account_no;
    float balance;
    int count;
};
int main()
{
    struct account *a;
    int c, n, i;
    float money;
    cout << "Enter number of accounts: ";
    cin >> n;
    a = new struct account [n];
    cout << "Enter account details\n";
    for (i = 0; i < n; i++)
    {
        a[i].account_no = i + 1;
        cout << "\nAccount number: " << a[i].account_no << endl;
        cout << "Enter name: ";
        cin >> a[i].name;
        a[i].balance = 0, a[i].count = 0;
    }
    do
    {
        cout << "Choose your option\n";
        cout << "1. Withdrawl\n";
        cout << "2. Deposit\n";
        cout << "3. Check balance\n";
        cout << "4. Exit\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\nEnter Account number to withdraw: ";
            cin >> i;
            if (a[i-1].account_no < 0 || a[i-1].account_no > n)
            {
                cout << "Invalid account number\n";
                break;
            }
            if (a[i-1].balance < 500)
            {
                cout << "Insufficient balance\n";
                break;
            }
            cout << "Enter amount to withdraw: ";
            cin >> money;
            a[i-1].balance = a[i-1].balance - money;
            a[i-1].count++;
            cout << "Transactions executed: "<< a[i-1].count <<endl;
            break;
        case 2:
            cout << "\nEnter account number to deposit: ";
            cin >>i;
            if (a[i-1].account_no < 0 || a[i-1].account_no > n)
            {
                cout << "Invalid account number\n";
                break;
            }
            cout << "Enter amount to deposit: ";
            cin >> money;
            a[i-1].balance = a[i-1].balance + money;
            a[i-1].count++;
            cout << "Transactions executed: "<< a[i-1].count << endl;
            break;
        case 3:
            cout << "\nEnter account number to display: ";
            cin >>i;
            if (a[i-1].account_no < 0 || a[i-1].account_no > n)
            {
                cout << "Invalid account number\n";
                break;
            }
            cout << "The balance is Rs "<<a[i-1].balance<<endl;
            break;
        case 4:
            break;
        default:
            cout << "Invalid input\n";
        }
    } while (c != 4);
}