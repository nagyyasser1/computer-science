#include <iostream>
using namespace std;

class BTS{
    private:
    struct node
    {
        int data;
        node*right;
        node*left;
    };
    node*root=nullptr;
    int getHeighthelper(node*temp){
        if(temp==nullptr){
            return -1;
        }
        int LeftSubTree=getHeighthelper(temp->left);
        int ReightSubTree=getHeighthelper(temp->right);
        return 1+max(LeftSubTree,ReightSubTree);
    }
    public:
    void add(int value){
    node*newNode=new node;
    newNode->data=value;
    newNode->left=nullptr;
    newNode->right=nullptr;
    if(root==nullptr){
        root=newNode;
        return;
    }
    node*temp=root;
    node*parent=nullptr;
    while (temp!=nullptr)
    {
        parent=temp;
        if(value<=temp->data){
            temp=temp->left;
        }else{
            temp=temp->right;
        }
    }
    if(value<=parent->data){
        parent->left=newNode;
    }else{
        parent->right=newNode;
    }
}
    int getMax(){
    node*temp=root;
    while (temp->right!=nullptr) 
    {
        temp=temp->right;
    }
    return temp->data;
}
    int getMin(){
    node*temp=root;
    while (temp->left!=nullptr)
    {
        temp=temp->left;
    }
    return temp->data;
}
    int getHeight(){
        if(root==nullptr){
            return -1;
        }else{
            return getHeighthelper(root);
        }
    }
};

int main(){
    BTS s;
    
    cout<<s.getHeight();
    return 0;
}


