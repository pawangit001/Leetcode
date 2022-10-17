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
bool solve(TreeNode*root,int t)
    {
       if(root==NULL)return false;
      if( root->left==NULL and root->right==NULL and root->val==t)return true;
    
        
         
   return solve(root->left,t-root->val) or solve(root->right,t-root->val);
     
    
        
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        int s=0;
       return solve(root,targetSum);
        
    }
};