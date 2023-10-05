#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *top = NULL;

void display();
void push(int value);
int pop();
int peek();

int main()
{
    cout << "welcome stack with linkedlist" << endl;
    push(5);
    push(10);
    push(15);
    display();
    pop();
    display();
    cout << "top= " << peek();
    return 0;
}

void push(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}

int pop()
{
    int value;
    if (top == NULL)
    {
        cout << "stack underflow";
        return -1;
    }
    else
    {
        node *firstNode = top;
        top = firstNode->next;
        value = firstNode->data;
        delete (firstNode);
        return value;
    }
}

void display()
{
    node *currentNode;
    if (top == NULL)
    {
        cout << "stack underflow " << endl;
    }
    else
    {
        currentNode = top;
        while (currentNode != NULL)
        {
            cout << currentNode->data << "\n";
            currentNode = currentNode->next;
        }
    }
}

int peek()
{
    if (top == NULL)
    {
        cout << "stack underflow.\n";
        return -1;
    }
    else
    {
        return top->data;
    }
}
