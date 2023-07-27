#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val=x;
        left=right=NULL;
    }
};
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(root==NULL)  return ans;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            TreeNode *node=q.front();
            q.pop();
            if(node->left!=NULL)  q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            temp.push_back(node->val);
        }
        ans.push_back(temp);
    }
    return ans;
}