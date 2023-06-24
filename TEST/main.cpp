#include <iostream>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
int binarySearch(int arr[], int target, int start, int end);
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(nums) / sizeof(nums[0]);

    int result = binarySearch(nums, 1000, 0, len);
    if (result == -1)
        cout << "not foutn" << endl;
    cout << "result: " << result << endl;

    return 0;
}

int binarySearch(int arr[], int target, int start, int end)
{
    int middle = start + (end - start) / 2;
    if (arr[middle] == target)
    {
        return middle;
    }
    else if (arr[middle] < target)
    {
        return binarySearch(arr, target, middle + 1, end);
    }
    else if (arr[middle] > target)
    {
        return binarySearch(arr, target, start, middle - 1);
    }
    else
    {
        return -1;
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

void printArr(int arr[], int length)
{
    std::cout << "Array is : [";
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << '\t';
    }
    std::cout << ']';
}