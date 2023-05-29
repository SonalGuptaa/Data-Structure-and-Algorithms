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
Node *delnode(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *temp=head->next;
    delete head;
    return temp;
}
void printList(Node *temp)
{
    Node *curr=temp;
    while(curr!=NULL){

        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
}