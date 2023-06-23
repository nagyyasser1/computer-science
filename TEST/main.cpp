#include <iostream>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
void insertion_sort(int arr[], int size);
void insertion_sort2(int arr[], int size);

int main()
{

    return 0;
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