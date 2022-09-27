/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
     TreeNode* solve(TreeNode*root,TreeNode*p,TreeNode*q)
    {
        if(root==NULL)return NULL;
        if(root==p or root==q)return root;
         if(root->val>p->val and root->val<q->val)return root;
         else if(root->val<p->val and root->val<q->val)
       {      
        TreeNode*lca1=solve(root->left,p,q);
        TreeNode*lca2=solve(root->right,p,q);
        if(lca1!=NULL and lca2!=NULL)return root;
        else if(lca1!=NULL)
            return lca1;
        else
            return lca2;
      }
         else
         {
                   
        TreeNode*lca1=solve(root->left,p,q);
        TreeNode*lca2=solve(root->right,p,q);
        if(lca1!=NULL and lca2!=NULL)return root;
        else if(lca1!=NULL)
            return lca1;
        else
            return lca2;
         }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return solve(root,p,q);
    }
};