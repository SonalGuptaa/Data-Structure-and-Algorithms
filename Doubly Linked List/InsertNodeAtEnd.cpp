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
Node *insertAtEnd(Node *head ,int data)
{
    Node *temp=new Node(data);
    if(head==NULL)
    {
        return temp; 
    }
    Node *curr=temp;
    while(curr!=NULL)
      curr=curr->next;
      curr->next=temp;
      temp->prev=curr;

      return head;
}