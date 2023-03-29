
#include<iostream>
using namespace std;
 class Node
 {
    public:
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {
            delete next;
        }
        cout<<"Deleting node with data"<<data<<endl;
    }
 };
 class List
 {
    Node *head;
    Node *tail;
    //private 
    int helper(Node *start,int key)
    {
        //Base Case
        if(start==NULL)
        {
            return -1;
        }
        //Value Matches
        if(start->data == key)
        {
            return 0;
        }
        //recursive call on remaining part of linked list
        int subidx=helper(start->next,key);
        if(subidx == -1)
        {
            return -1;
        }
        return subidx+1;

    }
    public:
    List()
    {
        head=NULL;
        tail=NULL;
    }
    Node *begin()
    {
        return head;
    }
    void push_front(int data)
    {
        if(head==NULL)
        {
            Node *n=new Node(data);
            head=tail=n;
        }
        else
        {
            Node *n=new Node(data);
            n->next = head;
            head=n;
        }
    }
    void push_back(int data)
    {
        if(head==NULL)
        {
            Node *n=new Node(data);
            head=tail=n;
        }
        else
        {
            Node *n=new Node(data);
            tail->next=n;
            n=tail;
        }
    }
    void insert(int data,int pos)
    {
        if(pos==0)
        {
            push_front(data);
            return;
        }
        Node* temp=head;
        for(int jump=1;jump<=pos-1;jump++)
        {
            temp=temp->next;
        }
        Node* n=new Node(data);
        n->next=temp->next;
        temp->next=n;
    }
    int search(int key)
    {
        Node *temp =head;
        int pos=0;
        while(temp!=NULL)
        {
            if(head->data == pos){
                 return pos;
            }
            pos++;
            temp = temp->next;
        }
        return -1;
    }
    int recursiveSearch(int key)
    {
        int idx=helper(head,key);
        return idx;
    }
    //Deletion in entire linked list (Destructor)
    ~List(){
        if(head!=NULL)
        {
            delete head;
            head=NULL;
        }
    }
 }; 