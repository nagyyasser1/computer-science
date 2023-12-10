#include <iostream>
using namespace std;

int binary_search(int[], int, int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int r = binary_search(arr, 40, sizeof(arr) / sizeof(*arr));
    cout << "value is :" << r << endl;
    return 0;
}

int binary_search(int arr[], int n, int length)
{
    int start = 0;
    int end = length - 1;
    int middle;

    while (end >= start)
    {
        middle = start + (end - start) / 2;
        if (arr[middle] == n)
        {
            return middle;
        }
        else if (arr[middle] > n)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}
