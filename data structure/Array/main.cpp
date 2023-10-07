#include <iostream>
using namespace std;

class Array
{
private:
    int size, length, *items;

public:
    Array(int arrsize);
    void Fill();
    void Display();
    int getSize();
    int getLen();
    int Search(int key);
    void Insert(int idx, int value);
    void Append(int item);
    void Delete(int idx);
    void Enlarge(int new_size);
    void Merge(Array other);
    ~Array();
};

Array::Array(int arrsize) : size(arrsize), length(0)
{
    items = new int[arrsize];
}

void Array::Fill()
{
    int no_of_items;
    cout << "How many items you want to fill ?\n";
    cin >> no_of_items;

    if (no_of_items > size)
    {
        cout << "You cannot exceed the array size\n";
        return;
    }
    else
    {
        for (int i = 0; i < no_of_items; i++)
        {
            cout << "Enter item no" << i << endl;
            cin >> items[i];
            length++;
        }
    }
}

void Array::Display()
{
    cout << "Display Array Items :\n";
    for (int i = 0; i < length; i++)
    {
        cout << items[i] << "\t";
    }
    cout << endl;
}

int Array::getSize()
{
    return size;
}

int Array::getLen()
{
    return length;
}

int Array::Search(int key)
{
    int index = -1;
    for (int i = 0; i < length; i++)
    {
        if (items[i] == key)
        {
            index = i;
            break;
        }
    }
    return index;
}

void Array::Append(int new_item)
{
    if (length < size)
    {
        items[length] = new_item;
        length++;
    }
    else
    {
        cout << "Array is full!\n";
    }
}

void Array::Insert(int idx, int value)
{
    if (idx >= 0 && idx < size)
    {

        for (int i = length; i >= idx; i--)
        {
            items[i] = items[i - 1];
        }
        items[idx] = value;
        length++;
    }
    else
    {
        cout << "Error! index out of range!.\n";
    }
}

void Array::Delete(int idx)
{
    if (idx >= 0 && idx < size)
    {
        for (int i = idx; i < length - 1; i++)
        {
            items[i] = items[i + 1];
        }
        length--;
    }
    else
    {
        cout << "Error! index out of range!.\n";
    }
}

void Array::Enlarge(int new_size)
{
    if (new_size <= size)
    {
        cout << "New size must be large than prevoius one!?.\n";
        return;
    }
    else
    {
        size = new_size;
        int *old = items;
        items = new int[new_size];

        for (int i = 0; i < length; i++)
        {
            items[i] = old[i];
        }
        delete[] old;
    }
}

void Array::Merge(Array other)
{
    int new_size = size + other.getSize();
    size = new_size;

    int *old = items;
    items = new int[new_size];

    int i;
    for (i = 0; i < length; i++)
    {
        items[i] = old[i];
    }
    delete[] old;

    int j = i;
    for (int i = 0; i < other.getLen(); i++)
    {
        items[j++] = other.items[i];
        length++;
    }
}

Array::~Array()
{
    delete items;
    cout << "array object deleted\n";
}

int main()
{
    int arr_size;

    cout << "Hello This is Array ADT demo\n";

    cout << "Enter the array size\n";
    cin >> arr_size;

    Array myarray(arr_size);

    myarray.Fill();

    cout << "Array size = " << myarray.getSize() << " While length = " << myarray.getLen() << endl;

    myarray.Display();

    return 0;
}