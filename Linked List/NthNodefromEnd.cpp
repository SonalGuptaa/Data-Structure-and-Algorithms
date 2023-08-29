  Node *curr;
    int cnt=0;
    for(curr=head;curr!=NULL;curr->next)
    {
       cnt++;
    }
    if(cnt<x)
    {
        return ;
    }
    Node *curr=head;
    for(int i=1;i<cnt-x+1;i++)
    
        curr=curr->next;
   
    cout<<curr->data;#include<bits/stdc++.h>
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
void PrintNthNode(Node *head,int x)
{
   
}