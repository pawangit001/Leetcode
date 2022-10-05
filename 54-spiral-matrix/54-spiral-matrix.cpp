class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int top=0;
        int bottom=r-1;
        int left=0;
        int right=c-1;
        vector<int>ans;
        while(top<=bottom and left<=right)
        {
            for(int i=top;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
           if(top>bottom)return ans;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            
            right--;
            if(left>right)return ans;
            
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
                
            }
            
            bottom--;
           if(top>bottom)return ans;
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            if(left>right)return ans;
            left++;
        }
        return ans;
    }
};