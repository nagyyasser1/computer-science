#include <iostream>
using namespace std;

int main()
{
    char letters[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int num;
    cout << "Enter the num\n";
    cin >> num;

    for (int i = num - 1; i >= 0; i--)
    {
        for (int k = i; k >= 0; k--)
        {
            cout << letters[i];
        }
        cout << endl;
    }

        return 0;
}