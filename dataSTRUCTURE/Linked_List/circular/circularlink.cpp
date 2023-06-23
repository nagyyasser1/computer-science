#include <iostream>
using namespace std;

struct node
{
    int info;
    node*next;
    node*prev;
};

node*head=NULL;

void insert(int data);
void addthead(int data);
void remove(int value);
void display();

int main(){
    cout<<"Alla"<<endl;
    insert(1);
    insert(2);
    insert(3);
    display();
    remove(1);
    display();
    cout<<"Alla"<<endl;
    return 0;
}

void insert(int data){
    node*newNode=new node;
    newNode->info=data;
    if (head==NULL)
    {
        head=newNode;
        newNode->next=head;
    }else{
        node*temp=head;
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}
void addthead(int data){
    node*newNode=new node;
    newNode->info=data;
    node*temp=head;
    if(head==NULL){
        head=newNode;
        newNode->next=head;
    }else{
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp=newNode;
        newNode->next=head;
        head=newNode;
    }
}
void display(){
    if(head==NULL){
        cout<<"circular linked list is empty"<<endl;
    }else{
        node*temp=head;
        while (temp->next!=head)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
        cout<<temp->info<<endl;
        return;
    }
}
void remove(int value){
    if(head==NULL){
        return;
    }
    node*temp;
    temp=head;
    if(temp->info==value){
        head=temp->next;
        if(head->prev!=NULL)
        head->prev=NULL;
        delete(temp);
        return;
    } 
    while (temp!=NULL&&temp->info!=value)
    {
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }else{
        temp->prev->next=temp->next;
        if(temp->next!=NULL)
        temp->next->prev=temp->prev;
        delete(temp);
    }
}