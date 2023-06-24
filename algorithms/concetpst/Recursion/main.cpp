#include <iostream>
using namespace std;

int Factorial(int);
int Fib(int);

int main()
{
    int x = 5;
    // -----  Factorial --------- //
    int result = Factorial(x);
    cout << "factorial: " << x << " = " << result << endl;
    // ----- Fib        --------- //
    // int result = Fib(x);
    // cout << "Fib: " << x << " = " << result << endl;

    return 0;
}

int Factorial(int val)
{
    if (val == 1)
    {
        return 1;
    }
    else
    {
        return val * Factorial(val - 1);
    }
}

int Fib(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return Fib(x - 1) + Fib(x - 2);
    }
}
