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
void NthNode(Node *head,int x)
{
    if(head==NULL)
    {
        return;
    }
    Node *first=head;
    for(int i=0;i<x;i++)
    {
        if(first==NULL)
        {
            return;
        }
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}