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
int RecursiveSearch(Node *head,int x)
{
    if(head==NULL)
    {
        return -1;
    }
    if(head->data==x)
    {
        return 0;
    }
    else
    {
        int idx=RecursiveSearch(head->next,x);
        if(idx==-1)
        {
            return -1;
        }
        else
        {
            return idx+1;
        }
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int x=40;
    cout<<RecursiveSearch(head,x);

}