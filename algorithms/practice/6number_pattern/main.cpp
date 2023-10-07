#include <iostream>
using namespace std;

void invertedNumPattern(int num)
{

    for (int i = num; i > 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}

void numPattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << i << "\t";
        }
        cout << endl;
    }
}
int main()
{
    numPattern(6);
    return 0;
}