#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
Node *reverseDLL(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node *prev=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->prev=prev;
        curr=curr->prev;
    }
    return prev->prev;
}