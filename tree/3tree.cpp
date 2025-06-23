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
        data = val;
        left=right=NULL;
    }
};

Node* insert(Node* root, int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    if(data>root->data)
    {
        root->right= insert(root->right,data);
    }
    else
    {
        root->left = insert(root->left,data);
    }
    return root;
}

bool search(Node* root,int k)
{
    if(root==NULL) return false;
    if(root->data == k) return true;

    if(k> root->data)
    {
        search(root->right,k);
    }
    else
    {
        search(root->left,k);
    }
}

Node* findMin(Node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int val)
{
    if(root==NULL) return NULL;

    if(val<root->data)
    {
        root->left= deleteNode(root->left,val);
        return root;
    }
    else if(val>root->data)
    {
        root->right= deleteNode(root->right,val);
        return root;
    }
    else
    {   //0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        // left child
        else if(root->left!=NULL && root->right==NULL)
        {
            Node* store = root->left;
            delete root;
            return store;
        }
        // right child
        else if(root->right!=NULL && root->left==NULL)
        {
            Node* store = root->right;
            delete root;
            return store;
        }
        // both children
        else
        {
            Node* temp= findMin(root->right);
            root->data=temp->data;
            root->right= deleteNode(root->right,temp->data);
            return root; 
        }

    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insert(root,data);
        cin>>data;
    }
}

void preOrder(Node *root)
{
    if(root==NULL) return;

    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}

void levelOrderTraversal(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
            else if(!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}
int main()
{
    // Node* root = NULL;
    // cout<<"Enter the node values "<<endl;
    // takeInput(root);
    Node* root=NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    levelOrderTraversal(root);
    return 0;
}
