#include <iostream>
using namespace std;

int countFreqOfNum(int digit, int number)
{
    int reminder = 0, freq = 0;

    while (digit > 0)
    {
        reminder = digit % 10;
        digit = digit / 10;

        if (number == reminder)
        {
            freq++;
        }
    }

    return freq;
}

int main()
{

    cout << countFreqOfNum(334655444, 3);
    return 0;
}