class Solution
{
public:
    int findMin(Node *root)
    {
        //code here
        if(root==NULL)
        {
            return INT_MAX;
        }
        else
        {
            return min(root->data,min(findMin(root->left),findMin(root->right)));
        }
    }
};