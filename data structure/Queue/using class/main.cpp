#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
};

class Queue
{
private:
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    };
    bool is_empty()
    {
        return front == NULL;
    }
    void enqueue(int value)
    {
        Node *new_node = new Node();
        new_node->data = value;

        if (is_empty())
        {
            front = rear = new_node;
        }
        else
        {
            rear->next = new_node;
            rear = new_node;
        }
    }
    void display()
    {
        if (is_empty())
        {
            cout << "queue is empty\n";
        }
        else
        {
            Node *temp = front;
            while (temp != NULL)
            {
                cout << temp->data << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void dequeue()
    {
        if (is_empty())
        {
            cout << "Queue is empty\n";
        }
        else if (front == rear)
        {
            Node *current = front;
            front = rear = NULL;
            delete current;
        }
        else
        {
            Node *current = front;
            front = front->next;
            delete current;
        }
    }
    int getFirst()
    {
        return front->data;
    }
    int getLast()
    {
        return rear->data;
    }
    ~Queue(){};
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(33);
    q.display();
    return 0;
}