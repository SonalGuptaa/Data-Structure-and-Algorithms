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
Node *InsertPos(Node *head,int pos,int data)
{
    Node *temp=new Node(data);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i =1;i<pos-2 && curr!=NULL;i++)
    
        curr=curr->next;
    if(curr==NULL)
    {
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
    
    
}


void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    
    Node *temp = new Node(data);
    Node* curr = head;
    
    for(int i=1; i<=pos; i++){
        
        if(curr==NULL){
            return;
        }
        if(i==pos){
            temp->next = curr->next;
            curr->next = temp;
        }
        curr = curr->next;
        
    }
}