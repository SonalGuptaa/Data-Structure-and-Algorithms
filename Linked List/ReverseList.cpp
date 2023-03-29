int getNthFromLast(Node *head, int n)
{
ListNode *curr=head;
    ListNode *prev=NULL;
    ListNode *temp;
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
    }
};