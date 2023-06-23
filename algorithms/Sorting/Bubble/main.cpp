#include <iostream>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
void bubble_sort(int arr[], int size);

int main()
{
    int nums[] = {7, 6, 4, 3};
    int len = sizeof(nums) / sizeof(*nums);
    cout << "len:" << len << endl;
    printArr(nums, len);
    cout << endl;
    bubble_sort(nums, len);
    printArr(nums, len);

    return 0;
}

void bubble_sort(int arr[], int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
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
    cout << "Array is : [";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << ']';
}