#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data; 
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    } 

};
Node *middle(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    if(head->next == NULL)
    {
        return NULL;
    }
    Node *curr;
    int count=0;
    for(curr=head; curr!=NULL; curr->next)
    {
        count++;
    }
    curr =head;
    for(int i=0; i<count/2; i++)
    {
        curr=curr->next;
    }
    cout<<curr->data;
}