#include <iostream>
using namespace std;

int reversNumber(int Number)
{
    int reminder = 0, Num2 = 0;

    while (Number > 0)
    {
        reminder = Number % 10;

        Number = Number / 10;

        Num2 = Num2 * 10 + reminder;
    }
    return Num2;
}

int main()
{

    cout << reversNumber(9846);
    return 0;
}