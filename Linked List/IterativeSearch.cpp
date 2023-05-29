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
bool search(Node *head,int16_t x)
{
    Node *curr=head;
    int pos=1;
    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            return true;
        }
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return false;
}
// int search(Node *head,int x)
// {
//     Node *curr=head;
//     int pos=1;
//     while(curr!=NULL)
//     {
//         if(curr->data==x)
//         {
//             cout<<pos<<" ";
//             break;
//         }
//         else
//         {
//             pos++;
//             curr=curr->next;
//         }
//     }
//    return -1;
// }
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int x=40;
   search(head,x);

}