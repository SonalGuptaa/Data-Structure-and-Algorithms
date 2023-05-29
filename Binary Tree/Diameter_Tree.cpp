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
int Height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1 = Height(root->left);
    int h2 = Height(root->right);
    return 1+max(h1,h2);
}
int diameter(Node *root)
{
    //base case
    if(root==NULL)
    {
        return 0;
    }
    //rec case
    //Diameter passing through root
    int D1 = Height(root->left) + Height(root->right);
    //Diameter in LeftSubtree
    int D2 = diameter(root->left);
    //Diameter in RightSubtree
    int D3 = diameter(root->right);

    return max(D1,max(D2,D3));
}
int main()
{
    

}