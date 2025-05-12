#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int val)
    {
       data = val;
        next=nullptr;
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

int lengthofLL(Node* head){
    int count=0;
    Node* temp = head;
    while(temp)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

bool presentinLL(Node*head, int k)
{
    Node* temp= head;
    while(temp)
    {
        if(temp->data == k)
        {
            return true;
        }
        temp =temp->next;
    }
    return false;
}

Node* removeHead(Node* head)
{
    if(head==nullptr) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}

int main()
{
    int arr[]={4,6,5,4,2};
    Node* head = convertArrtoLL(arr,5);
    head = removeHead(head);
    Node* temp =head;
    //this is to print the ll 
    
    while(temp)
    {
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
  //  cout<<"the length of linked list "<<lengthofLL(head)<<endl;

  //  cout<<"if the value is present in ll "<<presentinLL(head,5);
    return 0;
}
