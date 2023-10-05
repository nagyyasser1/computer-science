#include <iostream>
using namespace std;

void multiplyXtoN(int x, int end)
{
    for (int i = 1; i <= end; i++)
    {
        cout << x * i << "\t";
    }
    cout << endl;
}

int main()
{
    int rows, columns;
    cout << "Enter number of columns followed by number of rows\n";
    cin >> columns >> rows;

    cout << "multiplication table from 1 to " << columns << endl;

    int x = 1;

    while (x <= rows)
    {
        multiplyXtoN(x, columns);
        x++;
    }

    return 0;
}