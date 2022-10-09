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
    unordered_set<int>s;
    
    bool help(TreeNode*root,int k)
    {
        if(root==NULL)return false;
        if(s.count(k-root->val))return true;
        s.insert(root->val);
        return help(root->left,k) or help(root->right,k);
    }
    
//     bool solve(TreeNode*root,TreeNode* node,int k)
//     {
//         if(root==NULL)return false;
        
//         if(root->val<=k)
//         {
//             int t=k-root->val;
//           //  root->val=0;
//             if(help(node,t))return true;
//         }
//         if(solve(root->left,node,k))return true;
//         else
//             return solve(root->right,node,k);
//     }
    bool findTarget(TreeNode* root, int k) {
               
       return help(root,k);
    }
};