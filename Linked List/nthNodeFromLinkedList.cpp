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
    Node *curr=head;
    Node *temp =head;
    int count=0;
    while(curr != NULL)
    {
        count++;
        curr=curr->next;
        
    }
    if(n>count)
    {
          return -1;
    }
    for(int i=0;i<count-n;i++)
    {
      temp=temp->next;
    }
      return temp->data;
}