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
Node *middle(Node *head)
{
    if(head==NULL)
    {
       return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    Node *curr;
    int cnt=0;
    for(curr=head;curr!=NULL;curr->next)
    {
         cnt++;
    }
    for(int i=0;i<cnt/2;i++)
    
        curr=curr->next;
        cout<<curr->data;
    
}