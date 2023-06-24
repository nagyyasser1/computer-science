#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return binarySearchRecursive(arr, mid + 1, high, x);
        }
        else
        {
            return binarySearchRecursive(arr, low, mid - 1, x);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int result = binarySearchRecursive(arr, 0, n - 1, x);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << result;
    }
    return 0;
}
