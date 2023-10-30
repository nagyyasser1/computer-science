#include <iostream>
#include <chrono>
#include <random>
#include <time.h>
using namespace std;

void swap(int *a, int *b);
void printArr(int arr[], int length);
void insertion_sort(int arr[], int size);
void insertion_sort2(int arr[], int size);

int main()
{
    clock_t start, end;
    double time_elapsed;

    int nums[1000];
    int len = sizeof(nums) / sizeof(*nums);

    // Create a random number generator.
    std::mt19937 generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(0, 1000);

    // Fill the array with random numbers.
    for (int i = 0; i < 1000; i++)
    {
        nums[i] = distribution(generator);
    }
    // start = clock();
    // insertion_sort2(nums, len);
    // end = clock();

    // time_elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    // std::cout << "Time elapsed for while: " << time_elapsed << " seconds" << std::endl;

    start = clock();
    insertion_sort(nums, len);
    end = clock();

    time_elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time elapsed for for: " << time_elapsed << " seconds" << std::endl;

    return 0;
}

void insertion_sort(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        for (int s = i; s > 0; s--)
        {
            if (arr[s] < arr[s - 1])
            {
                swap(arr[s], arr[s - 1]);
            }
        }
    }
}

void insertion_sort2(int arr[], int size)
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