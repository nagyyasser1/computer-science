#include <iostream>
using namespace std;

void print_array(int[], int);
void merge(int[], int, int, int);
void mergeSort(int[], int, int);

int main()
{
    int arr[] = {60, 10, 20, 5, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]); // 24/4=6

    mergeSort(arr, 0, n - 1);
    print_array(arr, n);
    return 0;
}

void print_array(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << '\t';
    }
}

void merge(int array[], int l, int m, int r)
{
    int i, j, k;
    int size_arr1 = m - l + 1;
    int size_arr2 = r - m;
    int *L = new int[size_arr1], *R = new int[size_arr2];

    for (i = 0; i < size_arr1; i++)
        L[i] = array[l + i];

    for (j = 0; j < size_arr2; j++)
        R[j] = array[m + 1 + j];

    i = j = 0;
    k = l;

    while (i < size_arr1 && j < size_arr2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < size_arr1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < size_arr2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int m = left + (right - left) / 2;

        mergeSort(arr, left, m);
        mergeSort(arr, m + 1, right);

        merge(arr, left, m, right);
    }
}