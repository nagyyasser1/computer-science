#include <iostream>
using namespace std;

struct node
    {
        int data;
        node*next;
        node*prev;
        node(){
            next=NULL; 
            prev=NULL;
        }
    };
    node*head=NULL;
    void append(int value);
    void insert_at_pos(int value,int pos);
    void remove(int value);
    void display();
int main(){
        cout<<"Alla"<<endl;
        append(1);
        append(2);
        append(3); 
        append(4);
        display();
        remove(1);
        display();
        cout<<"Alla"<<endl;
    return 0;
}
    void remove(int value){
    if(head==NULL){
        return;
    }
    node*temp;
    temp=head;
    if(temp->data==value){
        head=temp->next;
        if(head!=NULL)
        head->prev=NULL;
        delete(temp);
        return;
    }
    while (temp!=NULL&&temp->data!=value)
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
void append(int value)
{
        node*newNode=new node;
        newNode->data=value;
        if(head==NULL){
            head=newNode;
        }else{
            node*temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode; 
            newNode->prev=temp;
        }
    }
void display(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_pos(int value,int pos){
    node*newNode=new node;
    newNode->data=value;
    if(head==NULL)
        head=newNode;
        return;
    if(pos==0){
        newNode->next=head;
        head->prev=newNode; 
        head=newNode;
        return;
    }
    node*temp=head;
    for (int i = 0; i < pos && temp!=NULL; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL){
        append(value);
    }
    newNode->prev=temp->prev;
    temp->prev->next=newNode;
    temp->prev=newNode; 
    newNode->next=temp;
}
