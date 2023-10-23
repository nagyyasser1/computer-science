#include <iostream>
using namespace std;

int reverseNumber(int number)
{
    int reminder = 0;
    int revNum = 0;

    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;

        revNum = revNum * 10 + reminder;
    }

    return revNum;
}

bool isPalindrome(int number)
{
    return number == reverseNumber(number);
}

bool isPalindromeStr(string str)
{
    if (str.length() <= 1)
    {
        return true;
    }
}
int main()
{
    return 0;
}