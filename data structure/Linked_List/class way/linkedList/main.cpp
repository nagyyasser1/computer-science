#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    bool is_empty();
    void insert_first(int value);
    void display();
    int count();
    bool is_exist(int value);
    LinkedList();
};

LinkedList::LinkedList() : head(NULL){};

bool LinkedList::is_empty()
{
    return (head == NULL);
}

void LinkedList::insert_first(int value)
{
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void LinkedList::display()
{
    if (head == NULL)
    {
        cout << "Linked list empty?!.\n";
    }
    else
    {
        Node *current = head;

        while (current != NULL)
        {
            cout << current->data << "\t";
            current = current->next;
        }

        delete current;
    }
}

int LinkedList::count()
{
    int counter = 0;
    Node *current = head;
    while (current != NULL)
    {
        counter++;
        current = current->next;
    }

    delete current;
    return counter;
}

bool LinkedList::is_exist(int value)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == value)
        {
            return true;
        }

        current = current->next;
    }

    delete current;
    return false;
}

int main()
{

    return 0;
}