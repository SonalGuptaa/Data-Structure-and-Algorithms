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
Node *revList(Node *head)
{
    vector<int> temp;
    for(Node *curr=head;curr!=NULL;curr->next)
    {
        temp.push_back(curr->data);
    }
    for(Node *curr=head;curr!=NULL;curr->next)
    {
        curr->data=temp.back();
        temp.pop_back();
    }
}
