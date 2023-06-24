#include <iostream>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
int Partition(int arr[], int start, int end);
void quickSort(int arr[], int start, int end);
int main()
{
    int nums[] = {2, 8, 4, 7, 1, 3, 9, 6, 5};
    int len = sizeof(nums) / sizeof(nums[0]);

    printArr(nums, len);
    cout << endl;
    quickSort(nums, 0, len - 1);
    printArr(nums, len);
    return 0;
}

int Partition(int arr[], int start, int end)
{
    int pivot = end;
    int index = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] < arr[pivot])
        {
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[index], arr[pivot]);
    return index;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int piv = Partition(arr, start, end);
        quickSort(arr, start, piv - 1);
        quickSort(arr, piv + 1, end);
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