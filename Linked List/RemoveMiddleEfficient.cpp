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
    if(head==NULL)
    {
        return;
    }
    //Two pointers
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL & fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}