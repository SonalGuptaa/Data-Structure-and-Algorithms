class Solution
{
public:
    int findMax(Node *root)
    {
        //code here
        if(root == NULL)
        {
            return INT_MIN;
        }
        else
        {
            return max(root->data, max(findMax(root->left),findMax(root->right)));
        }
        
    }
};