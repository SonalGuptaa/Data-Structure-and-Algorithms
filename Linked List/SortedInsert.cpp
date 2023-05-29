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
Node Insert(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    if(x < head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr!=NULL && curr->next->data < x)
        curr=curr->next;
        temp->next=curr->next;
        curr->next=temp;
        return head;
}
