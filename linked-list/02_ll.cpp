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

Node* convertArrtoLL(int arr[],int n)
{
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;
};

Node* deleteHead(Node* head)
{
    if(head==nullptr) return head;
    Node* temp =head;
    head=head->next;
    free(temp);
    return head;
};

Node* deleteTail(Node* head)
{
    if( head == nullptr || head->next == nullptr) return nullptr;
    Node* temp= head;
    while(temp->next->next != nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
};

Node* removeK(Node* head,int k)
{
    if(head==nullptr) return head;
    Node* temp=head;
    if(k==1)
    {
        head=head->next;
        delete temp;
        return head;
    }
    int cnt =0;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next= prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
};

int main()
{
    int arr[]={1,2,3,4,5,6};
    Node* head = convertArrtoLL(arr,6);
   // head= deleteHead(head);
   // head=deleteTail(head);
     head=removeK(head,1);
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}