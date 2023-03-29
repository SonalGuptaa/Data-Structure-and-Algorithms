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
Node *DeleteHead(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else{
        //  Node *curr=head->next;
        //  curr->prev==NULL;
        // return prev;
        Node *temp=head;
        head=head->next;
        delete temp;
        return head;

    }
}