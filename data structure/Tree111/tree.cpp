#include <iostream>
using namespace std;

class Node
{
public:
    Node *left, *right;
    int data;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    };
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    };

    Node *insert(Node *current, int item)
    {

        if (current == NULL)
        {
            Node *new_node = new Node(item);
            current = new_node;
        }
        else if (item < current->data)
        {
            current->left = insert(current->left, item);
        }
        else
        {
            current->right = insert(current->right, item);
        }

        return current;
    }

    void insert(int item)
    {
        root = insert(root, item);
    }

    void pre_order(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        cout << r->data << "\t";
        pre_order(r->left);
        pre_order(r->right);
    }

    void in_order(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        in_order(r->left);
        cout << r->data << "\t";
        in_order(r->right);
    }

    void post_order(Node *r)
    {
        if (r == NULL)
        {
            return;
        }
        post_order(r->left);
        post_order(r->right);
        cout << r->data << "\t";
    }

    Node *search(int key, Node *current)
    {
        if (current == nullptr || key == current->data)
        {
            return current;
        }
        else if (key < current->data)
        {
            return search(key, current->left);
        }
        else
        {
            return search(key, current->right);
        }
    }

    bool search(int key)
    {
        if (root == NULL)
        {
            return false;
        }
        Node *result = search(key, root);
        return result != NULL;
    }

    Node *min(Node *current)
    {

        if (current == NULL)
        {
            return NULL;
        }

        if (current->left == NULL)
        {
            return current;
        }
        else
        {
            return min(current->left);
        }
    }

    Node *max(Node *current)
    {

        if (current == NULL)
        {
            return NULL;
        }

        if (current->right == NULL)
        {
            return current;
        }
        else
        {
            return max(current->right);
        }
    }

    Node *delete_node(Node *current, int key)
    {
        if (current == NULL)
        {
            return NULL;
        }
    }
};

int main()
{
    BST btree;
    btree.insert(45);
    btree.insert(15);
    btree.insert(79);
    btree.insert(45);
    btree.insert(90);
    btree.insert(10);
    btree.insert(55);
    btree.insert(12);
    btree.insert(20);
    btree.insert(50);

    cout << "Display tree content" << endl;
    btree.pre_order(btree.root);
    cout << endl;

    if (btree.search(580))
    {
        cout << "Yes, found." << endl;
    }
    else
    {
        cout << "No, not found." << endl;
    }

    Node *min = btree.min(btree.root);
    if (min == NULL)
    {
        cout << "no min items\n";
    }
    else
    {
        cout << "the min item equal : " << min->data << endl;
    }
    Node *max = btree.max(btree.root);
    if (max == NULL)
    {
        cout << "no max items\n";
    }
    else
    {
        cout << "the max item equal : " << max->data << endl;
    }

    return 0;
}
