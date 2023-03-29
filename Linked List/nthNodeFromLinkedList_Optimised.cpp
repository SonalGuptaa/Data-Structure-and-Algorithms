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
int getNthFromLast(Node *head, int n)
{
 if(head == NULL)
    {
        return NULL;
    }
    Node *slow=head;
    Node *fast=head;
   
    for(int k=0;k<n;k++)
    {
        if(slow==NULL)
        return -1;
        slow=slow->next;
    }
   
    while(slow!=NULL )
    {
        fast=fast->next;
        slow=slow->next;
         
    }
    return fast->data;
       
}