class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r,vector<int>(c));
        
        int m=mat.size();int n=mat[0].size();
        int t=m*n;
        if(r*c!=t)return mat;
        for(int i=0;i<t;i++)
        {
            ans[i/c][i%c]=mat[i/n][i%n];
        }
        return ans;
    }
};