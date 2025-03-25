#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* convertArrtoLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++)
    {
        Node* temp = new Node(arr[i]);  // Create new node
        mover->next = temp;  // Link previous node to new node
        mover = temp;  // Move mover forward
    }
    return head;
}

int main()
{
    int arr[]={4,6,5,4,2};
    Node* one = convertArrtoLL(arr,5);
    cout<<one->data;
    return 0;
}