#include<iostream>
using namespace std;

class student
{
    char name[10];
    int roll_no;
    char branch[10];
    int maths, ld, ds, oops, co;
    float percentage;

    public:
        void getdata(int);
        void display();
        void calc_pc();
};

void student :: getdata(int roll)
{
    roll_no = roll;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter branch: ";
    cin >> branch;
    cout << "Enter marks in Maths, LD, DS, OOPS, CO respectively: ";
    cin >> maths >> ld >> ds >> oops >> co;
}

void student :: display()
{
    cout << "Name: " << name <<endl;
    cout << "Branch: " << branch << endl;
    cout << "Maths: " << maths << endl;
    cout << "LD: " << ld <<endl;
    cout << "DS: " << ds <<endl;
    cout << "OOPS: "<< oops <<endl;
    cout << "CO: " << co << endl;
}

void student :: calc_pc()
{
    percentage = (maths + co + ld + oops + ds) / 5;
    cout << "Overall percentage: " << percentage <<endl;
}

int main()
{
    student s[3];
    int c, roll;

    cout << "Enter student details\n";
    for(int i = 0; i < 3; i++)
    {
        cout << "\nRoll number: " << i+1 <<endl;
        s[i].getdata(i+1);
    }

    do
    {
        cout << "Choose your option\n";
        cout << "1. Display student details\n";
        cout << "2. Calculate percentage and display\n";
        cout << "3. Exit\n";
        cin >> c;

        switch (c)
        {
            case 1:
                cout << "\nEnter roll number to display: ";
                cin >> roll;
                if (roll < 0 || roll > 3){
                    cout << "Invalid roll number\n";
                    break;
                }
                s[roll-1].display();
                break;
                
            case 2:
                cout << "\nEnter roll number to display: ";
                cin >> roll;
                if (roll < 0 || roll > 3){
                    cout << "Invalid roll number\n";
                    break;
                }
                s[roll-1].calc_pc();
                break;
                
            case 3:
                break;
            default:
                cout << "Invalid input\n";
        }
    } while (c!=3);
}