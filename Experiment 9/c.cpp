#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    string name, address, branch;
    int rollNo;
  public:
    void createStudentRecord(){
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter Address: ";
        cin.ignore();
        getline(cin, address);
        ofstream file(to_string(rollNo) + ".txt");
        if (file.is_open()) {
            file << "Name: " << name << endl;
            file << "Roll Number: " << rollNo << endl;
            file << "Branch: " << branch << endl;
            file << "Address: " << address << endl;
            file.close();
            cout << "Student record saved to file." << endl;
        } 
        else cout << "Failed to create the student record." << endl;
    }

    void searchStudentRecord(int rollNumber){
        ifstream file(to_string(rollNumber) + ".txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else cout << "Student record not found for Roll Number: " << rollNumber << endl;
    }

    void updateStudentRecord(int rollNumber){
        ifstream file(to_string(rollNumber) + ".txt");
        if (file.is_open()){
            string newName, newBranch, newAddress;
            cout << "Enter updated Name: ";
            cin >> newName;
            cout << "Enter updated Branch: ";
            cin >> newBranch;
            cout << "Enter updated Address: ";
            cin.ignore();
            getline(cin, newAddress);
            file.close();
            ofstream updatedFile(to_string(rollNumber) + ".txt");
            if (updatedFile.is_open()) {
                updatedFile << "Name: " << newName << endl;
                updatedFile << "Roll Number: " << rollNumber << endl;
                updatedFile << "Branch: " << newBranch << endl;
                updatedFile << "Address: " << newAddress << endl;
                updatedFile.close();
                cout << "Student record updated." << endl;
            } 
            else cout << "Failed to update the student record." << endl;
        } else cout << "Student record not found for Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student;
    int choice;
    int rollNumber;
    do{
        cout << "\nMenu\n";
        cout << "1. Create Student Record\n";
        cout << "2. Search Student Record\n";
        cout << "3. Update Student Record\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                student.createStudentRecord();
                break;
            case 2:
                cout << "Enter Roll Number to Search: ";
                cin >> rollNumber;
                student.searchStudentRecord(rollNumber);
                break;
            case 3:
                cout << "Enter Roll Number to Update: ";
                cin >> rollNumber;
                student.updateStudentRecord(rollNumber);
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);
    return 0;
}