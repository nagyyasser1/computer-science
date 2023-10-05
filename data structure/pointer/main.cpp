#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr;
    return 0;
}