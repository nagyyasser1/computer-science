#include <iostream>
using namespace std;

void print_array(int[], int);
void merge(int *arrL, int *arrR, int *arr, int mid, int sizeR);
void mergeSort(int *arr, int size);

int main()
{
    int arr[] = {60, 10, 20, 5, 60, 70};
    int len = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, len);
    mergeSort(arr, len);
    print_array(arr, len);

    return 0;
}

void mergeSort(int *arr, int size)
{
    if (size < 2)
        return;

    int mid = size / 2;
    int *arrL = new int[mid];
    int *arrR = new int[size - mid];

    for (int i = 0; i < mid; i++)
    {
        arrL[i] = arr[i];
    }

    for (int i = mid; i < size; i++)
    {
        arrR[i - mid] = arr[i];
    }

    mergeSort(arrL, mid);
    mergeSort(arrR, size - mid);

    merge(arrL, arrR, arr, mid, size - mid);
}

void merge(int *arrL, int *arrR, int *arr, int mid, int sizeR)
{
    int i = 0, j = 0, k = 0;

    while (i < mid && j < sizeR)
    {
        if (arrL[i] <= arrR[j])
        {
            arr[k] = arrL[i];
            i++;
        }
        else
        {
            arr[k] = arrR[j];
            j++;
        }
        k++;
    }

    while (i < mid)
    {
        arr[k] = arrL[i];
        i++;
        k++;
    }

    while (j < sizeR)
    {
        arr[k] = arrR[j];
        j++;
        k++;
    }
}

void print_array(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}
