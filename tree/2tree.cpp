#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};



Node* insert(Node* &root,int k)
{
    if(root==NULL)
    return new Node(k);

    if(k<root->data)
    {
        root->left =  insert(root->left,k);
    }
    else 
    root->right = insert(root->right,k);

    return root;
}
void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insert(root,data);
        cin>>data;
    }
}

// bool search(Node* root,int find)
// {
//     if(root==NULL) return false;
//     if(root->data == find) return true;

//     if(find<root->data) search(root->left,find);
//     else search(root->right,find);

//    // return false;
// }

void preorder(Node* &root)
{
    if(root==NULL) return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data to create BST ";
    takeInput(root);

    preorder(root);
   // cout<<"100 is present in the array " << search(root,80);

    return 0;
}