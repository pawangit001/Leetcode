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
    void solve(TreeNode*root, TreeNode*node,int d,int l,int r)
    {
        if(root==NULL)return;
        if(l==d-1 )
        {
                TreeNode*t=root->left;
                root->left=new TreeNode(node->val);
                root->left->left=t;
          
                TreeNode*tt=root->right;
                root->right=new TreeNode(node->val);
                root->right->right=tt;
                
        }
          
        else
        {  solve(root->left,node,d,l+1,r);
            solve(root->right,node,d,l+1,r+1);}
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root==NULL)return root;
        TreeNode*node=new TreeNode(val);
        if(depth==1)
        { 
         node->left=root;
         return node;}
        solve(root,node,depth,1,1);
        return root;
    }
};