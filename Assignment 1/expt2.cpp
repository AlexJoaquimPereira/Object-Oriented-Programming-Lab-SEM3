#include <iostream>
using namespace std;

int main()
{
    char name[10];
    int units;
    cout << "Enter the name of the user: ";
    cin >> name;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    float bill = 0;
    if (units <= 100)
        bill = units * 0.6;
    else if (units <= 300)
        bill = 100 * 0.6 + (units - 100) * 0.8;
    else
        bill = 100 * 0.6 + 200 * 0.8 + (units - 300) * 0.9;

    if (bill > 300)
        bill += bill * 0.15;

    cout << "Electricity bill for " << name << " is Rs. " << bill << endl;

    return 0;
}
