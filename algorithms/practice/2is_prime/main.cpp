#include <iostream>
using namespace std;

bool isNprime(int x)
{
    if (x <= 1)
    {
        return false;
    }

    if (x <= 3)
    {
        return true;
    }

    int counter = 2;

    while (counter <= (x / 2))
    {
        if (x % counter == 0)
        {
            return false;
        }

        counter++;
    }

    return true;
}

int main()
{
    int number;
    cout << "Enter number to check all possible prime number to it\n";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        if (isNprime(i))
        {
            cout << i << " "
                 << "is Prime number\n";
        }
        else
        {
            cout << i << " "
                 << "is Not Prime number\n";
        }
    }

    return 0;
}