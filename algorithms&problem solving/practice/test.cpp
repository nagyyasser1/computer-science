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

int readPositiveNumber()
{
    int number = 0;
    do
    {
        cout << "ENTER POSITIVE NUMBER." << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

int main()
{
    int arr1[4] = {44, 33, 22, 5};
    int arr2[4] = {44, 33, 22, 5};
    int arr3[4];

    for (int i = 0; i < 4; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr3[i] << "\t";
    }

    return 0;
}