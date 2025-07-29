#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
            q.push(NULL);
    }
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout<<"this is preorder ";
    // preorder(root);

    // cout<<"this is inorder ";
    // inorder(root);

    // cout<<"this is postorder ";
    // postorder(root);
    cout<<"the level order traversal ";
    levelOrder(root);
    return 0;
}
