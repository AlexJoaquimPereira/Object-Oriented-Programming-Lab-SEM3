#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Telephone{
    string cname, phoneNo;
  public:
    void enterCustomerDetails();
    void editPhoneNumber();
    void displayCustomerDetails(const string& cname);
};

void Telephone :: enterCustomerDetails() {
    string cname, phoneNo;
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, cname);
    cout << "Enter phone number: ";
    getline(cin, phoneNo);
    ofstream customerFile(cname + ".txt");
    if (customerFile.is_open()) {
        customerFile << cname << endl;
        customerFile << phoneNo << endl;
        customerFile.close();
        cout << "Customer details saved in a file." << endl;
    } 
    else cout << "Unable to create the customer file." << endl;
}

void  Telephone :: editPhoneNumber(){
    string cname, old_phoneNo, new_phoneNo, file_name;
    cout << "Enter Customers name: ";
    cin.ignore();
    getline(cin, file_name);
    ifstream customerFile(file_name + ".txt");
    if(!customerFile) {
        cout << "File doesnt exists" << endl;
        return;
    }
    customerFile >> cname;
    customerFile >> old_phoneNo;
    customerFile.close();
    cout << "Enter the new number: ";
    getline(cin, new_phoneNo);
    ofstream customerFileout(file_name + ".txt");
    if (customerFileout.is_open()) {
        customerFileout << cname << endl;
        customerFileout << new_phoneNo << endl;
        customerFileout.close();
        cout << "New Customer details saved in a file." << endl;
    } 
    else cout << "Unable to create the customer file." << endl;
}

void Telephone :: displayCustomerDetails(const string& cname) {
    ifstream customerFile(cname + ".txt");
    if (customerFile.is_open()) {
        string line;
        while (getline(customerFile, line)) {
            cout << line << endl;
        }
        customerFile.close();
    } 
    else cout << "Customer file not found." << endl;
}

int main() {
    Telephone customer;
    string cname;
    int choice;
    do {
        cout << "Menu" << endl;
        cout << "1. Enter Customer Details" << endl;
        cout << "2. Edit Phone Number" << endl;
        cout << "3. Display Customer Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer.enterCustomerDetails();
                break;
            case 2:
                customer.editPhoneNumber();
                break;
            case 3:
                cout << "Enter the customer's name: ";
                cin.ignore();
                getline(cin, cname);
                customer.displayCustomerDetails(cname);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}