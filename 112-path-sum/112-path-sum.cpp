/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int f=0;
void solve(TreeNode*root,int t,int &sum)
    {
       if(root==NULL)return;
      
     sum+=root->val;
     if(root->left==NULL and root->right==NULL and sum==t)f=1;
    solve(root->left,t,sum);
    solve(root->right,t,sum);
      sum-=root->val;
    
        
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        int s=0;
        solve(root,targetSum,s);
        return f;
    }
};