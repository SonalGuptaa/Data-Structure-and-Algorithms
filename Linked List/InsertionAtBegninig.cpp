#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data; 
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
Node *insertAtBegin(Node *head,int x)
{
    //Allocate the memory for new node
    Node *temp=new Node(x);
    temp->next = head;
    return temp;
   
}
void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=NULL;
    head=insertAtBegin(head,30);
    head=insertAtBegin(head,20);
    head=insertAtBegin(head,10);
    printlist(head);
    return 0;
}