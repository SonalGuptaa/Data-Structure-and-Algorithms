#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* deleteTail(node * head){
    //Complete this function
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while(curr->next->next != NULL)
    {
        curr=curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

