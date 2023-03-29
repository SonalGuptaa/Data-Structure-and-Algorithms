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
Node *DeleteLast(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next=NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        temp->prev->next==NULL;  //last Node k prev k next ko NULL
        delete temp;
        return head;

    }
}