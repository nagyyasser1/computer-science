#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number to test if it's a perfect number: ";
    cin >> number;

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
        cout << number << " is a Perfect number as the sum of its divisors equals " << sum << endl;
    }
    else
    {
        cout << number << " is Not a Perfect number as the sum of its divisors equals " << sum << endl;
    }

    return 0;
}
