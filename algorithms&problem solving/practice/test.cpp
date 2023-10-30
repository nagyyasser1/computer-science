#include <iostream>
using namespace std;

int sumDigit(int dig)
{
    int reminder = dig % 10;

    if (dig < 1)
    {
        return 0;
    }

    return reminder + sumDigit(dig / 10);
}

void revDigit(int dig)
{
    if (dig < 1)
    {
        return;
    }
    cout << dig % 10 << endl;
    revDigit(dig / 10);
}

int revDigitExact(int dig, int newDigit)
{

    if (dig < 1)
    {
        return newDigit;
    }
    else
    {

        newDigit = (newDigit * 10) + (dig % 10);

        return revDigitExact(dig / 10, newDigit);
    }
}

int main()
{
    cout << revDigitExact(234, 0);
    return 0;
}