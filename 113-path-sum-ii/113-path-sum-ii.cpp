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
    void solve(TreeNode*root,int target,int sum,vector<int>t,vector<vector<int>>&ans)
    {
        if(root==NULL)return;
        sum+=root->val;
        t.push_back(root->val);
        if(root->left==NULL and root->right==NULL)
        {
            if(sum==target)
                ans.push_back(t);
        }
        solve(root->left,target,sum,t,ans);
        solve(root->right,target,sum,t,ans);
        t.pop_back();
        sum-=root->val;
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>t;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        
        solve(root,targetSum,0,t,ans);
        return ans;
    }
};