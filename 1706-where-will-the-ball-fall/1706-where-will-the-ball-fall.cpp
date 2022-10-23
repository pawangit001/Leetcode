class Solution {
public:
    int solve(int r,int c,vector<vector<int>>&grid)
    {
        if(r==grid.size())return c;
        int nxtc=c+grid[r][c];
        if(nxtc<0 or nxtc>grid[0].size()-1 or grid[r][c]!=grid[r][nxtc])return -1;
        return solve(r+1,nxtc,grid);
    }
    vector<int> findBall(vector<vector<int>>& grid) {
       int n=grid[0].size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++)
        {
            ans[i]=solve(0,i,grid);
        }
        return ans;
    }
};