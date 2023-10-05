#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertNode(int value);
void display();
void deletNode(int value);
void insertBEG(int value);
void deleteBEG();
void deleteEND();

int main()
{
    cout << "welcome linkedlist" << endl;
    insertNode(5);
    insertNode(10);
    insertNode(15);
    display();
    cout << endl;
    deletNode(5);
    display();
    return 0;
}

void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void display()
{
    node *currentNode;
    if (head == NULL)
    {
        cout << "Linked list is Empty" << endl;
    }
    else
    {
        currentNode = head;
        while (currentNode != NULL)
        {
            cout << currentNode->data << "\t";
            currentNode = currentNode->next;
        }
    }
}

void deletNode(int value)
{
    node *current, *previous;

    current = head;
    previous = head;

    if (current->data == value)
    {
        head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }
    if (current == NULL)
    {
        cout << "no value." << endl;
    }
    else
    {
        previous->next = current->next;
        free(current);
    }
}

void insertBEG(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void deleteBEG()
{
    if (head == NULL)
    {
        cout << "linked list is empty";
    }
    else
    {
        node *firstNode = head;
        head = firstNode->next;
        delete (firstNode);
    }
}

void deleteEND()
{
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
    }
    else if (head->next = NULL)
    {
        delete (head);
        head = NULL;
    }
    else
    {
        node *ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete (ptr->next);
        ptr->next = NULL;
    }
}
