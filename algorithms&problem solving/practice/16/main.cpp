#include <iostream>
using namespace std;

void printAllCombinations()
{
    for (char first = 'A'; first <= 'Z'; first++)
    {
        for (char second = 'A'; second <= 'Z'; second++)
        {
            for (char third = 'A'; third <= 'Z'; third++)
            {
                std::cout << first << second << third << std::endl;
            }
        }
    }
}

int main()
{

    printAllCombinations();

    return 0;
}