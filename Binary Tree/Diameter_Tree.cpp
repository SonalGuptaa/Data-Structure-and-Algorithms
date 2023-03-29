#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};
void Height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1 = Height(root->left);
    int h2 = Height(root->right);

}
int main()
{

}