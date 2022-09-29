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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>ans;
        TreeNode*cur=root;
        while(cur!=NULL or !s.empty())
        {
              while(cur!=NULL)
              {
                  s.push(cur);
                  cur=cur->left;
              }
            if(!s.empty())
            {
              cur=s.top();
                s.pop();
                ans.push_back(cur->val);
               // if(cur->right)
                  cur=cur->right;
                   
                
                
            }
        }
        return ans;
    }
};