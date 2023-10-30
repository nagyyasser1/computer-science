#include <iostream>
using namespace std;

int SumDigit(int Number)
{
    int reminder, sum = 0;
    while (Number > 0)
    {
        int reminder = Number % 10;
        Number = Number / 10;
        sum += reminder;
    }
    return sum;
}

int main()
{
    cout << SumDigit(1234);
    return 0;
}