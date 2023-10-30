#include <iostream>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
void selection_sort(int arr[], int size);
void bubble_sort(int arr[], int size);

int main()
{
    int nums[7] = {7, 4, 5, 9, 8, 2, 1};
    int len = sizeof(nums) / sizeof(*nums);

    printArr(nums, len);
    selection_sort(nums, len);
    printArr(nums, len);
    return 0;
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int k = i + 1; k < size; k++)
        {
            if (arr[k] < arr[min_idx])
            {
                min_idx = k;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(&arr[k], &arr[k + 1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int arr[], int length)
{
    cout << "Array is: [";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << ']' << endl;
}
