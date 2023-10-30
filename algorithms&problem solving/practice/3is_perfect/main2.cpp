#include <iostream>
using namespace std;

bool isPerfect(int number)
{
    int sum = 0;

    for (int counter = 1; counter <= number / 2; ++counter)
    {
        if (number % counter == 0)
        {
            sum += counter;
        }
    }

    if (sum == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    cout << "Enter a number to get all it's a perfect number before it: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " "
                 << "is perfect number\n";
        }
    }

    return 0;
}
