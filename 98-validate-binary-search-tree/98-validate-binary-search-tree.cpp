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
    bool solve(TreeNode*root,long mn ,long mx)
    {
        if(root==NULL)return true;
        
return (((long)root->val>mn )and ((long)root->val<mx )and solve(root->left,mn,root->val) and solve(root->right,root->val,mx));
    }
    bool isValidBST(TreeNode* root) {
        long mn=LONG_MIN;
        long mx=LONG_MAX;
        return solve(root,mn,mx);
    }
};