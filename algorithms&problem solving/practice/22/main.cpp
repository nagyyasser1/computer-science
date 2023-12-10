#include <iostream>
using namespace std;

void printArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void fillArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "ENTER ARR OF " << i + 1 << "\t";
        cin >> arr[i];
        arr[i] = RandomNumber(1, 100);
    }
}

void fillArrRandomly(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

int countArrEle(int arr[], int length, int target)
{
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (target == arr[i])
        {
            counter++;
        }
    }
    return counter;
}

int arrMaxNo(int arr[], int length)
{
    int max = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int arrMinNo(int arr[], int length)
{
    int min = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[15], length = 10;

    fillArr(arr, length);

    printArr(arr, length);

    int yah = 1;
    do
    {
        cout << "ENTER No. To Count\n";
        int target;
        cin >> target;
        cout << target << " repeated " << countArrEle(arr, length, target) << " times.";
        cout << "Do you Want To continue press 1 else press 0\n";
        cin >> yah;
    } while (yah == 1);

    return 0;
}