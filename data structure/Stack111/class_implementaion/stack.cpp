#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

class stack
{
private:
    int top;
    int item[MAX_SIZE];

public:
    stack();
    void push(int Element);
    void pop();
    void pop(int &Element);
    bool isEmpty()
    {
        return top < 0;
    }
    void getTop(int &StackTop);
    void print();
    ~stack();
};

stack::stack() : top(-1) {}

void stack::push(int Element)
{
    if (top >= MAX_SIZE - 1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        item[top] = Element;
    }
}

void stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack empty on pop";
    }
    else
    {
        top--;
    }
}

void stack::pop(int &Element)
{
    if (isEmpty())
    {
        cout << "Stack empty on pop";
    }
    else
    {
        Element = item[top];
        top--;
    }
}

void stack::getTop(int &StackTop)
{
    if (isEmpty())
    {
        cout << "Stack empty on getTop";
    }
    else
    {
        StackTop = item[top];
        cout << StackTop << endl;
    }
}

void stack::print()
{
    cout << "[";
    for (int i = top; i >= 0; i--)
    {
        /* code */
        cout << item[i] << " ";
    };
    cout << "]";
    cout << endl;
}

stack::~stack() {}

int main()
{
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();
    return 0;
}