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

class Stack
{
public:
    Node *top;
    static int length; // Keep 'length' as a static member variable

    Stack()
    {
        top = NULL;
    }

    bool is_empty()
    {
        return top == NULL;
    }

    void push(int value)
    {
        Node *new_node = new Node();
        new_node->data = value;
        if (is_empty())
        {
            top = new_node;
        }
        else
        {
            new_node->next = top;
            top = new_node;
        }
        length++; // Access the 'length' variable directly
    }

    void display()
    {
        if (is_empty())
        {
            cout << "Stack is empty\n";
            return;
        }
        Node *current = top;
        while (current != NULL)
        {
            cout << current->data << "\t";
            current = current->next;
        }
        cout << endl;
    }

    int pop()
    {
        if (is_empty())
        {
            cout << "Stack is empty. Cannot pop.\n";
            return -1; // Return a default value to indicate an error
        }

        Node *del_item = top;
        int del_item_value = del_item->data;

        top = top->next;
        delete del_item;
        length--; // Access the 'length' variable directly
        return del_item_value;
    }

    int peek()
    {
        if (is_empty())
        {
            cout << "Stack is empty. Cannot peek.\n";
            return -1; // Return a default value to indicate an error
        }
        return top->data;
    }
};

int Stack::length = 0; // Initialize the 'length' variable

int main()
{
    Stack s;
    int item;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter item: \n";
        cin >> item;
        s.push(item);
    }
    cout << endl;
    s.display();
    cout << endl;

    cout << "stack length = " << Stack::length << endl; // Access 'length' through the class

    cout << endl;

    cout << s.pop();
    cout << endl;
    s.display();

    return 0;
}
