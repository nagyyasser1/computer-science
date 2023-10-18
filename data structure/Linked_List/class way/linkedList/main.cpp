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
    void insert_before(int item, int value);
    bool is_exist(int value);
    void append(int value);
    int delete_item(int item);
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

void LinkedList::insert_before(int item, int value)
{
    if (is_exist(item))
    {

        Node *new_node = new Node();
        new_node->data = value;

        Node *temp = head;
        while (temp != NULL && temp->next->data != item)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "item: " << item << " not found!?." << endl;
            return;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }
    else
    {
        cout << "item: " << item << " not found!?." << endl;
        return;
    }
}

void LinkedList::append(int value)
{
    if (is_empty())
    {
        insert_first(value);
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        Node *new_node = new Node();

        new_node->data = value;
        temp->next = new_node;
        new_node->next = NULL;
    }
}

int LinkedList::delete_item(int item)
{

    if (is_empty())
    {
        cout << "List is empty!?. No item to delete\n";
        return 0;
    }

    int deleted_value;
    Node *del_ptr = head;
    // in case it is the first item
    if (head->data == item)
    {
        head = head->next;
        deleted_value = del_ptr->data;
        delete del_ptr;
        return deleted_value;
    }

    // in case any item
    Node *prev = NULL;
    while (del_ptr->data != item)
    {
        prev = del_ptr;
        del_ptr = del_ptr->next;
    }
    prev->next = del_ptr->next;
    deleted_value = del_ptr->data;
    delete del_ptr;
    return deleted_value;
}

int main()
{
    LinkedList list1;
    list1.display();
    list1.append(4);
    list1.append(8);
    list1.append(16);
    list1.display();
    cout << endl;
    list1.delete_item(4);
    list1.display();
    cout << endl;
    list1.delete_item(16);
    list1.display();

    return 0;
}