#include <iostream>
using namespace std;

int main()
{
    int candidate[5] = {0, 0, 0, 0, 0};
    int n, spoilt = 0;
    cout << "Enter the number of ballots: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int vote;
        cout << "Enter the vote for ballot " << i + 1 << ": ";
        cin >> vote;
        if (vote >= 1 && vote <= 5)
            candidate[vote - 1]++;
        else
            spoilt++;
    }
    for (int i = 0; i < 5; i++)
        cout << "Candidate " << i + 1 << " received " << candidate[i] << " votes." << endl;
    cout << "Spoilt votes are " << spoilt << endl;
    return 0;
}
