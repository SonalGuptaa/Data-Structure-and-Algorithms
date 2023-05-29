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
Node *insertEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    
        curr=curr->next;
        curr->next=temp;
    
    return head;
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){

        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    // Node *head=new Node(10);
    // head->next=new Node(20);
    // head->next->next=new Node(30);
    // head->next->next->next=new Node(40);
    // insertEnd(head,50);
    // printList(head);
    Node *head=NULL;
    head=insertEnd(head,30);
    head=insertEnd(head,20);
    head=insertEnd(head,10);
       head=insertEnd(head,100);
    printList(head);
}