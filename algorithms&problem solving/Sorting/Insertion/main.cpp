#include <iostream>
#include <chrono>
#include <random>
#include <time.h>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
void insertion_sort(int arr[], int size);

int main()
{

    int nums[4] = {4, 3, 6, 2};
    printArr(nums, 4);
    insertion_sort(nums, 4);
    printArr(nums, 4);

    return 0;
}

void insertion_sort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int start, end;
        start = 0;
        end = i;
        while (arr[end] < arr[end - 1] && end > start)
        {
            swap(arr[end], arr[end - 1]);
            end--;
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