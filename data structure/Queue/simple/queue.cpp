#include <iostream>
using namespace std;
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value);
void dequeue();
int peek();
void display();

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    display();
    dequeue();
    display();
    cout << "peek=" << peek() << endl;
    return 0;
}

void enqueue(int value)
{
    if (rear != SIZE - 1)
    {
        if (rear == -1 && front == -1)
        {
            front++;
            rear++;
            queue[rear] = value;
        }
        else
        {
            rear++;
            queue[rear] = value;
        }
    }
    else
    {
        cout << "queue is Full" << endl;
    }
}

void dequeue()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout << "queue is empty" << endl;
    }
}

int peek()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is empty" << endl;
        return -1;
    }
}

void display()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << '\t';
        }
        cout << endl;
    }
    else
    {
        cout << "queue is empty" << endl;
    }
}